#include <fstream>
#include <complex> 

#include "AutomationThread.h"

#include "../RobotLib/Matrix.h"
#include "../RobotLib/Vector.h"
#include "../RobotLib/Text.h"
#include "../RobotLib/PlaneToCoordinateSystem.h"
#include "../RobotLib/Where.h"

AutomationThread::AutomationThread(com::sun::star::uno::Reference<com::sun::star::frame::XComponentLoader> createdXComponentLoader) :
        impressAutomation(createdXComponentLoader),
        running(false)
{
    this->robot = new Robot("/dev/ttyS0", 750000);
    this->robot->getPort()->setLiveCommandMode(false);
    
    positions.reserve(13);
    positions[AboveSpecimen] 		= Where(90, 350, -310,-166,186);
    positions[SlightyAboveSpecimen] 	= Where(90, 350, -340,-166,186);
    positions[ProjectionBeginPosition] 	= Where(+32.40,-882.27,+428.44,+286.04,+85.25);
    positions[ProjectionIntoBeam] 	= Where(+32.40,-985.23,+428.44,+286.28,+85.25);
    positions[EndoscopeSavety] 		= Where(+882.33,+30.68,+428.43,+196.15,+85.25);
    positions[EndoscopeInside] 		= Where(+882.33,+30.68,+450.43,+196.15,+85.25);
    positions[ComputedTomographyBegin] 	= Where(+32.40,-923.52,+428.44,+286.14,+85.25);
    positions[ComputedTomographyEnd] 	= Where(+32.40,-923.52,+428.44,-103.03,+85.25);
    positions[EndOfGripSpecimen] 	= Where(90, 350, -300,-166,186);
    positions[EndOfProjection] 		= Where(+32.40,-872.27,+428.44,+286.04,+85.25);
    positions[EndOfEndoscope] 		= Where(+882.33,+30.68,+438.43,+196.15,+85.25);
    positions[EndOfComputedThomography] = positions[EndOfProjection];
    positions[EndOfGoHome]	 	= robot->whereIsHome();
}

AutomationThread::~AutomationThread()
{
    impressAutomation.stopPresentation();
    if (this->robot != NULL)
    {
        delete this->robot;
        this->robot = NULL;
    }
}

void AutomationThread::uploadProgram()
{
    //grip specimen
    {
        this->robot->moveLinearTo(positions[AboveSpecimen]); 
	this->robot->grip.open();				     	//open gripper
        this->robot->moveLinearTo(positions[SlightyAboveSpecimen]);	//slowly down
        this->robot->grip.close();				     	//close gripper
        this->robot->moveLinearTo(positions[AboveSpecimen]);
	this->robot->moveLinearTo(positions[EndOfGripSpecimen]);
        this->robot->getPort()->sendQuedCommands(1);
    }

    //projection
    {
        //this->robot->moveLinearTo(Vector(705, -53, 372), 48,118); //above specimen
        this->robot->moveLinearTo(positions[ProjectionBeginPosition]);  //to projection begin position
        this->robot->wait(100);
        this->robot->moveLinearTo(positions[ProjectionIntoBeam]);  //into beam
        this->robot->wait(20);
        this->robot->moveLinearTo(positions[ProjectionBeginPosition]);  //to projection begin position
	this->robot->moveLinearTo(positions[EndOfProjection]);
        this->robot->wait(100);
        this->robot->getPort()->sendQuedCommands(2);
    }
    //endoscope
    {
        this->robot->moveLinearTo(positions[EndoscopeSavety]);
	this->robot->moveLinearTo(positions[EndoscopeInside]);
	this->robot->moveLinearTo(positions[EndoscopeSavety]);
	this->robot->moveLinearTo(positions[EndOfEndoscope]);
        this->robot->getPort()->sendQuedCommands(3);
    }
    //ct
    {
        this->robot->moveLinearTo(positions[ProjectionBeginPosition]);  //to projection begin position
        this->robot->moveLinearTo(positions[ComputedTomographyBegin]);//ct begin
        this->robot->moveLinearTo(positions[ComputedTomographyEnd]);//ct end
        this->robot->moveLinearTo(positions[ProjectionBeginPosition]);  //to projection begin position
	this->robot->moveLinearTo(positions[EndOfComputedThomography]);
        this->robot->getPort()->sendQuedCommands(4);
    }
    //release specimen
    {
        this->robot->moveLinearTo(positions[AboveSpecimen]); 	//above specimen
        this->robot->moveLinearTo(positions[SlightyAboveSpecimen]);	//slowly down
        this->robot->grip.open();				     	//open gripper
        this->robot->moveLinearTo(positions[AboveSpecimen]); 	//above specimen
	this->robot->moveLinearTo(positions[EndOfGoHome]);
        this->robot->getPort()->sendQuedCommands(5);
    }
}

void AutomationThread::run()
{
    running= true;
    usleep(3000000); // wait until the presentation has been loaded

    while(running)
    {           
	if(this->robot->isGrabberClosed())
	{
	    releaseSpecimen();
	}
	
	pickupSpecimen();
	acquireRadioscopieData();
	acquireEnoscopeData();
	acquireComputerTomographyData();
	releaseSpecimen();

        // intermediate
        if(running)
        {
            impressAutomation.blankScreen();
            usleep(1000);
        }
    }
}

void AutomationThread::pickupSpecimen()
{
    if(running)
    {
	robot->getPort()->executeProgram(1);
	impressAutomation.showSlide(1);
	bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfGripSpecimen], 2, 1.0);
    }   
}
void AutomationThread::acquireRadioscopieData()
{
    if(running)
    {
	robot->getPort()->executeProgram(2);
	impressAutomation.showSlide(2);
	bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfProjection], 20, 1.0);
    }
}

void AutomationThread::acquireEnoscopeData()
{
    if(running)
    {
	robot->getPort()->executeProgram(3);
	impressAutomation.showSlide(3);
	bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfEndoscope], 20, 1.0);
    }
}

void AutomationThread::acquireComputerTomographyData()
{
    if (running)
    {
	robot->getPort()->executeProgram(4);
	impressAutomation.showSlide(4);
	bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfComputedThomography], 20, 1.0);
    }  
}
    
void AutomationThread::releaseSpecimen()
{
    if(running)
    {
	robot->getPort()->executeProgram(5);
	impressAutomation.showSlide(5);
	bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfGoHome], 20, 1.0);
    }
}

void AutomationThread::stopProgram()
{
  running = false;
}

void AutomationThread::abortTransmission()
{
    this->robot->getPort()->abortDataTransmission();
}

void AutomationThread::loadPresentation(std::string fileName)
{
    impressAutomation.loadPresentation(fileName);
}

void AutomationThread::startPresentation()
{
    impressAutomation.startPresentation();
}

void AutomationThread::stopPresentation()
{
    impressAutomation.stopPresentation();
}

void AutomationThread::nextSlide()
{
    impressAutomation.nextSlide();
}

void AutomationThread::previousSlide()
{
    impressAutomation.previousSlide();
}

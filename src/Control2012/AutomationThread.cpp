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
    this->meishiGateControl = new MeishiGateControl("/dev/ttyACM0");
    this->robot = new Robot("/dev/ttyS0", 750000);
    this->robot->getPort()->setLiveCommandMode(false);
 
    
    
    positions.reserve(30);
    positions[AboveSpecimen] 		= Where(-96.90,+379.82,-107.17,-184.51,+186.25);
    positions[SlightyAboveSpecimen] 	= Where(-96.90,+379.82,-212.32,-184.51,+186.25);
    positions[ProjectionBeginPosition] 	= Where(+32.40,-882.27,+428.44,+286.04,+85.25);
    positions[ProjectionIntoBeam] 	= Where(+32.40,-985.23,+428.44,+286.28,+85.25);
    positions[EndoscopeSavety] 		= Where(+882.33,+30.68,+428.43,+196.15,+85.25);
    positions[EndoscopeInside] 		= Where(+882.33,+30.68,+450.43,+196.15,+85.25);
    positions[ComputedTomographyBegin] 	= Where(+32.40,-923.52,+428.44,+286.14,+85.25);
    positions[ComputedTomographyEnd] 	= Where(+32.40,-923.52,+428.44,-103.03,+85.25);
    positions[EndOfGripSpecimen] 	= Where(-96.90,379.82,-107.17,-184.51,186.25);
    positions[EndOfProjection] 		= Where(+32.40,-872.27,+428.44,+286.04,+85.25);
    positions[EndOfEndoscope] 		= Where(+882.33,+30.68,+438.43,+196.15,+85.25);
    positions[EndOfComputedThomography] = positions[EndOfProjection];
    positions[EndOfGoHome]	 	= Where(275.0,0,110,32.58,180.0);
       

    positions[BeOffended]	 	= Where(275.0,0,110,32.58,180.0);
    positions[DoTaunting]	 	= Where(275.0,0,110,32.58,180.0);
    positions[EndOfBeOffended]	 	= Where(275.0,0,110,32.58,180.0);
    positions[EndOfTaunting]	 	= Where(275.0,0,110,32.58,180.0);
    
    positions[GotoMeishi1Safety] 	= Where(791.01,-4.20,205.06,-6.93,95.10);   
    positions[GotoMeishi1Grip]	 	= Where(889.08,-4.20,205.06,-6.93,95.10);   
    positions[GotoMeishi1Drop]	 	= Where(-27.51,226.56,-173.15,-101.28,190.66);    
    
}

AutomationThread::~AutomationThread()
{
    impressAutomation.stopPresentation();
    if (this->robot != NULL)
    {
        delete this->robot;
        this->robot = NULL;
    }
    
    if(this->meishiGateControl != NULL)
    {
	delete this->meishiGateControl;
	this->meishiGateControl = NULL;
    }
}

void AutomationThread::uploadProgram()
{
    //grip specimen
    {
	this->robot->speed(20);
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
	this->robot->speed(20);
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
	this->robot->speed(20);
        this->robot->moveLinearTo(positions[EndoscopeSavety]);
	this->robot->moveLinearTo(positions[EndoscopeInside]);
	this->robot->moveLinearTo(positions[EndoscopeSavety]);
	this->robot->moveLinearTo(positions[EndOfEndoscope]);
        this->robot->getPort()->sendQuedCommands(3);
    }
    //ct
    {
	this->robot->speed(20);
        this->robot->moveLinearTo(positions[ProjectionBeginPosition]);  //to projection begin position
        this->robot->moveLinearTo(positions[ComputedTomographyBegin]);//ct begin
        this->robot->moveLinearTo(positions[ComputedTomographyEnd]);//ct end
        this->robot->moveLinearTo(positions[ProjectionBeginPosition]);  //to projection begin position
	this->robot->moveLinearTo(positions[EndOfComputedThomography]);
        this->robot->getPort()->sendQuedCommands(4);
    }
    //release specimen
    {
 	this->robot->speed(20);
        this->robot->moveLinearTo(positions[AboveSpecimen]); 	//above specimen
        this->robot->moveLinearTo(positions[SlightyAboveSpecimen]);	//slowly down
        this->robot->grip.open();				     	//open gripper
        this->robot->moveLinearTo(positions[AboveSpecimen]); 	//above specimen
	this->robot->moveLinearTo(positions[EndOfGoHome]);
        this->robot->getPort()->sendQuedCommands(5);
    }
      
    // beOffended
    {
 	this->robot->speed(20);

        this->robot->getPort()->sendQuedCommands(6);
    } 
    
    // doTaunting
    {
 	this->robot->speed(20);

        this->robot->getPort()->sendQuedCommands(7);
    }    
    
    //gotoMeishi1
    {
      	this->robot->speed(20);
	this->robot->grip.open();
	this->robot->moveLinearTo(positions[GotoMeishi1Safety]); 	
        this->robot->getPort()->sendQuedCommands(8);
    } 
    
    //gripMeishi1
    {
      	this->robot->speed(20);
        this->robot->moveLinearTo(positions[GotoMeishi1Grip]);	
	this->robot->grip.close();
        this->robot->getPort()->sendQuedCommands(9);
    }   
    
    //backToMeishi1
    {
      	this->robot->speed(20);
        this->robot->moveLinearTo(positions[GotoMeishi1Safety]);	
        this->robot->getPort()->sendQuedCommands(10);
    } 
    
    //dropMeishi1
    {
      	this->robot->speed(20);
        this->robot->moveLinearTo(positions[GotoMeishi1Drop]);	
	this->robot->grip.open();
        this->robot->getPort()->sendQuedCommands(11);
    } 
}

void AutomationThread::run()
{
    //this->robot->speed(30);
    running= true;
    usleep(3000000); // wait until the presentation has been loaded
    std::string gateName = "1";
    checkAndGrabMeishi(gateName);

    while(running)
    {           
	if(this->robot->whereIsRobot() != positions[EndOfGoHome])
	{
	    releaseSpecimen();
	}
	checkAndGrabMeishi(gateName);
	
	pickupSpecimen();
	checkAndGrabMeishi(gateName);
	
	acquireRadioscopieData(0);
	checkAndGrabMeishi(gateName);	
	
	acquireEnoscopeData();
	checkAndGrabMeishi(gateName);	
	
	acquireComputerTomographyData();
	checkAndGrabMeishi(gateName);	
	
	releaseSpecimen();

        // intermediate
        if(running)
        {
            impressAutomation.blankScreen();
            usleep(1000);
        }
    }
}

void AutomationThread::checkAndGrabMeishi(std::string gateName)
{
    if(meishiGateControl->checkGate(gateName))
    {
	releaseSpecimen();
	if(!meishiGateControl->checkGate(gateName))
	{
	    beOffended();
	    pickupSpecimen();
	}
	
	robot->getPort()->executeProgram(8);	
	robot->waitUntilRobotIsAtTargetPosition( positions[GotoMeishi1Safety], 2, 1.0);
	if(!meishiGateControl->checkGate(gateName))
	{
	    beOffended();
	    pickupSpecimen();
	}
	
	robot->getPort()->executeProgram(9);
	if(!meishiGateControl->checkGate(gateName))
	{
	    robot->waitUntilRobotIsAtTargetPosition( positions[GotoMeishi1Grip], 2, 1.0);
	    robot->getPort()->setLiveCommandMode(true);
	    this->robot->grip.open();	
	    this->robot->wait(1000);
	    if (meishiGateControl->checkGate(gateName))
	    {
	      	this->robot->grip.close();
	    }
	    robot->getPort()->setLiveCommandMode(false);
	    
	    if(!meishiGateControl->checkGate(gateName))    
	    {
	      beOffended();
	      pickupSpecimen();
	    }
	}
		
	robot->getPort()->executeProgram(10);	
	robot->waitUntilRobotIsAtTargetPosition( positions[GotoMeishi1Safety], 2, 1.0);
	doTaunting();
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

void AutomationThread::acquireRadioscopieData(int32 isarData)
{
    if(running)
    {
      switch(isarData)
      {
	case 0:
	{    
	  robot->getPort()->executeProgram(2);
	  impressAutomation.showSlide(2);
	  bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfProjection], 20, 1.0);
	  break;
	}
	default:
	{
	  
	}
      }
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


void AutomationThread::beOffended()   
{
    if (running)
    {
	robot->getPort()->executeProgram(6);
	impressAutomation.showSlide(2);
	bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfBeOffended], 20, 1.0);
    }  
}

void AutomationThread::doTaunting()
{
    if (running)
    {
	robot->getPort()->executeProgram(7);
	impressAutomation.showSlide(3);
	bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfTaunting], 20, 1.0);
    }  
}

void AutomationThread::gotoMeishi(std::string gateName)
{
/*    if (running)
    {
	robot->getPort()->executeProgram(8);
	impressAutomation.showSlide(1);
	bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfGotoMeishi], 20, 1.0);
    } */ 
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
  {
    this->meishiGateControl->send("1");
    std::string temp = this->meishiGateControl->readLine();
    std::cout << temp << std::endl;
  }
 //   impressAutomation.nextSlide();
}

void AutomationThread::previousSlide()
{
    impressAutomation.previousSlide();
}


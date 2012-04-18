#include <fstream>
#include <complex> 

#include <QFileDialog>
#include <QFileSystemModel>
#include <QMessageBox>
#include <QTimer>

#include "maingui.h"
#include "../../cmake/build/Control2012/ui_maingui.h"

#include "../RobotLib/Matrix.h"
#include "../RobotLib/Vector.h"
#include "../RobotLib/Text.h"
#include "../RobotLib/PlaneToCoordinateSystem.h"
#include "../RobotLib/Where.h"

mainGUI::mainGUI(com::sun::star::uno::Reference<com::sun::star::frame::XComponentLoader> createdXComponentLoader, QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::mainGUI),
        impressAutomation(createdXComponentLoader)
{
    ui->setupUi(this);

    this->robot = new Robot("/dev/ttyS0", 750000);
    this->robot->getPort()->setLiveCommandMode(false);
}

mainGUI::~mainGUI()
{
    if (this->robot != NULL)
    {
        delete this->robot;
        this->robot = NULL;
    }

    delete ui;
}

void mainGUI::uploadProgram()
{
    positions.reserve(13);
    positions[AboveSpecimen] 		= Where(90, 350, -310,-166,186);
    positions[SlightyAboveSpecimen] 	= Where(90, 350, -340,-166,186);
    positions[ProjectionBeginPosition] 	= Where(+32.40,-882.27,+428.44,+286.04,+85.25);
    positions[ProjectionIntoBeam] 	= Where(+32.40,-985.23,+428.44,+286.28,+85.25);
    positions[EndoscopeSavety] 		= Where(+882.33,+30.68,+428.43,+196.15,+85.25);
    positions[EndoscopeInside] 		= Where(+882.33,+30.68,+450.43,+196.15,+85.25);
    positions[ComputedTomographyBegin] 	= Where(0,-633.39,+877.04,-110.07,+0.46);
    positions[ComputedTomographyEnd] 	= Where(0,-633.39,+877.04,+289.33,+1.81);
    positions[EndOfGripSpecimen] 	= Where(90, 350, -300,-166,186);
    positions[EndOfProjection] 		= Where(+32.40,-872.27,+428.44,+286.04,+85.25);
    positions[EndOfEndoscope] 		= Where(+882.33,+30.68,+438.43,+196.15,+85.25);
    positions[EndOfComputedThomography] = positions[EndOfProjection];
    positions[EndOfGoHome]	 	= robot->whereIsHome();

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
        this->robot->grip.close();				     	//close gripper
	this->robot->moveLinearTo(positions[EndOfGoHome]);
        this->robot->getPort()->sendQuedCommands(5);
    }
}

void mainGUI::startProgram()
{
    loadPresentation();
    startPresentation();

    while (true)
    {               
        //grip specimen
        {
            robot->getPort()->executeProgram(1);
            impressAutomation.showSlide(1);
            bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfGripSpecimen], 2000, 1.0);
        }
        //projection
        {
            robot->getPort()->executeProgram(2);
            impressAutomation.showSlide(2);
            bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfProjection], 2000, 1.0);
        }

        //endoscope
        {
            robot->getPort()->executeProgram(3);
            impressAutomation.showSlide(3);
            bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfEndoscope], 2000, 1.0);
        }

        //ct
        {
            robot->getPort()->executeProgram(4);
            impressAutomation.showSlide(4);
            bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfComputedThomography], 2000, 1.0);
        }

        //release specimen
        {
            robot->getPort()->executeProgram(5);
            impressAutomation.showSlide(5);
            bool targetReached = robot->waitUntilRobotIsAtTargetPosition( positions[EndOfGoHome], 2000, 1.0);
        }

        // intermediate
        {
            impressAutomation.blankScreen();
            usleep(1000);
        }
    }
}

void mainGUI::abortTransmission()
{
    this->robot->getPort()->abortDataTransmission();
}

void mainGUI::selectPresentation()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.selectFile(this->ui->selectedPresentation->text());

    if (dialog.exec())
    {
        this->ui->selectedPresentation->setText(dialog.selectedFiles().first());
    }
}

void mainGUI::loadPresentation()
{
    impressAutomation.loadPresentation(this->ui->selectedPresentation->text().toStdString());
}

void mainGUI::startPresentation()
{
    impressAutomation.startPresentation();
}

void mainGUI::stopPresentation()
{
    impressAutomation.stopPresentation();
}

void mainGUI::nextSlide()
{
    impressAutomation.nextSlide();
}

void mainGUI::previousSlide()
{
    impressAutomation.previousSlide();
}

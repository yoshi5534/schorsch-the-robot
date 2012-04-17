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
    // nein sagen
    robot->speed(30);
    this->robot->moveLinearTo(Vector(705, -53, 372), 48,118);
    this->robot->moveLinearTo(Vector(490, -510, 372), 90,118);
    this->robot->moveLinearTo(Vector(600, 370, 370), 12, 118);
    this->robot->moveLinearTo(Vector(490, -510, 372), 90,118);
    this->robot->moveLinearTo(Vector(705, -53, 372), 48,118);
    this->robot->goHome();   
    this->robot->getPort()->sendQuedCommands(2);      
}
 
void mainGUI::abortTransmission()
{
    this->robot->getPort()->abortDataTransmission();
}

bool mainGUI::robotIsAtHomePossition(float64 allowedDelta)
{
    Where currentLocation = robot->whereIsRobot();
    Where robotHome = robot->whereIsHome();

    float64 deltaX = std::abs(currentLocation.x - robotHome.x);
    float64 deltaY = std::abs(currentLocation.y - robotHome.y);
    float64 deltaZ = std::abs(currentLocation.z - robotHome.z);
    float64 deltaA = std::abs(currentLocation.a - robotHome.a);
    float64 deltaB = std::abs(currentLocation.b - robotHome.b);

    if ( deltaX <= allowedDelta &&
            deltaY <= allowedDelta &&
            deltaZ <= allowedDelta &&
            deltaA <= allowedDelta &&
            deltaB <= allowedDelta)
    {
        return true;
    }

    return false;
}

void mainGUI::loadPresentation()
{
  impressAutomation.loadPresentation("hallo.odi");
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
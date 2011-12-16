#include <fstream>
#include <complex>

#include <QFileDialog>
#include <QFileSystemModel>
#include <QMessageBox>
#include <QTimer>

#include "maingui.h"
#include "ui_maingui.h"

#include "../RobotLib/Matrix.h"
#include "../RobotLib/Vector.h"
#include "../RobotLib/Text.h"
#include "../RobotLib/PlaneToCoordinateSystem.h"
#include "../RobotLib/Where.h"


mainGUI::mainGUI(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::mainGUI)
{
    ui->setupUi(this);

    this->robot = new Robot("/dev/ttyS0", 750000);
    this->robot->getPort()->setLiveCommandMode(false);
    this->automaticLastFilePrinted = QTime::currentTime();
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

void mainGUI::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void mainGUI::yesClicked()
{
    robot->speed(30);
    this->robot->moveLinearTo(Vector(705, -53, 372), 48,118);
    this->robot->moveLinearTo(Vector(710, -7, 1033), 39,57);
    this->robot->moveLinearTo(Vector(412, -4, -143), 39,181);
    this->robot->moveLinearTo(Vector(710, -7, 1033), 39,57);
    this->robot->moveLinearTo(Vector(412, -4, -143), 39,181);    
    this->robot->moveLinearTo(Vector(705, -53, 372), 48,118);
    this->robot->goHome();   
    this->robot->getPort()->executeQuedCommands();    
}
void mainGUI::noClicked()
{
    robot->speed(30);
    this->robot->moveLinearTo(Vector(705, -53, 372), 48,118);
    this->robot->moveLinearTo(Vector(490, -510, 372), 90,118);
    this->robot->moveLinearTo(Vector(600, 370, 370), 12, 118);
    this->robot->moveLinearTo(Vector(490, -510, 372), 90,118);
    this->robot->moveLinearTo(Vector(705, -53, 372), 48,118);
    this->robot->goHome();   
    this->robot->getPort()->executeQuedCommands();    
}
void mainGUI::toolWeakClicked()
{
    robot->speed(25);
    this->robot->moveLinearTo(Vector(705, -53, 372), 48,118);
    this->robot->moveLinearTo(Vector(400, 651, 577), -14,93);
    this->robot->wait(200);
    this->robot->moveLinearTo(Vector(384, 625, 774), -14,69);
    this->robot->moveLinearTo(Vector(400, 651, 577), -14,93);
    this->robot->wait(30);
    this->robot->moveLinearTo(Vector(384, 625, 774), -14,69);
    this->robot->moveLinearTo(Vector(400, 651, 577), -14,93);
    this->robot->wait(300);
    this->robot->goHome();   
    this->robot->getPort()->executeQuedCommands(); 
}
void mainGUI::toolStrongClicked()
{
    robot->speed(25);
    this->robot->moveLinearTo(Vector(705, -53, 372), 48,118);
    this->robot->moveLinearTo(Vector(400, 651, 577), -14,93);
    this->robot->wait(200);
//     this->robot->moveLinearTo(Vector(5, 8, 1343), -14, -4);
    this->robot->moveLinearTo(Vector(-266, -387, 277), -11, -156);
    this->robot->wait(200);
    this->robot->moveLinearTo(Vector(400, 651, 577), -14,93);
    robot->speed(30);
    this->robot->wait(300);
    this->robot->goHome();  
    this->robot->getPort()->executeQuedCommands();  
}
void mainGUI::lookToDoorClicked()
{
    robot->speed(25);
    this->robot->moveLinearTo(Vector(705, -53, 372), 48,118);
    this->robot->moveLinearTo(Vector(-58, 802, 729), -50,91);
    this->robot->wait(100);
    robot->speed(20);
    this->robot->moveLinearTo(Vector(-55, 756, 521), -51,113);
    this->robot->moveLinearTo(Vector(-31, 431, 200), -51,164);
    this->robot->wait(50);
    robot->speed(13);
    this->robot->moveLinearTo(Vector(-88,422, 200 ),-58 ,164);
    this->robot->moveLinearTo(Vector(41, 430, 200), -41,164);
    this->robot->moveLinearTo(Vector(-88,422, 200 ),-58 ,164);
    this->robot->moveLinearTo(Vector(-31, 431, 200), -51,164);
    robot->speed(10);
    robot->speed(18);
    this->robot->goHome();   
    this->robot->getPort()->executeQuedCommands();     
}
void mainGUI::attackClicked()
{
    robot->speed(18);
    this->robot->moveLinearTo(Vector(368, 668, 569), -17,94);
    this->robot->moveLinearTo(Vector(368, 654, 569), -15,94);
    robot->speed(25);
    this->robot->moveLinearTo(Vector(368, 759, 569), -20,94);
    this->robot->wait(50);
    this->robot->moveLinearTo(Vector(368, 604, 569), -15,94);
    robot->speed(15);
    this->robot->moveLinearTo(Vector(569, 229, 282), 21,132);
    robot->speed(30); 
    this->robot->moveLinearTo(Vector(368, 759, 569), -20,94);
    this->robot->moveLinearTo(Vector(368, 975, 569), -24,94);
    this->robot->wait(30);
    this->robot->moveLinearTo(Vector(368, 668, 569), -17,94);
    this->robot->wait(50);
    robot->speed(18);
    this->robot->moveLinearTo(Vector(705, -53, 372), 48,118);
    this->robot->goHome();   
    this->robot->getPort()->executeQuedCommands();  
}
void mainGUI::obeisanceClicked()
{
    robot->speed(20);
    this->robot->moveLinearTo(Vector(705, -53, 372), 48,118);
    this->robot->moveLinearTo(Vector(730, -54, 671), 48,94);
    this->robot->wait(50);
    robot->speed(25);
    this->robot->moveLinearTo(Vector(277, -20, -426), 48,198);
    this->robot->wait(100);
    robot->speed(20);
    this->robot->moveLinearTo(Vector(705, -53, 372), 48,118);
    this->robot->goHome();   
    this->robot->getPort()->executeQuedCommands();   
}

void mainGUI::saveConfiguration()
{
//     QString absoluteFilePath = QFileDialog::getSaveFileName();
//     if( absoluteFilePath != QString() )
//     {  
//       std::ofstream stream;
//       stream.open(absoluteFilePath.toStdString().c_str());
// 
//       if ( stream )
//       {
// 	  stream 	     << ui->leYVectorX->text().toDouble()
// 	  << std::endl << ui->leYVectorY->text().toDouble()
// 	  << std::endl << ui->leYVectorZ->text().toDouble()
// 	  << std::endl << ui->leBaseVectorX->text().toDouble()
// 	  << std::endl << ui->leBaseVectorY->text().toDouble()
// 	  << std::endl << ui->leBaseVectorZ->text().toDouble()
// 	  << std::endl << ui->leXVectorX->text().toDouble()
// 	  << std::endl << ui->leXVectorY->text().toDouble()
// 	  << std::endl << ui->leXVectorZ->text().toDouble()
// 	  << std::endl << ui->leAngleMarkerA->text().toDouble()
// 	  << std::endl << ui->leAngleMarkerB->text().toDouble()
// 	  << std::endl << ui->leAngleEraserABegin->text().toDouble()
// 	  << std::endl << ui->leAngleEraserBBegin->text().toDouble()
// 	  << std::endl << ui->leAngleEraserAEnd->text().toDouble()
// 	  << std::endl << ui->leAngleEraserBEnd->text().toDouble()
// 	  << std::endl << ui->speedSpinBox->text().toStdString()
// 	  << std::endl << ui->checkBoxInvertX->isChecked()
// 	  << std::endl << ui->checkBoxInvertY->isChecked()
// 	  << std::endl << ui->checkBoxInvertZ->isChecked()
// 	  << std::endl << ui->scheduleDirectoryLineEdit->text().toStdString();
//       }
// 
//       stream.close();
//   }
}

void mainGUI::loadConfiguration()
{
//     QString absoluteFilePath = QFileDialog::getOpenFileName();
//     if( absoluteFilePath != QString() )
//     {  
//       std::ifstream stream;
//       stream.open(absoluteFilePath.toStdString().c_str());
//       std::string value;
// 
//       stream >> value;
//       ui->leYVectorX->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leYVectorY->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leYVectorZ->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leBaseVectorX->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leBaseVectorY->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leBaseVectorZ->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leXVectorX->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leXVectorY->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leXVectorZ->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leAngleMarkerA->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leAngleMarkerB->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leAngleEraserABegin->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leAngleEraserBBegin->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leAngleEraserAEnd->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->leAngleEraserBEnd->setText(QString::fromStdString(value));
//       stream >> value;
//       ui->speedSpinBox->setValue(stringToData<int32>(value));
//       stream >> value;
//       if (value == "1")
//       {
// 	  ui->checkBoxInvertX->setChecked( true );
//       }
//       else
//       {
// 	  ui->checkBoxInvertX->setChecked( false );
//       }
//       stream >> value;
//       if (value == "1")
//       {
// 	  ui->checkBoxInvertY->setChecked( true );
//       }
//       else
//       {
// 	  ui->checkBoxInvertY->setChecked( false );
//       }
//       stream >> value;
//       if (value == "1")
//       {
// 	  ui->checkBoxInvertZ->setChecked( true );
//       }
//       else
//       {
// 	  ui->checkBoxInvertZ->setChecked( false );
//       }
//       stream >> value;
//       ui->scheduleDirectoryLineEdit->setText(QString::fromStdString(value));
//     }
}

void mainGUI::abortTransmission()
{
    this->robot->getPort()->abortDataTransmission();
}


QString mainGUI::loadFileContent(QString currentFilePath)
{
  
    QFile file(currentFilePath);
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Log Reader", "Cannot read file %1:\n%2"
                             ,currentFilePath
                             ,file.errorString());
        return "";
    }

    QTextStream textStream(&file);
    QString fileConntend = textStream.readAll();

    file.close();

    return fileConntend;
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

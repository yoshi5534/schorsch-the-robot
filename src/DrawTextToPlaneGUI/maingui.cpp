#include <fstream>

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
    ui->leBaseVectorX->setValidator(new QDoubleValidator(this));
    ui->leBaseVectorY->setValidator(new QDoubleValidator(this));
    ui->leBaseVectorZ->setValidator(new QDoubleValidator(this));
    ui->leXVectorX->setValidator(new QDoubleValidator(this));
    ui->leXVectorY->setValidator(new QDoubleValidator(this));
    ui->leXVectorZ->setValidator(new QDoubleValidator(this));
    ui->leYVectorX->setValidator(new QDoubleValidator(this));
    ui->leYVectorY->setValidator(new QDoubleValidator(this));
    ui->leYVectorZ->setValidator(new QDoubleValidator(this));
    ui->leAngleA->setValidator(new QDoubleValidator(this));
    ui->leAngleB->setValidator(new QDoubleValidator(this));
    
    this->robot = new Robot("/dev/ttyS0", 750000);
    this->robot->getPort()->setLiveCommandMode(false);
}

mainGUI::~mainGUI()
{
    if(this->robot != NULL)
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

void mainGUI::defineYVector()
{
    Where where(robot);
    ui->leYVectorX->setText(QString::number(where.x));
    ui->leYVectorY->setText(QString::number(where.y));
    ui->leYVectorZ->setText(QString::number(where.z));
}

void mainGUI::defineXVector()
{
    Where where(robot);
    ui->leXVectorX->setText(QString::number(where.x));
    ui->leXVectorY->setText(QString::number(where.y));
    ui->leXVectorZ->setText(QString::number(where.z)); 
}

void mainGUI::defineBaseVector()
{
    Where where(robot);
    ui->leBaseVectorX->setText(QString::number(where.x));
    ui->leBaseVectorY->setText(QString::number(where.y));
    ui->leBaseVectorZ->setText(QString::number(where.z));  
}
    
void mainGUI::writeText()
{  
    Vector yPoint	( ui->leYVectorX->text().toDouble(), 	ui->leYVectorY->text().toDouble(), 	ui->leYVectorZ->text().toDouble());
    Vector basePoint	( ui->leBaseVectorX->text().toDouble(), ui->leBaseVectorY->text().toDouble(), 	ui->leBaseVectorZ->text().toDouble());
    Vector xPoint	( ui->leXVectorX->text().toDouble(), 	ui->leXVectorY->text().toDouble(), 	ui->leXVectorZ->text().toDouble());
    
    Matrix coordinateSystem = PlaneToCoodinateSystem::toCoordinateSystem(xPoint-basePoint, yPoint-basePoint, ui->checkBoxInvertX->isChecked(), ui->checkBoxInvertY->isChecked(), ui->checkBoxInvertZ->isChecked());
    Vector target = coordinateSystem * Vector(1,0,0);
     
    Text::writeTextWithWordWrap( 
				this->robot, 
				std::string(ui->txtEditTextToWrite->toPlainText().toStdString()), 
				coordinateSystem, 
				yPoint, 
				ui->leAngleA->text().toDouble(),				
				ui->leAngleB->text().toDouble(),
				20.0,
				10
				);     
    
    this->robot->goHome();
    this->robot->getPort()->executeQuedCommands();
}

void mainGUI::moveToBaseVector()
{
    this->robot->goHome();
    this->robot->moveLinearTo(Vector(	ui->leBaseVectorX->text().toDouble(),
				ui->leBaseVectorY->text().toDouble(),
				ui->leBaseVectorZ->text().toDouble()), 
				ui->leAngleA->text().toDouble(), 
				ui->leAngleB->text().toDouble());
    this->robot->getPort()->executeQuedCommands();    
}

void mainGUI::moveToXVector()
{
     this->robot->goHome();
     this->robot->moveLinearTo(Vector(ui->leXVectorX->text().toDouble(),
				ui->leXVectorY->text().toDouble(),
				ui->leXVectorZ->text().toDouble()), 
				ui->leAngleA->text().toDouble(), 
				ui->leAngleB->text().toDouble()); 
     this->robot->getPort()->executeQuedCommands();     
}


void mainGUI::moveToYVector()
{
      this->robot->goHome();
      this->robot->moveLinearTo(Vector( ui->leYVectorX->text().toDouble(),
				  ui->leYVectorY->text().toDouble(),
				  ui->leYVectorZ->text().toDouble()), 
				  ui->leAngleA->text().toDouble(), 
				  ui->leAngleB->text().toDouble());
     this->robot->getPort()->executeQuedCommands();
  
}


void mainGUI::saveConfiguration()
{
  std::ofstream stream;
  stream.open("DrawTextToPlaneGUI.config");
  
  if( stream )
  {	
    stream  	      	 << ui->leYVectorX->text().toDouble() 
	    << std::endl << ui->leYVectorY->text().toDouble() 
	    << std::endl << ui->leYVectorZ->text().toDouble()
	    << std::endl << ui->leBaseVectorX->text().toDouble()
	    << std::endl << ui->leBaseVectorY->text().toDouble() 
	    << std::endl << ui->leBaseVectorZ->text().toDouble()
	    << std::endl << ui->leXVectorX->text().toDouble() 
	    << std::endl << ui->leXVectorY->text().toDouble() 
	    << std::endl << ui->leXVectorZ->text().toDouble()
	    << std::endl << ui->leAngleA->text().toDouble()
	    << std::endl << ui->leAngleB->text().toDouble(); 
  }
	  
    stream.close();  
}

void mainGUI::loadConfiguration()
{
   std::ifstream stream;
   stream.open("DrawTextToPlaneGUI.config");
   std::string value;
  
    stream >> value;
    ui->leYVectorX->setText(QString::fromStdString(value));
    stream >> value;
    ui->leYVectorY->setText(QString::fromStdString(value));
    stream >> value;
    ui->leYVectorZ->setText(QString::fromStdString(value));
    stream >> value;
    ui->leBaseVectorX->setText(QString::fromStdString(value));
    stream >> value;
    ui->leBaseVectorY->setText(QString::fromStdString(value));
    stream >> value;
    ui->leBaseVectorZ->setText(QString::fromStdString(value));
    stream >> value;
    ui->leXVectorX->setText(QString::fromStdString(value));
    stream >> value;
    ui->leXVectorY->setText(QString::fromStdString(value));
    stream >> value;
    ui->leXVectorZ->setText(QString::fromStdString(value));
    stream >> value;
    ui->leAngleA->setText(QString::fromStdString(value));
    stream >> value;
    ui->leAngleB->setText(QString::fromStdString(value));	                               
}

void mainGUI::cleanBoard()
{
    Vector yPoint	( ui->leYVectorX   ->text().toDouble(), ui->leYVectorY   ->text().toDouble(), 	ui->leYVectorZ   ->text().toDouble());
    Vector basePoint	( ui->leBaseVectorX->text().toDouble(), ui->leBaseVectorY->text().toDouble(), 	ui->leBaseVectorZ->text().toDouble());
    Vector xPoint	( ui->leXVectorX   ->text().toDouble(), ui->leXVectorY   ->text().toDouble(), 	ui->leXVectorZ   ->text().toDouble());
    
    Matrix coordinateSystem = PlaneToCoodinateSystem::toCoordinateSystem(xPoint-basePoint, yPoint-basePoint, ui->checkBoxInvertX->isChecked(), ui->checkBoxInvertY->isChecked(), ui->checkBoxInvertZ->isChecked());
    Vector target = coordinateSystem * Vector(1,0,0);
    
    QStringList linesOfText = ui->txtEditTextToWrite->toPlainText().split("\n");
    uint64 longestLine = 0;
    QString currentLine;
    foreach( currentLine, linesOfText)
    {
      if( currentLine.size() > longestLine )
      {
	longestLine = currentLine.size();
      }
    }
     
    Text::cleanBoard(  
		  this->robot, 
		  coordinateSystem, 
		  yPoint, 
		  ui->leAngleA->text().toDouble() + 180,				
		  ui->leAngleB->text().toDouble(),
		  20.0,
		  longestLine + 1,
		  linesOfText.size() + 1
		);     

    this->robot->goHome();
    this->robot->getPort()->executeQuedCommands();
}

void mainGUI::resetRobot()
{
  this->robot->reset();
}

void mainGUI::abortTransmission()
{
   this->robot->getPort()->abortDataTransmission();
}

void mainGUI::goHome()
{
  this->robot->goHome();
  this->robot->getPort()->executeQuedCommands();    
}
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
    
    Matrix coordinateSystem = PlaneToCoodinateSystem::toCoordinateSystem(xPoint-basePoint, yPoint-basePoint);
    Vector target = coordinateSystem * Vector(1,0,0);
     
    float64 AngleA = 80;
    float64 AngleB = 80;
    
    Text::writeTextWithWordWrap( 
				this->robot, 
				std::string(ui->txtEditTextToWrite->toPlainText().toStdString()), 
				coordinateSystem, 
				yPoint, 
				20.0,
				10
				);     
    
    this->robot->getPort()->executeQuedCommands();
}


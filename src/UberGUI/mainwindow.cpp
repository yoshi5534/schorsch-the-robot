#include <QKeyEvent>
#include <iostream>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../RobotLib/HelperMethods.h"
#include "../RobotLib/Joint.h"
#include "../RobotLib/Types.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mRobot.getPort()->sendCommandAndLog("SP 20");
    mRobot.getPort()->setCommandDelay(500000);
    mRobot.getPort()->setLiveCommandMode(true);

    mMovingLeft = false;
    bInDrawingMode = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
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

void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    //kann gesendet werden, während ein programm
    //(übertragen a la "10 MO 1, 20 MO 2, 30 MO 1, 40 ED" und ausgeführt mit RN 10
    //ausgeführt wird. -> stoppt das programm
    //idee: bewegung nach links in einer endlosschleife ausführen
    //und HLT senden wenn taste nichtmehr gedrückt wird

    //mRobot.sendCommandAndLog("HLT");

    //mMovingLeft = false;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_I)
    {
        ui->lblOut->setText("Initializing home position: +207.43,-14.00,+338.59,+134.44,+178.84,R,A,O");
        mRobot.getPort()->sendCommandAndLog("PD 1,+207.43,-14.00,+338.59,+134.44,+178.84,R,A,O");
    }

    if(event->key() == Qt::Key_R)
    {
        ui->lblOut->setText("Shut the fark up!");
        mRobot.getPort()->sendCommandAndLog("RS");
    }

    if(event->key() == Qt::Key_H)
    {
        ui->lblOut->setText("Screw you guys, I'm going home");
        mRobot.getPort()->sendCommandAndLog("MO 1");
    }

    if(event->key() == Qt::Key_Left)
    {
        if(!bInDrawingMode)
        {
            ui->lblOut->setText("LEFT");
            mRobot.getPort()->sendCommandAndLog("DJ 1,2");
        }
        else
        {
            mRobot.getPort()->sendCommandAndLog("DS -10,0,0");
        }
    }

    if(event->key() == Qt::Key_Right)
    {
        if(!bInDrawingMode)
        {
            ui->lblOut->setText("RIGHT");
            mRobot.getPort()->sendCommandAndLog("DJ 1,-2");
        }
        else
        {
            mRobot.getPort()->sendCommandAndLog("DS 10,0,0");
        }
    }

    if(event->key() == Qt::Key_Insert)
    {
        if(!bInDrawingMode)
        {

        }
        else
        {
            mRobot.getPort()->sendCommandAndLog("DS 0,0,-20");
        }
    }

    if(event->key() == Qt::Key_Delete)
    {
        if(!bInDrawingMode)
        {

        }
        else
        {
            mRobot.getPort()->sendCommandAndLog("DS 0,0,20");
        }
    }

    if(event->key() == Qt::Key_Up)
    {
        if(!bInDrawingMode)
        {

        }
        else
        {
            mRobot.getPort()->sendCommandAndLog("DS 0,10,0");
        }
    }

    if(event->key() == Qt::Key_Down)
    {
        if(!bInDrawingMode)
        {

        }
        else
        {
            mRobot.getPort()->sendCommandAndLog("DS 0,-10,0");
        }
    }

    if(event->key() == Qt::Key_M)
    {
        if(bInDrawingMode)
        {
            ui->lblOut->setText("Switching to normal mode");
            bInDrawingMode = false;
            mRobot.getPort()->sendCommandAndLog("PD 1,+207.43,-14.00,+338.59,+134.44,+178.84,R,A,O");
            mRobot.getPort()->sendCommandAndLog("MO 1");
        }
        else
        {
            ui->lblOut->setText("Switching to drawing mode");
            bInDrawingMode = true;
            mRobot.getPort()->sendCommandAndLog("PD 1,+0.32,-404.75,+69.13,+220.54,+179.01,R,A,O");
            mRobot.getPort()->sendCommandAndLog("MO 1");
            mRobot.getPort()->setLiveCommandMode(false);
        }
    }

        if(event->key() == Qt::Key_A)
        {
            if(bInDrawingMode)
            {
                mRobot.moveTo(Position(10.32,-404.75,69.13),0.0,90.0);
                mRobot.getPort()->executeQuedCommands();
            }
        }

//        mRobot.sendCommandAndLog("IC 1");
//
//        //jaja is hässlich, will nur net jedesmal
//        //das prog auf den bot laden (dauert immerhn auch ~5 sec dank delay)
//        if(!mMovingLeft)
//        {
//            //da er sich mit nem geladenen prog ganz
//            //brav bewegt wie mans gern hätte...
//            mRobot.sendCommandAndLog("N 1");            //Programmnummer wählen
////            mRobot.sendCommandAndLog("10 EA +1,30");    //If Interrupt(1) Goto 30
////            mRobot.sendCommandAndLog("15 RC 180");      //do
////            mRobot.sendCommandAndLog("20 DJ 1,1");      //1° nach rechts
////            mRobot.sendCommandAndLog("25 NX");          //while(i++ < 180)
////            mRobot.sendCommandAndLog("30 DA 1");        //Disable Interrupt 1
////            mRobot.sendCommandAndLog("40 ED");          //End Program
////            mRobot.sendCommandAndLog("RN 10");          //Tell the robot to start the programm at line 10
//
//
//            mRobot.sendCommandAndLog("10 CP 1");        //Zähler 1 ins Register laden
//            mRobot.sendCommandAndLog("20 SM 1, 50");    //Zähler 1 < 1 ? goto 50
//            mRobot.sendCommandAndLog("30 DJ 1,2");      //drehen 2° r
//            mRobot.sendCommandAndLog("40 DC 1");        //Zähler 1 --
//            mRobot.sendCommandAndLog("45 CP 1");        //Zähler 1 ins register laden
//            mRobot.sendCommandAndLog("50 LG 1, 30");    //zähler 1 > 1 ? goto 50
//            mRobot.sendCommandAndLog("RN 10");          //prog ausführen
//                                                        //läuft stockend...
//            mMovingLeft = true;
//
//
//            //Alternative mit Halt bei losgelassener Taste erscheint
//            //praktischer, da eine IF Abfrage den Roboter anscheinend
//            //stocken lässt
//
//            //Problem::
//            //für jede mögliche tastenkombination müsste ein programm auf
//            //dem roboter abgelegt werden
//            //theoretisch möglich, da 9999 programme indiziert werden können
//        }
//    }


//
//    if(event->key() == Qt::Key_Q)
//    {
//        std::cout << "MPB 30,0,0,0,0,0,0,+549.19,+446.48,+12.33,+91.43,+91.32" << std::endl;
//        mRobot.sendCommandAndLog("MPB 30,30,0,0,0,0,0,+549.19,+446.48,+12.33,+91.43,+91.32");
//    }
//
//    if(event->key() == Qt::Key_W)
//    {
//        std::cout << "MPB 30,0,0,0,0,0,1,+549.19,+446.48,+12.33,+91.43,+91.32" << std::endl;
//        mRobot.sendCommandAndLog("MPB 30,30,0,0,0,0,1,+549.19,+446.48,+12.33,+91.43,+91.32");
//    }
//
//    if(event->key() == Qt::Key_E)
//    {
//        std::cout << "MPB 30,0,0,0,0,0,2,+549.19,+446.48,+12.33,+91.43,+91.32" << std::endl;
//        mRobot.sendCommandAndLog("MPB 30,30,0,0,0,0,2,+549.19,+446.48,+12.33,+91.43,+91.32");
//    }
}

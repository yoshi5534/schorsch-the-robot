#include <QtCore/QCoreApplication>
#include "../qextserialport/src/qextserialport.h"
#include "../qextserialport/src/qextserialenumerator.h"
#include <iostream>
#include <QList>
#include <QtDebug>
#include <sstream>
#include <stdexcept>
#include "../RobotLib/Robot.h"
#include "../RobotLib/Keyboard.h"


int main(int argc, char *argv[])
{
//    Robot robot;
//
//    robot.sendCommandAndLog( "SP 30");
//    robot.sendCommandAndLog( "MO 42");
//    robot.sendCommandAndLog( "MO 1");
//    robot.sendCommandAndLog( "MO 44");
//    robot.sendCommandAndLog( "MO 1");
    //robot.moveJointW( -20 );
    //robot.moveJointS( -20 );
    //robot.moveJointE( -20 );
    //robot.moveJointP( -20 );
    //robot.moveJointR( -20 );


    /*robot.sendCommandAndLog( "SP 10");
    sleep(1);
    robot.sendCommandAndLog( "MO 1");
    sleep(1);
    robot.sendCommandAndLog( "SP 30");
    sleep(1);
    robot.sendCommandAndLog( "DJ 4, -90");
    robot.sendCommandAndLog( "DW 2,0,0");
    robot.sendCommandAndLog( "DW -2,0,0");
    robot.sendCommandAndLog( "DW 2,0,0");
    robot.sendCommandAndLog( "DW -2,0,0");
    robot.sendCommandAndLog( "DW 2,0,0");
    robot.sendCommandAndLog( "DW -2,0,0");*/

    //sendCommandAndLog( port, "DW 2,0,0");
    //sendCommandAndLog( port, "DW 0,200,0");
    //sendCommandAndLog( port, "DW -2,0,0");
    //sendCommandAndLog( port, "DW 0,-200,0");

    //sendCommandAndLog( port, "RS");
    //sendCommandAndLog( port, "SP 15");
    //sendCommandAndLog( port, "MO 1");
    //sendCommandAndLog( port, "MO 42");
   // sendCommandAndLog( port, "SP 2");
    //bsendCommandAndLog( port, "MO 42");


    Robot robot("/dev/ttyS0", 750000);
    Keyboard keyboard(&robot);

    keyboard.switchOn();
        keyboard.play("c1");
        keyboard.play("d1");
        keyboard.play("e1");
        keyboard.play("f1");
        keyboard.play("g1");
        keyboard.play("g1");
        keyboard.play("a1");
        keyboard.play("a1");
        keyboard.play("a1");
        keyboard.play("a1");
        keyboard.play("g1");
        keyboard.play("a1");
       keyboard.play("a1");
        keyboard.play("a1");
        keyboard.play("a1");
        keyboard.play("g1");
       keyboard.play("f1");
        keyboard.play("f1");
        keyboard.play("f1");
            keyboard.play("f1");
            keyboard.play("e1");
            keyboard.play("e1");
            keyboard.play("d1");
            keyboard.play("d1");
            keyboard.play("d1");
            keyboard.play("d1");
            keyboard.play("c1");


    //    keyboard.play("f");
    //    keyboard.play("g");
    //    keyboard.play("a");
    //    keyboard.play("h");
    //    keyboard.play("c");
    //    keyboard.play("d");
    //    keyboard.play("e");
    //    keyboard.play("f1");
    //    keyboard.play("g1");
    //    keyboard.play("a1");
    //    keyboard.play("h1");
    //    keyboard.play("c1");
    //    keyboard.play("d1");
    //    keyboard.play("e1");
    //    keyboard.play("f2");
    //    keyboard.play("g2");
    //    keyboard.play("a2");
    //    keyboard.play("h2");
    //    keyboard.play("c2");

//    keyboard.play("f#");
//    keyboard.play("g#");
//    keyboard.play("a#");
//    keyboard.play("c1#");
//    keyboard.play("d1#");
//
//    keyboard.play("f1#");
//    keyboard.play("g1#");
//    keyboard.play("a1#");
//    keyboard.play("c2#");
//    keyboard.play("d2#");
//    keyboard.play("f2#");
//    keyboard.play("g2#");
//    keyboard.play("a2#");
//
    keyboard.switchOff();

    return 0;
}

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
#include "../RobotLib/Music.h"


int main(int argc, char *argv[])
{
    Robot robot("/dev/ttyS0", 750000);

//    {
//        robot.getPort()->setLiveCommandMode(true);
//        robot.speed(25);
///       Keyboard keyboard(&robot);
//        Music::kleineNachtmusik(keyboard);
//    }

//    {
       robot.getPort()->setLiveCommandMode(false);
       robot.speed(25);
        Keyboard keyboard(&robot);
	keyboard.switchOn();
	  keyboard.switchOff();
//        Keyboard keyboard(&robot);
//        Music::kleineNachtmusik(keyboard);
//        robot.getPort()->executeQuedCommands();
//    }
//
//    return 0;

   robot.grip.flowOpen();
    robot.grip.flowClose();
//    robot.grip.flowOpen();
//    robot.grip.flowClose();
//    robot.grip.flowOpen();
//    robot.grip.flowClose();
//    robot.grip.flowOpen();
//    robot.grip.flowClose();


    robot.getPort()->executeQuedCommands();
    return 0;


    //robot.getPort()->setLiveCommandMode(false);
//    robot.speed(25);
   // robot.grip.flowOpen();
    //robot.grip.flowClose();
//    robot.grip.flowOpen();
//    robot.grip.flowClose();
//    robot.grip.flowOpen();
//    robot.grip.flowClose();
//    robot.grip.flowOpen();
//    robot.grip.flowClose();
   // robot.getPort()->executeQuedCommands();

    //std::string reply ="";
    //robot.getPort()->sendAndReceive("STR 2");
    //robot.getPort()->sendAndReceive("STR 1",&reply,true);
    //std::cout << "reply = " << reply << std::endl;
    //return 0;

    //robot.getPort()->sendCommand("MO 4");
    //robot.goHome();
    //robot.getPort()->executeQuedCommands();
    //return 0;

    //Keyboard keyboard(&robot);
    //keyboard.switchOn();
    //Music::mario( keyboard );
    //Music::alleMeineEntchen( keyboard );
    //Music::fuerElise( keyboard );
    //Music::tetris(keyboard);
    //Music::weAreTheChampions(keyboard);
    //Music::deutschlandlied(keyboard);
    //Music::missionImpossible(keyboard);
    //Music::kleineNachtmusik(keyboard);
    //Music::haenschenklein(keyboard);

    //keyboard.switchOff();

    //robot.getPort()->executeQuedCommands();
    return 0;
}

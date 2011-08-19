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
    robot.getPort()->setLiveCommandMode(false);
    robot.speed(25);

    Keyboard keyboard(&robot);
    keyboard.switchOn();
    //Music::mario( keyboard );
    Music::alleMeineEntchen( keyboard );
    //Music::fuerElise( keyboard );
    //Music::tetris(keyboard);
    //Music::weAreTheChampions(keyboard);
    //Music::deutschlandlied(keyboard);
    //Music::missionImpossible(keyboard);
    //Music::kleineNachtmusik(keyboard);
    //Music::haenschenklein(keyboard);

    keyboard.switchOff();

    robot.getPort()->executeQuedCommands();
    return 0;
}

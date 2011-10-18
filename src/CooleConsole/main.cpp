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
#include "../RobotLib/Matrix.h"
#include "../RobotLib/Vector.h"
#include "../RobotLib/Text.h"
#include "../RobotLib/PlaneToCoordinateSystem.h"
//#include "../RobotLib/Where.h"


int main(int argc, char *argv[])
{
//     Robot robot("/dev/ttyS0", 750000);

//    {
//        robot.getPort()->setLiveCommandMode(true);
// //        robot.speed(25);
// ///       Keyboard keyboard(&robot);
// //        Music::kleineNachtmusik(keyboard);
// //    }
// 
// //    {
//        robot.getPort()->setLiveCommandMode(false);
//        robot.speed(25);
//         Keyboard keyboard(&robot);
// 	keyboard.switchOn();
// 	  keyboard.switchOff();
// //        Keyboard keyboard(&robot);
// //        Music::kleineNachtmusik(keyboard);
// //        robot.getPort()->executeQuedCommands();
// //    }
// //
// //    return 0;
// 
//    robot.grip.flowOpen();
//     robot.grip.flowClose();
// //    robot.grip.flowOpen();
// //    robot.grip.flowClose();
// //    robot.grip.flowOpen();
// //    robot.grip.flowClose();
// //    robot.grip.flowOpen();
// //    robot.grip.flowClose();
// 
// 
//     robot.getPort()->executeQuedCommands();
//     return 0;


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

    Robot robot("/dev/ttyS0", 750000);
    robot.getPort()->setLiveCommandMode(false);
    //robot.goHome();
    //robot.getPort()->executeQuedCommands();
    //return 0;
    Where where= robot.whereIsRobot(); 
    Vector yPoint	( where.x, where.y, where.z);
    //Vector yPoint	(-50,600,680);//( where.x, where.y, where.z);
       
    Where where2= robot.whereIsRobot();   
    Vector basePoint	( where2.x, where2.y, where2.z);
    //Vector basePoint	(-50,600,400);//( where2.x, where2.y, where2.z);
    
    Where where3 = robot.whereIsRobot();  
    Vector xPoint	( where3.x, where3.y, where3.z);
    //Vector xPoint	(430,600,400);//( where3.x, where3.y, where3.z);
    
    Matrix coordinateSystem = PlaneToCoodinateSystem::toCoordinateSystem(xPoint-basePoint, yPoint-basePoint);
    
    Vector target = coordinateSystem * Vector(1,0,0);
     
    float64 AngleA = 80;
    float64 AngleB = 80;
    
    //Text::processString(&robot, "abc", coordinateSystem, firstBasePoint);
    
//    robot.moveTo(firstBasePoint,AngleA,AngleB);
 //   robot.moveTo(secondBasePoint,AngleA,AngleB);
 //   robot.moveTo(thirdBasePoint,AngleA,AngleB);
    //Text::processString(&robot, "abcdefghi", coordinateSystem, firstBasePoint);
   // Text::processString(&robot, "abcdefghijk", coordinateSystem, yPoint);  
    //Text::processString(&robot, "pqrAßstuvwxyz", coordinateSystem, yPoint);
    //Text::writeTextWithWordWrap(&robot, "Aßxyz", coordinateSystem, yPoint);
    
      Text::writeTextWithWordWrap
      ( 
	&robot, 
	"the quick brown fox jumps over the lazy dog", 
	coordinateSystem, 
	yPoint, 
	AngleA,
	AngleB,
	20.0,
	10
      );  
    
    
    
    
    robot.getPort()->executeQuedCommands();
    
    
    
    return 0;
}

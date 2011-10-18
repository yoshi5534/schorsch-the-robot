#ifndef ROBOT_H
#define ROBOT_H

#include "Types.h"
#include "Joint.h"
#include "Grip.h"
#include "RobotPort.h"
#include "Vector.h"
#include "Where.h"



class Robot
{
private:
    RobotPort* _robotPort;

public:
    Joint W;
    Joint S;
    Joint E;
    Joint P;
    Joint R;
    Grip grip;

    Robot
    (
        std::string deviceName = "/dev/ttyS0",
        int delay = 1)
            : _robotPort( new RobotPort( deviceName, delay ))
            , W( _robotPort, 0)
            , S( _robotPort, 1)
            , E( _robotPort, 2)
            , P( _robotPort, 4)
            , R( _robotPort, 5)
            , grip( _robotPort, 1)
    {
        speed(12);
    }

    virtual ~Robot()
    {
        delete _robotPort;
        _robotPort = 0;
    }

    RobotPort* getPort()
    {
        return _robotPort;
    }

    void speed( uint8 speed)
    {
        if ( speed > 30)
        {
            throw std::invalid_argument( "Robot::speed the value " + dataToString(speed) + " is not valid. Pleas chose an speed in the intervall [0,30]");
        }

        _robotPort->sendCommand( "SP " + dataToString(speed));
    }

    void moveTo(Vector positionToMoveTo, float64 a, float64 b)
    {
        _robotPort->sendCommand
        (
            "MP " + dataToString(positionToMoveTo.x) +
            ","   + dataToString(positionToMoveTo.y) +
            ","   + dataToString(positionToMoveTo.z) +
            ","   + dataToString(a) +
            ","   + dataToString(b)
        );
    }

    void moveLinearTo(Vector positionToMoveTo, float64 a, float64 b)
    {
        moveTo(positionToMoveTo, a, b);
        return;

        _robotPort->sendCommand
        (
            std::string("MPB ") +
            std::string("300, ") + //speed in mm per second (0 to 32765)
            std::string("0, "  ) + //timer
            std::string("0, "  ) + //output 1
            std::string("0, "  ) + //output 2
            std::string("0, "  ) + //input 1
            std::string("0, "  ) + //input 2
            std::string("1, "  ) + //interpolation
            std::string(""     ) + dataToString(positionToMoveTo.x) +
            std::string(", "   ) + dataToString(positionToMoveTo.y) +
            std::string(", "   ) + dataToString(positionToMoveTo.z) +
            std::string(", "   ) + dataToString(a) +
            std::string(", "   ) + dataToString(b)
        );
    }

    void moveRelative(Vector positionToMoveTo)
    {
        _robotPort->sendCommand
        (
            "DW " + dataToString(positionToMoveTo.x) +
            ","   + dataToString(positionToMoveTo.y) +
            ","   + dataToString(positionToMoveTo.z)
        );
    }

    void wait(float64 timeInMiliseconds)
    {
        _robotPort->sendCommand("TI " + dataToString(static_cast< uint16 >(timeInMiliseconds / 10) ));
    }

    void goHome()
    {
        Where robotHome = whereIsHome();
        std::string xPositionAsString = dataToString<float64>(robotHome.x);
        std::string yPositionAsString = dataToString<float64>(robotHome.y);
        std::string zPositionAsString = dataToString<float64>(robotHome.z);
        std::string aAngleAsString = dataToString<float64>(robotHome.a);
        std::string bAngleAsString = dataToString<float64>(robotHome.b);

        //_robotPort->sendCommand("PD 1,+207.43,-14.00,+338.59,+36.88,+178.84,R,A,O");
        _robotPort->sendCommand("PD 1,"+ xPositionAsString + "," + yPositionAsString + "," + zPositionAsString + "," + aAngleAsString + "," + bAngleAsString + ",R,A,O");
        _robotPort->sendCommand("MO 1");
    }

    Where whereIsHome()
    {
        Where robotHome;
        robotHome.x = 275.0;
        robotHome.y = 0.0;
        robotHome.z = 110.0;
        robotHome.a = 32.58;
        robotHome.b = 180.0;

        return robotHome;
    }

    Where whereIsRobot()
    {
	Where currentWhere;
      
        std::string whereResult = _robotPort->sendAndReceive("WH");
        size_t lastPosition = 0;

        for (uint8 index = 0; index < 5; index++)
        {
            size_t currentPosition = whereResult.find_first_of(',',lastPosition);
            size_t countOfCharacters = currentPosition - lastPosition;
            std::string result = whereResult.substr(lastPosition, countOfCharacters);

            lastPosition = currentPosition + 1;

            if (index == 0)
            {
                currentWhere.x = stringToData< float64 >( result );
            }
            else if (index == 1)
            {
                currentWhere.y = stringToData< float64 >( result );
            }
            else if (index == 2)
            {
                currentWhere.z = stringToData< float64 >( result );
            }
            else if (index == 3)
            {
                currentWhere.a = stringToData< float64 >( result );
            }
            else if (index == 4)
            {
                currentWhere.b = stringToData< float64 >( result );
            }
        }
        
        return currentWhere;
    }

    void reset()
    {
        bool currentCommandMode;
        currentCommandMode = _robotPort->getLiveCommandMode();
        _robotPort->setLiveCommandMode(true);
        _robotPort->sendCommand("RS");
        _robotPort->setLiveCommandMode(currentCommandMode);
    }
};

#endif // ROBOT_H

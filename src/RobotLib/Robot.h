#ifndef ROBOT_H
#define ROBOT_H

#include "Types.h"
#include "Joint.h"
#include "RobotPort.h"
#include "Position.h"

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
            if( speed > 30)
            {
                throw std::invalid_argument( "Robot::speed the value " + dataToString(speed) + " is not valid. Pleas chose an speed in the intervall [0,30]");
            }
		  
            _robotPort->sendCommand( "SP " + dataToString(speed));
        }
        
        void moveTo(Position positionToMoveTo, float64 a, float64 b)
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

        void moveRelative(Position positionToMoveTo)
                {
                  _robotPort->sendCommand
                  (
                        "DW " + dataToString(positionToMoveTo.x) +
                        ","   + dataToString(positionToMoveTo.y) +
                        ","   + dataToString(positionToMoveTo.z)
                  );
                }
};

#endif // ROBOT_H

#ifndef ROBOT_H
#define ROBOT_H

#include "Types.h"
#include "Joint.h"
#include "Grip.h"
#include "RobotPort.h"
#include "Vector.h"

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
            if( speed > 30)
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
           //_robotPort->sendCommand("PD 1,+207.43,-14.00,+338.59,+36.88,+178.84,R,A,O");
           _robotPort->sendCommand("PD 1,+275,0,110,32.58,+180,R,A,O");
           _robotPort->sendCommand("MO 1");
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

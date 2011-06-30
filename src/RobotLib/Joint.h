#ifndef _JOINT_H_
#define _JOINT_H_


#include "Types.h"
#include "HelperMethods.h"
#include "RobotPort.h"



class Joint
{
  private:
    std::string _jointNumberAsString;
    RobotPort* _robotPort;
    
    void checkRange(float64 value)
    {
	  
    }         
    
  public:
  
    Joint( RobotPort* robotPort, std::string jointNumber )
    {
      if( robotPort == NULL )
      {
        throw std::invalid_argument( "Joint::Joint robot is NULL" );
      }
      
      _robotPort = robotPort;
      _jointNumberAsString = jointNumber;
    }
    
    Joint( RobotPort* robotPort, uint8 jointNumber )
    {
      if( robotPort == NULL )
      {
        throw std::invalid_argument( "Joint::Joint robot is NULL" );
      }
      
      _robotPort = robotPort;
      _jointNumberAsString = dataToString(jointNumber);
    }
    
    //void moveAbsolute( float64 value)
    //{ 
	//  checkRange();
        //  _robotPort->sendCommandAndLog("DJ 0, " + intToString<int65>(value) ); }
    //} 
    
    void moveRelative( float64 value)
    {
        checkRange(value);
        _robotPort->sendCommandAndLog("DJ 0, " + dataToString<int64>(value) );
    }
    
    float64 where()
    {
      return 1;
    }
  
};

#endif //_JOINT_H_

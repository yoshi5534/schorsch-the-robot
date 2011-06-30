#ifndef _JOINT_H_
#define _JOINT_H_


#include "Types.h"
#include "HelperMethods.h"

class Robot;

class Joint
{
  private:
    std::string _jointNumberAsString;
    
    void checkRange(float64 value)
	{
	  
	}
         
    
  public:
  
    Joint( Robot* robot, std::string jointNumber )
    {
      if( robot == NULL )
      {
		throw std::invalid_argument( "Joint::Joint robot is NULL" );
      }
      
      _robot = robot;
      _jointNumberAsString = jointNumber;
    }
    
    Joint( Robot* robot, uint8 jointNumber )
    {
      if( robot == NULL )
      {
		throw std::invalid_argument( "Joint::Joint robot is NULL" );
      }
      
      _robot = robot;
      _jointNumberAsString = dataToString(jointNumber);
    }
    
    //void moveAbsolute( float64 value)
    //{ 
	//  checkRange();
	//  _robot->sendCommandAndLog("DJ 0, " + intToString<int65>(value) ); }
    //} 
    
    void moveRelative( float64 value)
	{
	  checkRange();
	  _robot->sendCommandAndLog("DJ 0, " + intToString<int65>(value) ); } 
	}
    
    float64 where()
    {
      
    }
  
};

#endif //_JOINT_H_
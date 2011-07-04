#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_

#include <map>
#include "Types.h"
#include "HelperMethods.h"
#include "Robot.h"
#include "Position.h"



class Keyboard
{
  private:
	
	
    RobotPort* _robotPort;
	std::map< std::string, Position > _keyboardMapping;
	float64 _angleA;
	float64 _angleB;
	Position _keyPressOffset;
	
  

	
	
  public:
  
    Keyboard( RobotPort* robotPort )
    {
      if( robotPort == NULL )
      {
        throw std::invalid_argument( "Keyboard::Keyboard robot is NULL" );
      }
      
      _robotPort = robotPort;
	  
	  _keyboardMapping["f"]= Position(,,); 
	  _keyboardMapping["g"]= Position(,,); 
	  _keyboardMapping["a"]= Position(,,); 
	  _keyboardMapping["h"]= Position(,,); 
	  _keyboardMapping["c"]= Position(,,); 
	  _keyboardMapping["d"]= Position(,,); 
	  _keyboardMapping["e"]= Position(,,); 
	  _keyboardMapping["f1"]= Position(,,); 
	  _keyboardMapping["g1"]= Position(,,); 
	  _keyboardMapping["a1"]= Position(,,); 
	  _keyboardMapping["h1"]= Position(,,); 
	  _keyboardMapping["c1"]= Position(,,); 
	  _keyboardMapping["d1"]= Position(,,); 
	  _keyboardMapping["e1"]= Position(,,); 
	  _keyboardMapping["f2"]= Position(,,); 
	  _keyboardMapping["g2"]= Position(,,); 
	  _keyboardMapping["a2"]= Position(,,); 
	  _keyboardMapping["h2"]= Position(,,); 
	  _keyboardMapping["c2"]= Position(,,); 
	  _keyboardMapping["d2"]= Position(,,); 
	  _keyboardMapping["e2"]= Position(,,); 
	  _keyboardMapping["f#"]= Position(,,); 
	  _keyboardMapping["g#"]= Position(,,); 
	  _keyboardMapping["a#"]= Position(,,); 
	  _keyboardMapping["c1#"]= Position(,,); 
	  _keyboardMapping["d1#"]= Position(,,); 
	  _keyboardMapping["f1#"]= Position(,,); 
	  _keyboardMapping["g1#"]= Position(,,); 
	  _keyboardMapping["a1#"]= Position(,,); 
	  _keyboardMapping["c2#"]= Position(,,); 
	  _keyboardMapping["d#"]= Position(,,); 
	  _angleA = 0.0;
	  _angleB = 0.0;
	  _keyPressOffset( 0, -10, 0);
    }
    
    void moveRelative( float64 value)
    {
        checkRange(value);
        _robotPort->sendCommandAndLog("DJ 0, " + dataToString<int64>(value) );
    }
    
   
    void play( std::string note, float64 timeInMiliseconds )
	{
	  //is note playable?
	  std::map< std::string, Position >::iterator it = _keyboardMapping.find(note);
	  if( it ==  std::map< std::string, Position >::npos )
	  {
		throw std::invalid_argument("Keyboard::play " + note + " is not an valid node");
	  }
	  else
	  {
		Position targetPosition = *it;		
		//_robotPort.moveTo(targetPosition, _angleA, _angleB);
		_robotPort.moveTo(targetPosition + _keyPressOffset, _angleA, _angleB);	
		Sleep( timeInMiliseconds);
		_robotPort.moveTo(targetPosition, _angleA, _angleB);
	  } 
	  
	  
	}
	

};

#endif //_KEYBOARD_H_

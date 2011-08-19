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
	
	
    Robot* _robot;
	std::map< std::string, Position > _keyboardMapping;
	float64 _angleA;
	float64 _angleB;
	Position _keyPressOffset;
        float64 _timePerBeat;

  public:
  
    Keyboard( Robot* robot, float64 timePerBeat = 250.0 )
    {
      if( robot == NULL )
      {
        throw std::invalid_argument( "Keyboard::Keyboard robot is NULL" );
      }
      
      _robot = robot;
	  
      float64 xOffset = -17.3;
      float64 xStartPosition = -200;
      _keyboardMapping["f"] = Position(xStartPosition- 0*xOffset,340, 55);
      _keyboardMapping["g"] = Position(xStartPosition- 1*xOffset,340, 55);
      _keyboardMapping["a"] = Position(xStartPosition- 2*xOffset,340, 55);
      _keyboardMapping["h"] = Position(xStartPosition- 3*xOffset,340, 55);
      _keyboardMapping["c1"] = Position(xStartPosition- 4*xOffset,340, 55);
      _keyboardMapping["d1"] = Position(xStartPosition- 5*xOffset,340, 55);
      _keyboardMapping["e1"] = Position(xStartPosition- 6*xOffset,340, 55);
      _keyboardMapping["f1"]= Position(xStartPosition- 7*xOffset,340, 55);
      _keyboardMapping["g1"]= Position(xStartPosition- 8*xOffset,340, 55);
      _keyboardMapping["a1"]= Position(xStartPosition- 9*xOffset,340, 55);
      _keyboardMapping["h1"]= Position(xStartPosition- 10*xOffset,340, 55);
      _keyboardMapping["c2"]= Position(xStartPosition- 11*xOffset,340, 55);
      _keyboardMapping["d2"]= Position(xStartPosition- 12*xOffset,340, 55);
      _keyboardMapping["e2"]= Position(xStartPosition- 13*xOffset,340, 55);
      _keyboardMapping["f2"]= Position(xStartPosition- 14*xOffset,340, 55);
      _keyboardMapping["g2"]= Position(xStartPosition- 15*xOffset,340, 55);
      _keyboardMapping["a2"]= Position(xStartPosition- 16*xOffset,340, 55);
      _keyboardMapping["h2"]= Position(xStartPosition- 17*xOffset,340, 55);
      _keyboardMapping["c3"]= Position(xStartPosition- 18*xOffset,340, 55);
      _keyboardMapping["f#"]= Position(-192.75,356,66);
      _keyboardMapping["g#"]= Position(-172.36,356,66);
      _keyboardMapping["a#"]= Position(-152.78,356,66);
      _keyboardMapping["c1#"]= Position(-122.57,356,66);
      _keyboardMapping["d1#"]= Position(-102.48,356,66);
      _keyboardMapping["f1#"]= Position(-72.14,356, 66);
      _keyboardMapping["g1#"]= Position(-52.40,356, 66);
      _keyboardMapping["a1#"]= Position(-32.43,356, 66);
      _keyboardMapping["c2#"]= Position(-0.94,356, 66);
      _keyboardMapping["d2#"]= Position(19.03,356, 66);
      _keyboardMapping["f2#"]= Position(49.52,356, 66);
      _keyboardMapping["g2#"]= Position(69.58,356, 66);
      _keyboardMapping["a2#"]= Position(88.55,356, 66);

      _angleA = 45.0;
      _angleB = 180.0;
      _keyPressOffset = Position( 0, 0, -15);
      _timePerBeat = timePerBeat;
    }    
   
    void play( std::string note, float64 noteFraction) const
    {
      float64 timeInMiliseconds = noteFraction * _timePerBeat;
      //is note playable?
      std::map< std::string, Position >::const_iterator it = _keyboardMapping.find(note);
      if( it ==  _keyboardMapping.end() )
      {
            throw std::invalid_argument("Keyboard::play " + note + " is not an valid node");
      }
      else
      {
            Position targetPosition = it->second;
            _robot->moveTo(targetPosition - _keyPressOffset, _angleA, _angleB);
            _robot->moveTo(targetPosition + _keyPressOffset, _angleA, _angleB);
            _robot->wait(timeInMiliseconds);
            _robot->moveTo(targetPosition - _keyPressOffset,  _angleA, _angleB);
      }
    }

    void playPause( float64 noteFraction) const
    {
        float64 timeInMiliseconds = noteFraction * _timePerBeat;
        _robot->wait(timeInMiliseconds);
    }

    void switchOn() const
    {
        _robot->moveRelative(Position(0.0, 0.0, 50.0));
        _robot->moveTo(Position(45.66, 410.25, 65.10), _angleA, _angleB);
        _robot->wait(50);
        _robot->moveTo(Position(45.66, 410.25, 55.10), _angleA, _angleB);
        _robot->moveTo(Position(49.46, 416.83, 55.10), _angleA, _angleB);
        _robot->wait(50);
        _robot->moveTo(Position(45.66, 410.25, 65.10), _angleA, _angleB);
    }

    void switchOff() const
    {

        _robot->moveTo(Position(60.78, 436.51, 90.41), _angleA, _angleB);
        _robot->wait(50);
        _robot->moveTo(Position(60.78, 436.51, 52.73), _angleA, _angleB);
        _robot->moveTo(Position(54.55, 423.76, 52.73), _angleA, _angleB);
        _robot->wait(50);
        _robot->moveTo(Position(60.78, 436.51, 63.41), _angleA, _angleB);
    }

};

#endif //_KEYBOARD_H_

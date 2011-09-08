#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_

#include <map>
#include "Types.h"
#include "HelperMethods.h"
#include "Robot.h"
#include "Vector.h"



class Keyboard
{
  private:
	
	
    Robot* _robot;
	std::map< std::string, Vector > _keyboardMapping;
	float64 _angleA;
	float64 _angleB;
	Vector _keyPressOffset;
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
      float64 xStartVector = -200;
      _keyboardMapping["f"] = Vector(xStartVector- 0*xOffset,340, 55);
      _keyboardMapping["g"] = Vector(xStartVector- 1*xOffset,340, 55);
      _keyboardMapping["a"] = Vector(xStartVector- 2*xOffset,340, 55);
      _keyboardMapping["h"] = Vector(xStartVector- 3*xOffset,340, 55);
      _keyboardMapping["c1"] = Vector(xStartVector- 4*xOffset,340, 55);
      _keyboardMapping["d1"] = Vector(xStartVector- 5*xOffset,340, 55);
      _keyboardMapping["e1"] = Vector(xStartVector- 6*xOffset,340, 55);
      _keyboardMapping["f1"]= Vector(xStartVector- 7*xOffset,340, 55);
      _keyboardMapping["g1"]= Vector(xStartVector- 8*xOffset,340, 55);
      _keyboardMapping["a1"]= Vector(xStartVector- 9*xOffset,340, 55);
      _keyboardMapping["h1"]= Vector(xStartVector- 10*xOffset,340, 55);
      _keyboardMapping["c2"]= Vector(xStartVector- 11*xOffset,340, 55);
      _keyboardMapping["d2"]= Vector(xStartVector- 12*xOffset,340, 55);
      _keyboardMapping["e2"]= Vector(xStartVector- 13*xOffset,340, 55);
      _keyboardMapping["f2"]= Vector(xStartVector- 14*xOffset,340, 55);
      _keyboardMapping["g2"]= Vector(xStartVector- 15*xOffset,340, 55);
      _keyboardMapping["a2"]= Vector(xStartVector- 16*xOffset,340, 55);
      _keyboardMapping["h2"]= Vector(xStartVector- 17*xOffset,340, 55);
      _keyboardMapping["c3"]= Vector(xStartVector- 18*xOffset,340, 55);
      _keyboardMapping["f#"]= Vector(-192.75,356,66);
      _keyboardMapping["g#"]= Vector(-172.36,356,66);
      _keyboardMapping["a#"]= Vector(-152.78,356,66);
      _keyboardMapping["c1#"]= Vector(-122.57,356,66);
      _keyboardMapping["d1#"]= Vector(-102.48,356,66);
      _keyboardMapping["f1#"]= Vector(-72.14,356, 66);
      _keyboardMapping["g1#"]= Vector(-52.40,356, 66);
      _keyboardMapping["a1#"]= Vector(-32.43,356, 66);
      _keyboardMapping["c2#"]= Vector(-0.94,356, 66);
      _keyboardMapping["d2#"]= Vector(19.03,356, 66);
      _keyboardMapping["f2#"]= Vector(49.52,356, 66);
      _keyboardMapping["g2#"]= Vector(69.58,356, 66);
      _keyboardMapping["a2#"]= Vector(88.55,356, 66);

      _angleA = 45.0;
      _angleB = 180.0;
      _keyPressOffset = Vector( 0, 0, -15);
      _timePerBeat = timePerBeat;
    }    
   
    void play( std::string note, float64 noteFraction) const
    {
      float64 timeInMiliseconds = noteFraction * _timePerBeat;
      //is note playable?
      std::map< std::string, Vector >::const_iterator it = _keyboardMapping.find(note);
      if( it ==  _keyboardMapping.end() )
      {
            throw std::invalid_argument("Keyboard::play " + note + " is not an valid node");
      }
      else
      {
            Vector targetVector = it->second;
            _robot->moveTo(targetVector - _keyPressOffset, _angleA, _angleB);
            _robot->moveTo(targetVector + _keyPressOffset, _angleA, _angleB);
            _robot->wait(timeInMiliseconds);
            _robot->moveTo(targetVector - _keyPressOffset,  _angleA, _angleB);
      }
    }

    void playPause( float64 noteFraction) const
    {
        float64 timeInMiliseconds = noteFraction * _timePerBeat;
        _robot->wait(timeInMiliseconds);
    }

    void switchOn() const
    {
        _robot->moveRelative(Vector(0.0, 0.0, 50.0));
        _robot->moveTo(Vector(45.66, 410.25, 65.10), _angleA, _angleB);
        _robot->wait(50);
        _robot->moveTo(Vector(45.66, 410.25, 55.10), _angleA, _angleB);
        _robot->moveTo(Vector(49.46, 416.83, 55.10), _angleA, _angleB);
        _robot->wait(50);
        _robot->moveTo(Vector(45.66, 410.25, 65.10), _angleA, _angleB);
    }

    void switchOff() const
    {

        _robot->moveTo(Vector(60.78, 436.51, 90.41), _angleA, _angleB);
        _robot->wait(50);
        _robot->moveTo(Vector(60.78, 436.51, 52.73), _angleA, _angleB);
        _robot->moveTo(Vector(54.55, 423.76, 52.73), _angleA, _angleB);
        _robot->wait(50);
        _robot->moveTo(Vector(60.78, 436.51, 63.41), _angleA, _angleB);
    }

};

#endif //_KEYBOARD_H_

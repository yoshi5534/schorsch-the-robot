#ifndef _POSITION_H_
#define _POSITION_H_


#include "Types.h"


//Position in mm
class Position
{
  public: 
	float64 x;
    float64 y;
    float64 z;
    
	Position()
	{
	  this->x = 0.0; 
	  this->y = 0.0; 
	  this->z = 0.0; 
	}
	
	
    Position( float64 x, float64 y, float64 z)
	{
	  this->x = x; 
	  this->y = y; 
	  this->z = z; 
	}
	
	friend Position operator+( const Position& a, const Position& b )
	{
		return Position( a.x + b.x, a.y + b.y, a.z + b.z );
	}

	friend Position operator-( const Position& a, const Position& b )
	{
		return Position( a.x - b.x, a.y - b.y, a.z - b.z );
	}
};

#endif //_POSITION_H_

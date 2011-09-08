#ifndef _POSITION_H_
#define _POSITION_H_


#include "Types.h"


//Vector in mm
class Vector
{
  public: 
    float64 x;
    float64 y;
    float64 z;
    
	Vector()
	{
	  this->x = 0.0; 
	  this->y = 0.0; 
	  this->z = 0.0; 
	}
	
	
    Vector( float64 x, float64 y, float64 z)
	{
	  this->x = x; 
	  this->y = y; 
	  this->z = z; 
	}
	
	friend Vector operator+( const Vector& a, const Vector& b )
	{
		return Vector( a.x + b.x, a.y + b.y, a.z + b.z );
	}

	friend Vector operator-( const Vector& a, const Vector& b )
	{
		return Vector( a.x - b.x, a.y - b.y, a.z - b.z );
	}
};

#endif //_POSITION_H_

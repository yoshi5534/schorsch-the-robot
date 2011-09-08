#ifndef _VECTOR_H_
#define _VECTOR_H_


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
	
	Vector operator+( const Vector& other )
	{
		return Vector( this->x + other.x, this->y + other.y, this->z + other.z );
	}

	Vector operator-( const Vector& other )
	{
		return Vector( this->x - other.x, this->y - other.y, this->z - other.z );
	}
};

#endif //_VECTOR_H_

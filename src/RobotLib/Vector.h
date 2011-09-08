#ifndef _VECTOR_H_
#define _VECTOR_H_


#include "Types.h"
#include <math.h>


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
	
	Vector operator+( const Vector& otherVector ) const
	{
		return Vector( this->x + otherVector.x, this->y + otherVector.y, this->z + otherVector.z );
	}

	Vector operator-( const Vector& otherVector ) const
	{
		return Vector( this->x - otherVector.x, this->y - otherVector.y, this->z - otherVector.z );
	}
	
	Vector crossProduct(const Vector& otherVector) const
	{
		return Vector( 	(this->y * otherVector.z) - (this->z * otherVector.y),
				(this->z * otherVector.x) - (this->x * otherVector.z),
				(this->x * otherVector.y) - (this->y * otherVector.x)
		             );
	}
	
	Vector getNormalized() const
	{
	    float64 length;
	    
	    length = sqrt(this->x*this->x + this->y * this->y + this->z * this->z);
	    
	    return Vector(this->x / length, this->y/ length, this->z/length);	  
	}
};

#endif //_VECTOR_H_

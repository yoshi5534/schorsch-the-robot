#ifndef _MATRIX_H_
#define _MATRIX_H_

#include "Vector.h"
#include "Types.h"


//Matrix in mm
class Matrix
{
  public: 
    float64 x1;
    float64 y1;	// / x1 x2 x3 \
    float64 z1;	// | y1 y2 y3 | 
    float64 x2;	// \ z1 z2 z3 /
    float64 y2;
    float64 z2;
    float64 x3;
    float64 y3;
    float64 z3;
    
	Matrix()
	{
	  this->x1 = 0.0; 
	  this->y1 = 0.0; 
	  this->z1 = 0.0; 
	  this->x2 = 0.0; 
	  this->y2 = 0.0; 
	  this->z2 = 0.0; 
	  this->x3 = 0.0; 
	  this->y3 = 0.0; 
	  this->z3 = 0.0; 
	}
	
	
    Matrix( float64 x1, float64 y1, float64 z1, float64 x2, float64 y2, float64 z2, float64 x3, float64 y3, float64 z3)
	{
	  this->x1 = x1; 
	  this->y1 = y1; 
	  this->z1 = z1; 
	  this->x2 = x2; 
	  this->y2 = y2; 
	  this->z2 = z2; 
	  this->x3 = x3; 
	  this->y3 = y3; 
	  this->z3 = z3; 
	}
	
	Matrix operator+( const Matrix& other )
	{
		return Matrix( 	this->x1 + other.x1, this->y1 + other.y1, this->z1 + other.z1,
				this->x2 + other.x2, this->y2 + other.y2, this->z2 + other.z2, 
				this->x3 + other.x3, this->y3 + other.y3, this->z3 + other.z3 
			     );
	}

	Matrix operator-( const Matrix& other )
	{
		return Matrix( 	this->x1 - other.x1, this->y1 - other.y1, this->z1 - other.z1,
				this->x2 - other.x2, this->y2 - other.y2, this->z2 - other.z2 ,
				this->x3 - other.x3, this->y3 - other.y3, this->z3 - other.z3 
			    );
	}
	
	Vector operator*( const Vector& vector )
	{
		return Vector( 	this->x1 * vector.x + this->x2 * vector.y + this->x3 * vector.z,
				this->y1 * vector.x + this->y2 * vector.y + this->y3 * vector.z,
				this->z1 * vector.x + this->z2 * vector.y + this->z3 * vector.z
			  );
	}
};

#endif //_MATRIX_H_
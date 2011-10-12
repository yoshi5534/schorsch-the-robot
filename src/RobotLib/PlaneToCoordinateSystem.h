#ifndef __PLANETOCOORDINAESYSTEM_H__20110908_
#define __PLANETOCOORDINAESYSTEM_H__20110908_

#include <stdexcept>
#include "Vector.h"

class PlaneToCoodinateSystem
{
  
public:
    static Matrix toCoordinateSystem( Vector xVector, Vector yVector, bool invertX = false, bool invertY = false, bool invertZ = false)
    {
      Vector normalizedXVector =  xVector.getNormalized();
      Vector normalizedYVector =  yVector.getNormalized();
      Vector normalizedZVector;
      Vector correctedXVector;
      
      normalizedZVector = (normalizedXVector.crossProduct( normalizedYVector)).getNormalized();
      //we are not sure if xVector and yVector are orthogonal to each other so we define an new helper vector which is orthogonal
      correctedXVector = normalizedYVector.crossProduct(normalizedZVector).getNormalized();

      if(invertX)
	correctedXVector *= -1;
      
      if(invertY)
	normalizedYVector *= -1;
      
      if(invertZ)
	normalizedZVector *= -1;
      
      Matrix matrix( correctedXVector .x, correctedXVector .y, correctedXVector .z,
		     normalizedYVector.x, normalizedYVector.y, normalizedYVector.z,
		     normalizedZVector.x, normalizedZVector.y, normalizedZVector.z);
      
      return matrix;      
    }    
};

#endif //__PLANETOCOORDINAESYSTEM_H__20110908_



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
      
      Vector normalizedZVector = (normalizedXVector.crossProduct( normalizedYVector)).getNormalized();
      //we are not sure if xVector and yVector are orthogonal to each other so we define an new helper vector which is orthogonal
      Vector correctedYVector = normalizedZVector.crossProduct(normalizedXVector).getNormalized() ;

      if(invertX)
      {
	normalizedXVector *= -1;
      }
      
      if(invertY)
      {
	correctedYVector *= -1;
      }
      
      if(invertZ)
      {
	normalizedZVector *= -1;
      }
      
      Matrix matrix( normalizedXVector.x, normalizedXVector.y, normalizedXVector.z,
		     correctedYVector .x, correctedYVector .y, correctedYVector .z,
		     normalizedZVector.x, normalizedZVector.y, normalizedZVector.z);
      
      return matrix;      
    }    
};

#endif //__PLANETOCOORDINAESYSTEM_H__20110908_



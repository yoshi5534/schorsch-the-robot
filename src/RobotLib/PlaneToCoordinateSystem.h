#ifndef __PLANETOCOORDINAESYSTEM_H__20110908_
#define __PLANETOCOORDINAESYSTEM_H__20110908_

#include "Vector.h"

class PlaneToCoodinateSystem
{
  
public:
  
    static Matrix toCoordinateSystem( Vector xVector, Vector yVector)
    {
      Vector normalizedXVector =  xVector.getNormalized();
      Vector normalizedYVector =  yVector.getNormalized();
      Vector normalizedZVector = (normalizedXVector.crossProduct( normalizedYVector)).getNormalized();
      
      //we are not sure if xVector and yVector are orthogonal to each other so we define an new helper vector which is orthogonal
      Vector correctedXVector = normalizedYVector.crossProduct(normalizedZVector).getNormalized();
      
      Matrix matrix( correctedXVector .x, correctedXVector .y, correctedXVector .z,
		     normalizedYVector.x, normalizedYVector.y, normalizedYVector.z,
		     normalizedZVector.x, normalizedZVector.y, normalizedZVector.z);
      
      return matrix;      
    }    
};

#endif //__PLANETOCOORDINAESYSTEM_H__20110908_



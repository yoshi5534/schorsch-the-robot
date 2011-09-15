#ifndef __PLANETOCOORDINAESYSTEM_H__20110908_
#define __PLANETOCOORDINAESYSTEM_H__20110908_

#include "Vector.h"

class PlaneToCoodinateSystem
{
  
public:
  
    static Matrix toCoordinateSystem( Vector baseVector, Vector firstVector, Vector secondVector )
    {
      Vector normalizedFirstTempVector  =  (firstVector  - baseVector).getNormalized();
      Vector normalizedSecondTempVector =  (secondVector - baseVector).getNormalized();
      Vector crossProduct = (normalizedSecondTempVector.crossProduct( normalizedFirstTempVector)).getNormalized();
      //Vector crossProduct = (normalizedFirstTempVector.crossProduct( normalizedSecondTempVector)).getNormalized();
      Vector correctedSecondVector = crossProduct.crossProduct(normalizedFirstTempVector).getNormalized();
      //Vector correctedSecondVector = normalizedFirstTempVector.crossProduct(crossProduct).getNormalized();
      normalizedFirstTempVector = normalizedFirstTempVector * -1;
      correctedSecondVector = correctedSecondVector * -1;
      Matrix matrix( normalizedFirstTempVector.x, normalizedFirstTempVector.y, normalizedFirstTempVector.z,
		     correctedSecondVector.x, correctedSecondVector.y, correctedSecondVector.z,
		     crossProduct.x, crossProduct.y, crossProduct.z );
      
      return matrix;      
    }
    
    
};

#endif //__PLANETOCOORDINAESYSTEM_H__20110908_



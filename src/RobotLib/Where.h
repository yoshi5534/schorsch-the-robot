#ifndef WHERE_H
#define WHERE_H

#include "HelperMethods.h"

class Where
{
    public:
      Where()
      {
      }
      
      Where
      (
	float64 xValue,
        float64 yValue,
        float64 zValue,
        float64 aValue,
        float64 bValue
      ) : x(xValue), y(yValue), z(zValue), a(aValue), b(bValue)
      {
	
      }
      
      float64 x;
      float64 y;
      float64 z;
      float64 a;
      float64 b;     
};
#endif // WHERE_H

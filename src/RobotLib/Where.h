#ifndef WHERE_H
#define WHERE_H

#include <list>
#include "Vector.h"
#include "Robot.h"
#include "HelperMethods.h"
#include <string>

class Where
{
    public:
      float64 x;
      float64 y;
      float64 z;
      float64 a;
      float64 b;
      
      Where(Robot* robot)
      {
	 std::string whereResult = robot->getPort()->sendAndReceive("WH");
	 size_t lastPosition = 0;

	 for(uint8 index = 0; index < 5; index++)
	 {
	      size_t currentPosition = whereResult.find_first_of(',',lastPosition);
	      size_t countOfCharacters = currentPosition - lastPosition;
	      std::string result = whereResult.substr(lastPosition, countOfCharacters);
	      
	      lastPosition = currentPosition + 1;
	//+145.55,+594.87,+776.09,+123.76,+79.03,R,A,O
	      
	      if(index == 0)
	      {
		  x = stringToData< float64 >( result );
	      }
	      else if(index == 1)
	      {
		  y = stringToData< float64 >( result );
	      }
	      else if(index == 2)
	      {
		  z = stringToData< float64 >( result );
	      }
	      else if(index == 3)
	      {
		  a = stringToData< float64 >( result );
	      }
	      else if(index == 4)
	      {
		  b = stringToData< float64 >( result );
	      }
	 }
      }
      

};
#endif // WHERE_H

#ifndef TEXT_H
#define TEXT_H

#include <list>
#include "Vector.h"
#include "Matrix.h"
#include "Robot.h"
#include <string>

class Text
{
    public:
      static void processString(Robot* robot, std::string stringToParse, Matrix targetCoordinateSystem)
      {
	  Vector spaceVector(1.5, 0, 0);
	  
	  for(size_t i = 0; i < stringToParse.length(); i++)
	  {
	      std::list<Vector> sourceCoordinateMoveList;
	      switch(stringToParse[i])
	      {
		case 'a': sourceCoordinateMoveList = a(); break;
		case 'b': sourceCoordinateMoveList = b(); break;
		case 'c': sourceCoordinateMoveList = c(); break;		
		default: sourceCoordinateMoveList = square(); break;
	      }
	      
	      for(std::list<Vector>::iterator it = sourceCoordinateMoveList.begin(); it != sourceCoordinateMoveList.end(); it++)
	      {
		  Vector sourceVector = *it;
		  Vector targetVector = targetCoordinateSystem * sourceVector;
		  
		  robot->moveTo(targetVector, 0, 0);
		  robot->moveTo(targetCoordinateSystem * spaceVector, 0,0);
	      }	      
	  }
      }

//     std::list<Vector> a()
//     {
//         std::list<Vector> list;
//         list.push_back( Vector( .0, .0, .0) );
//         return list;
//     }
//     
private:
    
    static std::list<Vector> a()
    {
	 std::list<Vector> list;
	 list.push_back( Vector( 1.0, 0.0, 1.0) );
	 list.push_back( Vector( 1.0, 0.0, 0.0) );
	 list.push_back( Vector( 0.0, 0.0, 0.0) );
	 list.push_back( Vector( 0.0, 1.0, 0.0) );
	 list.push_back( Vector( 1.0, 1.0, 0.0) );
	 list.push_back( Vector( 1.0,-0.5, 0.0) );
	 list.push_back( Vector( 1.0,-0.5, 1.0) );
	 return list;
    }
    
    
    static std::list<Vector> b()
    {
	 std::list<Vector> list;
	 list.push_back( Vector( 0.0, 2.0, 1.0) );	
	 list.push_back( Vector( 0.0, 2.0, 0.0) );	
	 list.push_back( Vector( 0.0, 0.0, 0.0) );	
	 list.push_back( Vector( 1.0, 0.0, 0.0) );	
	 list.push_back( Vector( 1.0, 1.0, 0.0) );	
	 list.push_back( Vector( 0.0, 1.0, 0.0) );	
	 list.push_back( Vector( 0.0, 1.0, 1.0) );
	 return list;
    }

    static std::list<Vector> c()
    {
	 std::list<Vector> list;
	 list.push_back( Vector( 1.0, 1.0, 1.0) );	
	 list.push_back( Vector( 1.0, 1.0, 0.0) );	
	 list.push_back( Vector( 0.0, 1.0, 0.0) );	
	 list.push_back( Vector( 0.0, 0.0, 0.0) );	
	 list.push_back( Vector( 1.0, 0.0, 0.0) );	
	 list.push_back( Vector( 1.0, 0.0, 1.0) );	
	 return list;
    }
     
    static std::list<Vector> square()
    {
	 std::list<Vector> list;
	 list.push_back( Vector( 1.0, 0.0, 1.0) );
	 list.push_back( Vector( 1.0, 0.0, 0.0) );
	 list.push_back( Vector( 0.0, 0.0, 0.0) );
	 list.push_back( Vector( 0.0, 1.0, 0.0) );
	 list.push_back( Vector( 1.0, 1.0, 0.0) );
	 list.push_back( Vector( 1.0, 1.0, 1.0) );
	 return list;
    }
};
#endif // TEXT_H

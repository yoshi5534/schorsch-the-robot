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
      static void processString(Robot* robot, std::string stringToParse, Matrix targetCoordinateSystem, Vector translationVector)
      {
	  float64 AngleA = 80;
	  float64 AngleB = 80;
	  
	  for(size_t index = 0; index < stringToParse.length(); index++)
	  {
	      Vector spaceVector(40.5*index, 0, 0);
	      std::list<Vector> sourceCoordinateMoveList;
	      switch(stringToParse[index])
	      {
		case 'a': sourceCoordinateMoveList = a(); break;
		case 'b': sourceCoordinateMoveList = b(); break;
		case 'c': sourceCoordinateMoveList = c(); break;
		case 'd': sourceCoordinateMoveList = d(); break;
		case 'e': sourceCoordinateMoveList = e(); break;
		case 'f': sourceCoordinateMoveList = f(); break;
		case 'g': sourceCoordinateMoveList = g(); break;
		case 'h': sourceCoordinateMoveList = h(); break;
		case 'i': sourceCoordinateMoveList = i(); break;
		case 'j': sourceCoordinateMoveList = j(); break;
		case 'k': sourceCoordinateMoveList = k(); break;
		case 'l': sourceCoordinateMoveList = l(); break;
		case 'm': sourceCoordinateMoveList = m(); break;
		case 'n': sourceCoordinateMoveList = n(); break;
		case 'o': sourceCoordinateMoveList = o(); break;
		case 'p': sourceCoordinateMoveList = p(); break;
		case 'q': sourceCoordinateMoveList = q(); break;
		case 'r': sourceCoordinateMoveList = r(); break;
		case 's': sourceCoordinateMoveList = s(); break;
		case 't': sourceCoordinateMoveList = t(); break;
		case 'u': sourceCoordinateMoveList = u(); break;
		case 'v': sourceCoordinateMoveList = v(); break;
		case 'w': sourceCoordinateMoveList = w(); break;
		case 'x': sourceCoordinateMoveList = x(); break;
		case 'y': sourceCoordinateMoveList = y(); break;
		case 'z': sourceCoordinateMoveList = z(); break;
		default: sourceCoordinateMoveList = square(); break;
	      }
	      
	      for(std::list<Vector>::iterator it = sourceCoordinateMoveList.begin(); it != sourceCoordinateMoveList.end(); it++)
	      {
		  Vector sourceVector = (*it)*20.0;
		  Vector sourceVectorInTargetCoordinateSystem = targetCoordinateSystem * sourceVector;
		  Vector spaceOffsetOfCurrentCharacter = targetCoordinateSystem * spaceVector; 
		  Vector targetVector = sourceVectorInTargetCoordinateSystem + spaceOffsetOfCurrentCharacter +  translationVector;
		  
		  robot->moveTo(targetVector, AngleA, AngleB);

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
	 list.push_back( Vector( 1.0,-0.2, 0.0) );
	 list.push_back( Vector( 1.0,-0.2, 1.0) );
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
    
    static std::list<Vector> d()
    {
        std::list<Vector> list;
	 list.push_back( Vector( 1.0, 1.0, 1.0) );	
	 list.push_back( Vector( 1.0, 1.0, 0.0) );	
	 list.push_back( Vector( 0.0, 1.0, 0.0) );	
	 list.push_back( Vector( 0.0, 0.0, 0.0) );	
	 list.push_back( Vector( 1.0, 0.0, 0.0) );	
	 list.push_back( Vector( 1.0, 2.0, 0.0) );
	 list.push_back( Vector( 1.0, 2.0, 1.0) );
        return list;
    }

    static std::list<Vector> e()
    {
        std::list<Vector> list;
	 list.push_back( Vector( 0.0, 0.5, 1.0) );
	 list.push_back( Vector( 0.0, 0.5, 0.0) );
	 list.push_back( Vector( 1.0, 0.5, 0.0) );
	 list.push_back( Vector( 1.0, 1.0, 0.0) );	
	 list.push_back( Vector( 0.0, 1.0, 0.0) );	
	 list.push_back( Vector( 0.0, 0.0, 0.0) );	
	 list.push_back( Vector( 1.0, 0.0, 0.0) );	
	 list.push_back( Vector( 1.0, 0.0, 1.0) );
        return list;
    }

    static std::list<Vector> f()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.5, 2.0, 1.0) );
	list.push_back( Vector( 0.5, 2.0, 0.0) );
	list.push_back( Vector( 0.0, 2.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 0.2, 1.0, 0.0) );
	list.push_back( Vector( 0.2, 1.0, 1.0) );
        return list;
    }

    static std::list<Vector> g()
    {
        std::list<Vector> list;
        list.push_back( Vector( 1.0, 0.0, 1.0) );
	list.push_back( Vector( 1.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0,-1.0, 0.0) );
	list.push_back( Vector( 0.0,-1.0, 0.0) );
        return list;
    }

    static std::list<Vector> h()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 2.0, 1.0) );
	list.push_back( Vector( 0.0, 2.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 1.0) );
	list.push_back( Vector( 0.0, 1.0, 1.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 1.0, 1.0) );
        return list;
    }

    static std::list<Vector> i()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 1.0, 1.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 1.0) );
	list.push_back( Vector( 0.0, 2.0, 1.0) );
	list.push_back( Vector( 0.0, 2.0, 0.0) );
	list.push_back( Vector( 0.0, 1.8, 0.0) );
	list.push_back( Vector( 0.0, 1.8, 1.0) );
        return list;
    }

    static std::list<Vector> j()
    {
        std::list<Vector> list;
        list.push_back( Vector( 1.0, 1.0, 1.0) );
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0,-1.0, 0.0) );
	list.push_back( Vector( 0.0,-1.0, 0.0) );
	list.push_back( Vector( 1.0,-1.0, 1.0) );
	list.push_back( Vector( 1.0, 2.0, 1.0) );
	list.push_back( Vector( 1.0, 2.0, 0.0) );
	list.push_back( Vector( 1.0, 1.8, 0.0) );
	list.push_back( Vector( 1.0, 1.8, 1.0) );
        return list;
    }

    static std::list<Vector> k()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 2.0, 1.0) );
	list.push_back( Vector( 0.0, 2.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 1.0) );
	list.push_back( Vector( 1.0, 1.0, 1.0) );
	list.push_back( Vector( 0.5, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 0.0, 1.0, 1.0) );
        return list;
    }

    static std::list<Vector> l()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 2.0, 1.0) );
	list.push_back( Vector( 0.0, 2.0, 0.0) );
	list.push_back( Vector( 0.2, 0.0, 0.0) );	
	list.push_back( Vector( 0.2, 0.0, 1.0) );
        return list;
    }

    static std::list<Vector> m()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 1.2, 1.0) );
	list.push_back( Vector( 0.0, 1.2, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 1.0) );
	list.push_back( Vector( 0.0, 1.0, 1.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 1.0) );
	list.push_back( Vector( 1.0, 1.0, 1.0) );	
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 2.0, 1.0, 0.0) );
	list.push_back( Vector( 2.0, 0.0, 0.0) );
	list.push_back( Vector( 2.0, 0.0, 1.0) );
	return list;
    }

    static std::list<Vector> n()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 1.2, 1.0) );
	list.push_back( Vector( 0.0, 1.2, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 1.0) );
	list.push_back( Vector( 0.0, 1.0, 1.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 1.0) );
        return list;
    }

    static std::list<Vector> o()
    {
        std::list<Vector> list;
	 list.push_back( Vector( 0.0, 1.0, 1.0) );	
	 list.push_back( Vector( 0.0, 1.0, 0.0) );	
	 list.push_back( Vector( 0.0, 0.0, 0.0) );	
	 list.push_back( Vector( 1.0, 0.0, 0.0) );	
	 list.push_back( Vector( 1.0, 1.0, 0.0) );	
	 list.push_back( Vector( 0.0, 1.0, 0.0) );	
	 list.push_back( Vector( 0.0, 1.0, 1.0) );
        return list;
    }

    static std::list<Vector> p()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, -1.0, 1.0) );
	list.push_back( Vector( 0.0, -1.0, 0.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 1.0) );
        return list;
    }

    static std::list<Vector> q()
    {
        std::list<Vector> list;
        list.push_back( Vector( 1.0, -1.0, 1.0) );
	list.push_back( Vector( 1.0, -1.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 1.0) );
        return list;
    }

    static std::list<Vector> r()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 0.0, 1.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 1.2, 0.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 0.5, 1.0, 0.0) );
	list.push_back( Vector( 0.5, 1.0, 1.0) );
        return list;
    }

    static std::list<Vector> s()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 0.0, 1.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 0.0) );
	list.push_back( Vector( 1.0, 0.5, 0.0) );
	list.push_back( Vector( 0.0, 0.5, 0.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 1.0) );
        return list;
    }

    static std::list<Vector> t()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 0.0, 1.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 0.0, 2.0, 0.0) );
	list.push_back( Vector( 0.0, 2.0, 1.0) );
	list.push_back( Vector( -0.2, 1.0, 1.0) );
	list.push_back( Vector( -0.2, 1.0, 0.0) );
	list.push_back( Vector( 0.2, 1.0, 0.0) );
	list.push_back( Vector( 0.2, 1.0, 1.0) );
        return list;
    }

    static std::list<Vector> u()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 1.0, 1.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 0.0, 0.0, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 1.0) );
        return list;
    }

    static std::list<Vector> v()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 1.0, 1.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 0.5, 0.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 1.0) );
        return list;
    }

    static std::list<Vector> w()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 1.0, 1.0) );
	list.push_back( Vector( 0.0, 1.0, 0.0) );
	list.push_back( Vector( 0.5, 0.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 1.5, 0.0, 0.0) );
	list.push_back( Vector( 2.0, 1.0, 0.0) );
	list.push_back( Vector( 2.0, 1.0, 1.0) );
        return list;
    }

    static std::list<Vector> x()
    {
        std::list<Vector> list;
        list.push_back( Vector( .0, .0, .0) );
        return list;
    }

    static std::list<Vector> y()
    {
        std::list<Vector> list;
        list.push_back( Vector( .0, .0, .0) );
        return list;
    }

    static std::list<Vector> z()
    {
        std::list<Vector> list;
        list.push_back( Vector( .0, .0, .0) );
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

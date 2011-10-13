#ifndef TEXT_H
#define TEXT_H

#include <list>
#include "Vector.h"
#include "Matrix.h"
#include "Robot.h"
#include <string>
#include <limits>

class Text
{
    public:
      static void writeText
      ( 	
	Robot* robot, 
	const std::string stringToParse,
	Matrix targetCoordinateSystem, 
	Vector originOfCoordinateSystem, 
	float64 angleA,
	float64 angleB,
	float64 textSizeInMilimeter
      )
      {
	writeTextWithWordWrap( robot, stringToParse, targetCoordinateSystem, originOfCoordinateSystem, angleA, angleB, textSizeInMilimeter, std::numeric_limits< uint64>::max());
      }
      
      static void writeTextWithWordWrap
      ( 
	Robot* robot, 
	const std::string stringToParse, 
	Matrix targetCoordinateSystem, 
	Vector originOfCoordinateSystem, 
	float64 angleA,
	float64 angleB,
	float64 textSizeInMillimeter,
	uint64 countOfCharactersPerLine
      )
      {
	  Vector characterTranslationVector(1.3,0,0);
	  
	  Vector lineTranslationVector(0,-2.5,0);
	  uint64 currentLine = 0;
	  
	  Vector currentTranslationVector = originOfCoordinateSystem;
	  
	  for(size_t index = 0; index < stringToParse.length(); index++)
	  {
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
		case '0': sourceCoordinateMoveList = null(); break;
		case '1': sourceCoordinateMoveList = one(); break;
		case '2': sourceCoordinateMoveList = two(); break;
		case '3': sourceCoordinateMoveList = three(); break;
		case '4': sourceCoordinateMoveList = four(); break;
		case '5': sourceCoordinateMoveList = five(); break;
		case '6': sourceCoordinateMoveList = six(); break;
		case '7': sourceCoordinateMoveList = seven(); break;
		case '8': sourceCoordinateMoveList = eight(); break;
		case '9': sourceCoordinateMoveList = nine(); break;
		case ' ': sourceCoordinateMoveList = space(); break;
		case '+': sourceCoordinateMoveList = plus(); break;
		case '-': sourceCoordinateMoveList = minus(); break;
		case '/': sourceCoordinateMoveList = slash(); break;
		case '*': sourceCoordinateMoveList = asterisk(); break;
		case '?': sourceCoordinateMoveList = questionmark(); break;
		case '!': sourceCoordinateMoveList = exclamationmark(); break;
		case '\'':sourceCoordinateMoveList = singlequotationmark(); break;
		case '"': sourceCoordinateMoveList = doublequotationmark(); break;
		case ':': sourceCoordinateMoveList = colon(); break;
		case ';': sourceCoordinateMoveList = semicolon(); break;
		case '=': sourceCoordinateMoveList = equal(); break;
		case '>': sourceCoordinateMoveList = greater(); break;
		case '<': sourceCoordinateMoveList = smaller(); break;
		case '(': sourceCoordinateMoveList = openbracket(); break;
		case ')': sourceCoordinateMoveList = closedbracket(); break;
		case '|': sourceCoordinateMoveList = pipe(); break;
		case '\n': break;
		default: sourceCoordinateMoveList = square(); break;
	      }
	      
	      //do we need an newline?
	      if( index > (countOfCharactersPerLine * (currentLine + 1)) - 1 || stringToParse[index] == '\n')
	      {
		  currentLine++;
		  currentTranslationVector = originOfCoordinateSystem + targetCoordinateSystem * (lineTranslationVector * currentLine * textSizeInMillimeter); 
		  if(stringToParse[index] == ' ')
		  {
		      continue; // no spaces at the begin of a line
		  }
		
		  //add an artificaial offest to not draw an line between the last character of the current line and the first character of the next line
		  sourceCoordinateMoveList.push_front( Vector( 0.0, 0.0, 5.0));
	      }	 
	      
	      currentTranslationVector += targetCoordinateSystem * (characterTranslationVector * textSizeInMillimeter);
	      
	      for(std::list<Vector>::iterator it = sourceCoordinateMoveList.begin(); it != sourceCoordinateMoveList.end(); it++)
	      {
		  Vector sourceVector = (*it)*textSizeInMillimeter; // Text size in mm
		  Vector sourceVectorInTargetCoordinateSystem = targetCoordinateSystem * sourceVector;		  
		  
		  Vector targetVector = sourceVectorInTargetCoordinateSystem + currentTranslationVector;		  
		  robot->moveTo(targetVector, angleA, angleB);

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
	  list.push_back( Vector( 1.0, 0.0, 1.0) );
      return list;
    }

    static std::list<Vector> i()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.4, 1.0, 1.0) );
	list.push_back( Vector( 0.4, 1.0, 0.0) );
	list.push_back( Vector( 0.4, 0.0, 0.0) );
	list.push_back( Vector( 0.4, 0.0, 1.0) );
	list.push_back( Vector( 0.4, 2.0, 1.0) );
	list.push_back( Vector( 0.4, 2.0, 0.0) );
	list.push_back( Vector( 0.4, 1.8, 0.0) );
	list.push_back( Vector( 0.4, 1.8, 1.0) );
        return list;
    }

    static std::list<Vector> j()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.6, 1.0, 1.0) );
	list.push_back( Vector( 0.6, 1.0, 0.0) );
	list.push_back( Vector( 0.6,-1.0, 0.0) );
	list.push_back( Vector( 0.3,-1.0, 0.0) );
	list.push_back( Vector( 0.6,-1.0, 1.0) );
	list.push_back( Vector( 0.6, 2.0, 1.0) );
	list.push_back( Vector( 0.6, 2.0, 0.0) );
	list.push_back( Vector( 0.6, 1.8, 0.0) );
	list.push_back( Vector( 0.6, 1.8, 1.0) );
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
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 0.0, 0.5, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 1.0) );
        return list;
    }

    static std::list<Vector> l()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.4, 2.0, 1.0) );
	list.push_back( Vector( 0.4, 2.0, 0.0) );
	list.push_back( Vector( 0.6, 0.0, 0.0) );	
	list.push_back( Vector( 0.6, 0.0, 1.0) );
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
	list.push_back( Vector( 0.5, 1.0, 0.0) );
	list.push_back( Vector( 0.5, 0.0, 0.0) );
	list.push_back( Vector( 0.5, 0.0, 1.0) );
	list.push_back( Vector( 0.5, 1.0, 1.0) );	
	list.push_back( Vector( 0.5, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 1.0, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 0.0) );
	list.push_back( Vector( 1.0, 0.0, 1.0) );
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
        list.push_back( Vector( 0.4, 0.0, 1.0) );
	list.push_back( Vector( 0.4, 0.0, 0.0) );
	list.push_back( Vector( 0.4, 2.0, 0.0) );
	list.push_back( Vector( 0.4, 2.0, 1.0) );
	list.push_back( Vector( 0.2, 1.0, 1.0) );
	list.push_back( Vector( 0.2, 1.0, 0.0) );
	list.push_back( Vector( 0.6, 1.0, 0.0) );
	list.push_back( Vector( 0.6, 1.0, 1.0) );
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
	  list.push_back( Vector( 0.25, 0.0, 0.0) );
	  list.push_back( Vector( 0.5, 1.0, 0.0) );
	  list.push_back( Vector( 0.75, 0.0, 0.0) );
	  list.push_back( Vector( 1.0, 1.0, 0.0) );
	  list.push_back( Vector( 1.0, 1.0, 1.0) );
      return list;
    }

    static std::list<Vector> x()
    {
      std::list<Vector> list;
      list.push_back( Vector( 0.0, 1.0, 1.0) );
	  list.push_back( Vector( 0.0, 1.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 1.0) );
	  list.push_back( Vector( 0.0, 0.0, 1.0) );
	  list.push_back( Vector( 0.0, 0.0, 0.0) );
	  list.push_back( Vector( 1.0, 1.0, 0.0) );
	  list.push_back( Vector( 1.0, 1.0, 1.0) );
	  return list;
    }

    static std::list<Vector> y()
    {
      std::list<Vector> list;
	  list.push_back( Vector( 0.0, 1.0, 1.0) );
	  list.push_back( Vector( 0.0, 1.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 1.0) );
	  list.push_back( Vector( 0.0,-1.0, 1.0) );
	  list.push_back( Vector( 0.0,-1.0, 0.0) );
	  list.push_back( Vector( 1.0,-1.0, 0.0) );
	  list.push_back( Vector( 1.0, 1.0, 0.0) );		
	  list.push_back( Vector( 1.0, 1.0, 1.0) );
      return list;
    }

    static std::list<Vector> z()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 1.0, 1.0) );
		list.push_back( Vector( 0.0, 1.0, 0.0) );
		list.push_back( Vector( 1.0, 1.0, 0.0) );
		list.push_back( Vector( 0.0, 0.0, 0.0) );
		list.push_back( Vector( 1.0, 0.0, 0.0) );
		list.push_back( Vector( 1.0, 0.0, 1.0) );
        return list;
    }
    
    static std::list<Vector> zero()
    {
	  std::list<Vector> list;
	  list.push_back( Vector( 1.0, 0.0, 1.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 1.0) );
	  list.push_back( Vector( 0.5, 1.5, 1.0) );
	  list.push_back( Vector( 0.5, 1.5, 0.0) );
	  list.push_back( Vector( 0.5, 0.5, 0.0) );
	  list.push_back( Vector( 0.5, 0.5, 1.0) );
	  return list;
    }
    
    static std::list<Vector> one()
    {
	  std::list<Vector> list;
	  list.push_back( Vector( 0.5, 1.5, 1.0) );
	  list.push_back( Vector( 0.5, 1.5, 0.0) );
	  list.push_back( Vector( 1.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 1.0) );
	  return list;
    }
    
    static std::list<Vector> two()
    {
	  std::list<Vector> list;
	  list.push_back( Vector( 0.0, 1.5, 1.0) );
	  list.push_back( Vector( 0.0, 1.5, 0.0) );
	  list.push_back( Vector( 0.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 1.0, 0.0) );
	  list.push_back( Vector( 0.0, 1.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 1.0) );
	  return list;
    }
    
    static std::list<Vector> three()
    {
	  std::list<Vector> list;
	  list.push_back( Vector( 0.0, 2.0, 1.0) );
	  list.push_back( Vector( 0.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 1.0) );
	  list.push_back( Vector( 0.0, 1.0, 1.0) );
	  list.push_back( Vector( 0.0, 1.0, 0.0) );
	  list.push_back( Vector( 1.0, 1.0, 0.0) );
	  list.push_back( Vector( 1.0, 1.0, 1.0) );
	  return list;
    }
    
    static std::list<Vector> four()
    {
	  std::list<Vector> list;
	  list.push_back( Vector( 0.0, 2.0, 1.0) );
	  list.push_back( Vector( 0.0, 2.0, 0.0) );
	  list.push_back( Vector( 0.0, 1.0, 0.0) );
	  list.push_back( Vector( 0.0, 1.0, 1.0) );
	  list.push_back( Vector( 1.0, 2.0, 1.0) );
	  list.push_back( Vector( 1.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 1.0) );
	  return list;
    }
    
    static std::list<Vector> five()
    {
	  std::list<Vector> list;
	  list.push_back( Vector( 1.0, 2.0, 1.0) );
	  list.push_back( Vector( 1.0, 2.0, 0.0) );
	  list.push_back( Vector( 0.0, 2.0, 0.0) );
	  list.push_back( Vector( 0.0, 1.0, 0.0) );
	  list.push_back( Vector( 1.0, 1.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 1.0) );
	  return list;
    }
    
    static std::list<Vector> six()
    {
	  std::list<Vector> list;
	  list.push_back( Vector( 0.0, 2.0, 1.0) );
	  list.push_back( Vector( 0.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 1.0, 1.0, 0.0) );
	  list.push_back( Vector( 0.0, 1.0, 0.0) );
	  list.push_back( Vector( 0.0, 1.0, 1.0) );
	  return list;
    }
    
    static std::list<Vector> seven()
    {
	  std::list<Vector> list;
	  list.push_back( Vector( 0.0, 2.0, 1.0) );
	  list.push_back( Vector( 0.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 2.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 1.0) );
	  return list;
    }
    
    static std::list<Vector> eight()
    {
	  std::list<Vector> list;
	  list.push_back( Vector( 1.0, 2.0, 1.0) );
	  list.push_back( Vector( 1.0, 2.0, 0.0) );
	  list.push_back( Vector( 0.0, 2.0, 0.0) );
	  list.push_back( Vector( 0.0, 1.0, 0.0) );
	  list.push_back( Vector( 1.0, 1.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 1.0, 0.0) );
	  list.push_back( Vector( 1.0, 1.0, 0.0) );
	  list.push_back( Vector( 1.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 2.0, 1.0) );
	  return list;
    }  
    
    static std::list<Vector> nine()
    {
	  std::list<Vector> list;
	  list.push_back( Vector( 1.0, 1.0, 1.0) );
	  list.push_back( Vector( 1.0, 1.0, 0.0) );
	  list.push_back( Vector( 0.0, 1.0, 0.0) );
	  list.push_back( Vector( 0.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 1.0) );
	  return list;
    }   
    
    static std::list<Vector> plus()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 0.5, 1.0) );
		list.push_back( Vector( 0.0, 0.5, 0.0) );
		list.push_back( Vector( 1.0, 0.5, 0.0) );
		list.push_back( Vector( 1.0, 0.5, 1.0) );
		list.push_back( Vector( 0.5, 1.0, 1.0) );
		list.push_back( Vector( 0.5, 1.0, 0.0) );
		list.push_back( Vector( 0.5, 0.0, 0.0) );
		list.push_back( Vector( 0.5, 0.0, 1.0) );
        return list;
    }
    
	static std::list<Vector> minus()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 0.5, 1.0) );
		list.push_back( Vector( 0.0, 0.5, 0.0) );
		list.push_back( Vector( 1.0, 0.5, 0.0) );
		list.push_back( Vector( 1.0, 0.5, 1.0) );
        return list;
    }
    
	static std::list<Vector> slash()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.3, 0.0, 1.0) );
		list.push_back( Vector( 0.3, 0.0, 0.0) );
		list.push_back( Vector( 0.7, 1.0, 0.0) );
		list.push_back( Vector( 0.7, 1.0, 1.0) );
        return list;
    }
    
	static std::list<Vector> asterisk()
    {
        std::list<Vector> list;
		list.push_back( Vector( 0.5, 1.0, 1.0) );
		list.push_back( Vector( 0.5, 1.0, 0.0) );
		list.push_back( Vector( 0.5, 0.0, 0.0) );
		list.push_back( Vector( 0.5, 0.0, 1.0) );
		list.push_back( Vector( 0.0, 0.7, 1.0) );
		list.push_back( Vector( 0.0, 0.7, 0.0) );
		list.push_back( Vector( 1.0, 0.3, 0.0) );
		list.push_back( Vector( 1.0, 0.3, 1.0) );
		list.push_back( Vector( 0.0, 0.3, 1.0) );
		list.push_back( Vector( 0.0, 0.3, 0.0) );
		list.push_back( Vector( 1.0, 0.7, 0.0) );
		list.push_back( Vector( 1.0, 0.7, 1.0) );
        return list;
    }
    
	static std::list<Vector> questionmark()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 2.0, 1.0) );
		list.push_back( Vector( 0.0, 2.0, 0.0) );
		list.push_back( Vector( 1.0, 2.0, 0.0) );
		list.push_back( Vector( 1.0, 1.3, 0.0) );
		list.push_back( Vector( 0.0, 1.3, 0.0) );
		list.push_back( Vector( 0.0, 0.7, 0.0) );
		list.push_back( Vector( 1.0, 0.7, 0.0) );
		list.push_back( Vector( 1.0, 0.7, 1.0) );
		list.push_back( Vector( 0.5, 0.2, 1.0) );
		list.push_back( Vector( 0.5, 0.0, 0.0) );
		list.push_back( Vector( 0.5, 0.0, 1.0) );
        return list;
    }
    
	static std::list<Vector> exclamationmark()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.5, 2.0, 1.0) );
		list.push_back( Vector( 0.5, 2.0, 0.0) );
		list.push_back( Vector( 0.5, 0.5, 0.0) );
		list.push_back( Vector( 0.5, 0.5, 1.0) );
		list.push_back( Vector( 0.5, 0.2, 1.0) );
		list.push_back( Vector( 0.5, 0.0, 0.0) );
		list.push_back( Vector( 0.5, 0.0, 1.0) );
        return list;
    }
    
	static std::list<Vector> singlequotationmark()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.5, 2.0, 1.0) );
		list.push_back( Vector( 0.5, 2.0, 0.0) );
		list.push_back( Vector( 0.5, 1.7, 0.0) );
		list.push_back( Vector( 0.5, 1.7, 1.0) );
        return list;
    }
    
	static std::list<Vector> doublequotationmark()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.4, 2.0, 1.0) );
		list.push_back( Vector( 0.4, 2.0, 0.0) );
		list.push_back( Vector( 0.4, 1.7, 0.0) );
		list.push_back( Vector( 0.4, 1.7, 1.0) );
		list.push_back( Vector( 0.6, 2.0, 1.0) );
		list.push_back( Vector( 0.6, 2.0, 0.0) );
		list.push_back( Vector( 0.6, 1.7, 0.0) );
		list.push_back( Vector( 0.6, 1.7, 1.0) );
        return list;
    }
    
	static std::list<Vector> colon()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.5, 0.7, 1.0) );
		list.push_back( Vector( 0.5, 0.7, 0.0) );
		list.push_back( Vector( 0.5, 0.6, 0.0) );
		list.push_back( Vector( 0.5, 0.6, 1.0) );
		list.push_back( Vector( 0.5, 0.1, 1.0) );
		list.push_back( Vector( 0.5, 0.1, 0.0) );
		list.push_back( Vector( 0.5, 0.0, 0.0) );
		list.push_back( Vector( 0.5, 0.0, 1.0) );
        return list;
    }
    
	static std::list<Vector> semicolon()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.5, 0.7, 1.0) );
		list.push_back( Vector( 0.5, 0.7, 0.0) );
		list.push_back( Vector( 0.5, 0.6, 0.0) );
		list.push_back( Vector( 0.5, 0.6, 1.0) );
		list.push_back( Vector( 0.5, 0.3, 1.0) );
		list.push_back( Vector( 0.5, 0.3, 0.0) );
		list.push_back( Vector( 0.4, 0.0, 0.0) );
		list.push_back( Vector( 0.4, 0.0, 1.0) );
        return list;
    }
    
	static std::list<Vector> equal()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 0.8, 1.0) );
		list.push_back( Vector( 0.0, 0.8, 0.0) );
		list.push_back( Vector( 1.0, 0.8, 0.0) );
		list.push_back( Vector( 1.0, 0.8, 1.0) );
		list.push_back( Vector( 0.0, 1.2, 1.0) );
		list.push_back( Vector( 0.0, 1.2, 0.0) );
		list.push_back( Vector( 1.0, 1.2, 0.0) );
		list.push_back( Vector( 1.0, 1.2, 1.0) );
        return list;
    }
    
	static std::list<Vector> greater()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 0.2, 1.0) );
		list.push_back( Vector( 0.0, 0.2, 0.0) );
		list.push_back( Vector( 1.0, 1.0, 0.0) );
		list.push_back( Vector( 0.0, 1.8, 0.0) );
		list.push_back( Vector( 0.0, 1.8, 1.0) );
        return list;
    }
    
	static std::list<Vector> smaller()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.0, 1.8, 1.0) );
		list.push_back( Vector( 0.0, 1.8, 0.0) );
		list.push_back( Vector( 1.0, 1.0, 0.0) );
		list.push_back( Vector( 0.0, 0.2, 0.0) );
		list.push_back( Vector( 0.0, 0.2, 1.0) );
        return list;
    }
    
	static std::list<Vector> openbracket()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.4, 0.0, 1.0) );
		list.push_back( Vector( 0.4, 0.0, 0.0) );
		list.push_back( Vector( 0.2, 1.0, 0.0) );
		list.push_back( Vector( 0.4, 2.0, 0.0) );
		list.push_back( Vector( 0.4, 2.0, 1.0) );
        return list;
    }
    
	static std::list<Vector> closedbracket()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.6, 0.0, 1.0) );
		list.push_back( Vector( 0.6, 0.0, 0.0) );
		list.push_back( Vector( 0.8, 1.0, 0.0) );
		list.push_back( Vector( 0.6, 2.0, 0.0) );
		list.push_back( Vector( 0.6, 2.0, 1.0) );
        return list;
    }
    
	static std::list<Vector> pipe()
    {
        std::list<Vector> list;
        list.push_back( Vector( 0.5, 2.0, 1.0) );
		list.push_back( Vector( 0.5, 2.0, 0.0) );
		list.push_back( Vector( 0.5, 0.0, 0.0) );
		list.push_back( Vector( 0.5, 0.0, 1.0) );
        return list;
    }   
    
    static std::list<Vector> space()
    {
        std::list<Vector> list;
        list.push_back( Vector( 1.0, 0.0, 1.0) );
        return list;
    }   
    
    static std::list<Vector> square()
    {
	  std::list<Vector> list;
	  list.push_back( Vector( 1.0, 0.0, 1.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 0.0, 0.0) );
	  list.push_back( Vector( 0.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 2.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 0.0) );
	  list.push_back( Vector( 1.0, 0.0, 1.0) );
	  return list;
    }    
};
#endif // TEXT_H

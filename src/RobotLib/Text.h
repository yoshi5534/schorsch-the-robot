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
    private:
       static Vector getSavePositionOfCurrentCharacter
      (
	Matrix boardCoordinateSystem,
	Vector originOfBoardCoordinateSystem,
	Vector lineTranslationVector,
        Vector characterTranslationVector,
        Vector savePositionOffestVector,
	float64 textSizeInMillimeter,
        uint64 currentLine,
	uint64 currentCharacterInLine
      )
      {
	 //before we move to the next line we will add some room between the marker and the board
	Vector currentLineVector = lineTranslationVector * currentLine;
	Vector currentCharacterInLineVector = characterTranslationVector * currentCharacterInLine;
	
	Vector savePositionOfCurrentCharacterVector = boardCoordinateSystem * ((currentLineVector + currentCharacterInLineVector + savePositionOffestVector) * textSizeInMillimeter) + originOfBoardCoordinateSystem;
	return savePositionOfCurrentCharacterVector;
      }
      
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
	Matrix boardCoordinateSystem, 
	Vector originOfBoardCoordinateSystem, 
	float64 angleA,
	float64 angleB,
	float64 textSizeInMillimeter,
	uint64 countOfCharactersPerLine
      )
      {
	  Vector lineTranslationVector(0,-2.5,0);
	  Vector characterTranslationVector(1.3,0,0);	  
	  Vector savePositionOffestVector(0,0,7);
	  
	  uint64 currentLine = 1;
	  uint64 currentCharacterInLine = 0;	  
	  Vector originOfCurrentLineVector = lineTranslationVector;
	  
	  {
	    Vector savePositionOfCurrentCharacterVector = getSavePositionOfCurrentCharacter(boardCoordinateSystem, 
											    originOfBoardCoordinateSystem, 
											    lineTranslationVector, 
											    characterTranslationVector,
											    savePositionOffestVector,
											    textSizeInMillimeter,
											    currentLine, 
											    currentCharacterInLine);
	      robot->moveTo( savePositionOfCurrentCharacterVector, angleA, angleB );
	  }
	  
	  
	  for(size_t currentCharacterIndex = 0; currentCharacterIndex < stringToParse.length(); currentCharacterIndex++)
	  {
	      currentCharacterInLine++;
	      std::list<Vector> characterMoveList;
	      switch(stringToParse[currentCharacterIndex])
	      {
		case 'a': characterMoveList = a(); break;
		case 'b': characterMoveList = b(); break;
		case 'c': characterMoveList = c(); break;
		case 'd': characterMoveList = d(); break;
		case 'e': characterMoveList = e(); break;
		case 'f': characterMoveList = f(); break;
		case 'g': characterMoveList = g(); break;
		case 'h': characterMoveList = h(); break;
		case 'i': characterMoveList = i(); break;
		case 'j': characterMoveList = j(); break;
		case 'k': characterMoveList = k(); break;
		case 'l': characterMoveList = l(); break;
		case 'm': characterMoveList = m(); break;
		case 'n': characterMoveList = n(); break;
		case 'o': characterMoveList = o(); break;
		case 'p': characterMoveList = p(); break;
		case 'q': characterMoveList = q(); break;
		case 'r': characterMoveList = r(); break;
		case 's': characterMoveList = s(); break;
		case 't': characterMoveList = t(); break;
		case 'u': characterMoveList = u(); break;
		case 'v': characterMoveList = v(); break;
		case 'w': characterMoveList = w(); break;
		case 'x': characterMoveList = x(); break;
		case 'y': characterMoveList = y(); break;
		case 'z': characterMoveList = z(); break;
		case '0': characterMoveList = zero (); break;
		case '1': characterMoveList = one  (); break;
		case '2': characterMoveList = two  (); break;
		case '3': characterMoveList = three(); break;
		case '4': characterMoveList = four (); break;
		case '5': characterMoveList = five (); break;
		case '6': characterMoveList = six  (); break;
		case '7': characterMoveList = seven(); break;
		case '8': characterMoveList = eight(); break;
		case '9': characterMoveList = nine (); break;
		case ' ': characterMoveList = space(); break;
		case '\n': break;
		default: characterMoveList = square(); break;
	      }
	      
	      //do we need an newline?
	      if( currentCharacterInLine == countOfCharactersPerLine || stringToParse[currentCharacterIndex] == '\n')
	      {
		 //before we move to the next line we will add some room between the marker and the board
		 { 
		    Vector savePositionOfCurrentCharacterVector = getSavePositionOfCurrentCharacter(boardCoordinateSystem, 
												    originOfBoardCoordinateSystem, 
												    lineTranslationVector, 
												    characterTranslationVector,
												    savePositionOffestVector,
												    textSizeInMillimeter,
												    currentLine, 
												    currentCharacterInLine);
		    robot->moveTo( savePositionOfCurrentCharacterVector, angleA, angleB );
		}
		  
		  
		  currentCharacterInLine = 0;
		  currentLine++;
		  originOfCurrentLineVector = lineTranslationVector * currentLine; 
	      }	 
	      
	      Vector originOfCurrentCharacterVector = originOfCurrentLineVector + (characterTranslationVector * currentCharacterInLine);
	      
	      for(std::list<Vector>::iterator it = characterMoveList.begin(); it != characterMoveList.end(); it++)
	      {
		  Vector targetVector = originOfCurrentCharacterVector + (*it);		  
		  robot->moveLinearTo(boardCoordinateSystem * (targetVector * textSizeInMillimeter) + originOfBoardCoordinateSystem, angleA, angleB);
	      }	      
	  }
   
	  //before we end the text drawing we will add some room between the marker and the board because the next statement might lead to an collision with the board	
	  {
	    Vector savePositionOfCurrentCharacterVector = getSavePositionOfCurrentCharacter(boardCoordinateSystem, 
											    originOfBoardCoordinateSystem, 
											    lineTranslationVector, 
											    characterTranslationVector,
											    savePositionOffestVector,
											    textSizeInMillimeter,
											    currentLine, 
											    currentCharacterInLine);
	    robot->moveTo( savePositionOfCurrentCharacterVector, angleA, angleB );
	  }
	
	  
	  
      }  
      
      

      static void cleanBoard
      ( 	
	Robot* robot, 
	Matrix boardCoordinateSystem, 
	Vector originOfBoardCoordinateSystem, 
	float64 angleA,
	float64 angleB,
	float64 textSizeInMillimeter,
	uint64 countOfCharactersPerLine,
	uint64 countOfLines
      )
      {
	  Vector lineTranslationVector(0,-2.5,0);
	  Vector characterTranslationVector(1.3,0,0);	  
	  Vector savePositionOffestVector(0,0,7);
	  
	  uint64 currentLine = 0;
	  
	  Vector currentTranslationVector = originOfBoardCoordinateSystem;
	  
	  for(uint64 currentLine = 0; currentLine <= countOfLines; currentLine++)
	  {
	    Vector startOfLine = originOfBoardCoordinateSystem + boardCoordinateSystem * (lineTranslationVector * currentLine * textSizeInMillimeter); 
	    Vector endOfLine =  startOfLine + (characterTranslationVector * textSizeInMillimeter) * countOfCharactersPerLine;
	    	    
	   {
	    Vector savePositionOfCurrentCharacterVector = getSavePositionOfCurrentCharacter(boardCoordinateSystem, 
											    originOfBoardCoordinateSystem, 
											    lineTranslationVector, 
											    characterTranslationVector,
											    savePositionOffestVector,
											    textSizeInMillimeter,
											    currentLine, 
											    0);
	      robot->moveTo( savePositionOfCurrentCharacterVector, angleA, angleB );
	   }
	  
	    
	    robot->moveLinearTo(startOfLine, angleA, angleB); 
	    robot->moveLinearTo(endOfLine  , angleA, angleB);
	    robot->moveLinearTo(startOfLine, angleA, angleB);
	    
	   {
	    Vector savePositionOfCurrentCharacterVector = getSavePositionOfCurrentCharacter(boardCoordinateSystem, 
											    originOfBoardCoordinateSystem, 
											    lineTranslationVector, 
											    characterTranslationVector,
											    savePositionOffestVector,
											    textSizeInMillimeter,
											    currentLine, 
											    0);
	      robot->moveTo( savePositionOfCurrentCharacterVector, angleA, angleB );
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
	  list.push_back( Vector( 1.0, 1.0, 0.0) );
	  list.push_back( Vector( 1.0, 1.0, 1.0) );
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
	  list.push_back( Vector( 0.0, 0.0, 0.0) );
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

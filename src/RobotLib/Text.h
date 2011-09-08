#ifndef TEXT_H
#define TEXT_H

#include <list>
#include "Vector.h"

class Text
{
    public:
      std::string processString(std::string inputString)
      {
	
      }

//     std::list<Vector> a()
//     {
//         std::list<Vector> list;
//         list.push_back( Vector( .0, .0, .0) );
//         return list;
//     }
//     
private:
    
    std::list<Vector> a()
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
    
    
    std::list<Vector> b()
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

    std::list<Vector> c()
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

#endif // TEXT_H

#ifndef _HELPER_METHODS_H_
#define _HELPER_METHODS_H_
 
 #include <sstream>
 #include <iostream>
 

 template< typename ValueType >
 std::string dataToString( ValueType inputValue )
 {
  std::stringstream stream;
  stream << inputValue;
  std::string valueAsString = stream.str();
  return valueAsString;
 }
 
 class HelperMethods
 {
    public:
       static void log( std::string command );
 };



#endif // _HELPER_METHODS_H_

#ifndef _HELPER_METHODS_H_
#define _HELPER_METHODS_H_
 
 #include <sstream>
 #include <iostream>

 

template< typename ValueType >
static std::string dataToString( const ValueType& inputValue )
{
 std::ostringstream stream;
 stream.precision(2);
 stream.setf(std::ios::fixed,std::ios::floatfield);

 stream << inputValue;

 return stream.str();
}

static std::string dataToString( const int8& inputValue )
{
 std::ostringstream stream;
 int16 temp = inputValue;
 stream << temp;

 return stream.str();
}

static std::string dataToString( const uint8& inputValue )
{
 std::ostringstream stream;
 int16 temp = inputValue;
 stream << temp;

 return stream.str();
}
 
 class HelperMethods
 {
    public:
       static void log( std::string command );
 };



#endif // _HELPER_METHODS_H_

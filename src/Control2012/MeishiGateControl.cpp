#include "MeishiGateControl.h"
#include <stdexcept>
#include <sstream>

MeishiGateControl::MeishiGateControl(std::string deviceName) :
  _port(deviceName.c_str())
{
    this->_deviceName = deviceName;
    openPort();
}

MeishiGateControl::~MeishiGateControl()
{

}

void MeishiGateControl::deletePort()
{
    if( _port.IsOpen() )
    {
	_port.Close();
    }
}

void MeishiGateControl::openPort()
{
//     _port = new QextSerialPort(_deviceName.c_str(), QextSerialPort::Polling);
//     _port->setBaudRate(BAUD9600);
//     _port->setParity(PAR_NONE);
//     _port->setDataBits(DATA_8);
//     _port->setStopBits(STOP_1);
//     _port->setFlowControl(FLOW_OFF);
//     _port->setTextModeEnabled(true);
//     _port->setTimeout(1000);
    
   /*
    _port->setBaudRate(BAUD9600);
    _port->setParity(PAR_EVEN);
    _port->setDataBits(DATA_8);
    _port->setStopBits(STOP_2);
    _port->setFlowControl(FLOW_OFF);
    _port->setTextModeEnabled(true);
    _port->setTimeout(1000);
    
    *
    **/ 
    
    /*
     * 
     *  // Initialize the DCBlength member.
    lpTest.DCBlength = sizeof (DCB);
    GetCommState(hDevice,&lpTest); //com state
   // lpTest.BaudRate = CBR_9600;//load baud
    lpTest.ByteSize = 8;// load no. bits
    lpTest.Parity = NOPARITY;//parity
    lpTest.StopBits = ONESTOPBIT;//stop bits

     * 
     * */
    
    _port.Open();
    _port.SetBaudRate( SerialPort::BAUD_9600);
    _port.SetParity(SerialPort::PARITY_NONE);
    _port.SetCharSize(SerialPort::CHAR_SIZE_8);
    _port.SetNumOfStopBits(SerialPort::STOP_BITS_1);
    _port.SetFlowControl(SerialPort::FLOW_CONTROL_NONE);
    
    if(_port.IsOpen())
    {
      return;
    }
    
    
//     if(_port->isOpen())
//     {
// 	_port->close();
// 	_port->open(QIODevice::ReadWrite);
// 
// 	if( _port->isWritable() )
// 	{
// 	    return;
// 	}
//     }
// 
//     deletePort();
//     delete _port;
//     _port = NULL;

    std::string errorMessage("RobotPort::openPort unable to open device ");
    errorMessage += _deviceName;
    throw std::invalid_argument( errorMessage );

    return;
}

std::string MeishiGateControl::readLine()
{          
    std::string terminator = "\n";
    std::string resultString = "";
    int32 failCounter = 300; // wait max for 3 seconds
    char lastTerminatorChar = terminator[terminator.size()-1];

    while( _port.IsDataAvailable() )
    {
	char receivedChar;
	receivedChar = _port.ReadByte();
// 	if(result != 0)
// 	{
// 	    failCounter--;
// 	    if(failCounter <= 0)
// 	    {
// 		std::stringstream stringStream;
// 		stringStream << result;
// 
// 		throw(std::runtime_error(("RobotPort::read() result " + stringStream.str() + " was returned by serial port too often. Timeout hit!").c_str()));
// 	    }
// 	    usleep(10000);
// 	}
	resultString.append(&receivedChar,1);

	// to save time we are just comparing the string when the last char of the terminator string is fetched
	if(receivedChar == lastTerminatorChar)
	{
	    if(resultString.substr(resultString.length()-terminator.length()).compare(terminator) == 0)
	    {
		break;
	    }
	}
    }
    // chop the terminator
    resultString = resultString.substr(0, resultString.length()-terminator.length());
    return resultString;
}


void MeishiGateControl::send( std::string data)
{
  data += "\n";
  _port.Write(data);
}

bool MeishiGateControl::checkGate(std::string gateName)
{
    this->send(gateName);
    
    if(this->readLine().compare("active") == 0)
    {
	return true;
    }
    else
    {
      return false;
    }    
}

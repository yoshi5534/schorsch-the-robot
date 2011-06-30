#ifndef ROBOT_H
#define ROBOT_H

#include <QtCore/QCoreApplication>
#include "../qextserialport/src/qextserialport.h"
#include "../qextserialport/src/qextserialenumerator.h"
#include <iostream>
#include <QList>
#include <QtDebug>
#include <sstream>
#include <stdexcept>
#include <unistd.h>

class Robot
{
    private:
        uint64 _delay;
        std::string _deviceName;
        QextSerialPort*  _port;

        void deletePort()
        {
            if( _port != NULL )
            {
                _port->close();
                delete _port;
                _port = NULL;
            }
        }

       void openPort()
        {
            _port = new QextSerialPort(_deviceName.c_str(), QextSerialPort::Polling);
            _port->setBaudRate(BAUD9600);
            _port->setParity(PAR_EVEN);
            _port->setDataBits(DATA_8);
            _port->setStopBits(STOP_2);
            _port->setFlowControl(FLOW_OFF);
            _port->setTextModeEnabled(true);
            _port->setTimeout(1000);
            if(_port->isOpen())
            {
                _port->close();
                _port->open(QIODevice::ReadWrite);

                if( _port->isWritable() )
                {
                    return;
                }
            }

            deletePort();
            delete _port;
            _port = NULL;

            std::string errorMessage("Robot::openPort unable to open device ");
            errorMessage += _deviceName;
            throw std::invalid_argument( errorMessage );

            return;
        }

       std::string intToString( int inputValue )
       {
           std::stringstream stream;
           stream << inputValue;
           std::string valueAsString = stream.str();
           log( valueAsString );
           return valueAsString;
       }

    public:
	    Joint W;
		Joint S;
		Joint E;
		Joint P;
		Joint R;	  
	  
        Robot
        ( 
		  std::string deviceName = "/dev/ttyS0",
		  int delay = 1)
		  : _deviceName( deviceName )
		  , _delay (delay)
		  , W( this, 0)
		  , S( this, 1)
		  , E( this, 2)
		  , P( this, 4)
		  , R( this, 5)
		)
        {
            //open port
            openPort();
			speed(12);)
        }

        virtual ~Robot()
        {
            deletePort();
        }

        void log( std::string command )
        {
            std::cout << command << std::endl;
        }

        void sendCommand( std::string command )
        {
            command += "\x0D";
            _port->write(command.c_str());
            usleep(_delay);
        }

        void sendCommandAndLog( std::string command )
        {
            log( command );
            sendCommand( command );
        }

        void setCommandDelay(int delay)
        {
            _delay = delay;
        }
  
		void speed( uint8 speed)
		{
		  if( speed > 30)
		  {
			throw std::invalid_argument( "Robot::speed the value " + dataToString(speed) + " is not valid. Pleas chose an speed in the intervall [0,30]");
		  }
		  
		  sendCommand( "SP " + dataToString(speed) + " L 0")
		}
};

#endif // ROBOT_H

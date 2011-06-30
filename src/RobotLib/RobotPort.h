#ifndef ROBOTPORT_H
#define ROBOTPORT_H

#include <QtCore/QCoreApplication>
#include "../qextserialport/src/qextserialport.h"
#include "../qextserialport/src/qextserialenumerator.h"
#include <QList>
#include <QtDebug>
#include <stdexcept>
#include <unistd.h>

#include "Types.h"

class RobotPort
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

            std::string errorMessage("RobotPort::openPort unable to open device ");
            errorMessage += _deviceName;
            throw std::invalid_argument( errorMessage );

            return;
        }

    public:

        RobotPort
        (
                  std::string deviceName = "/dev/ttyS0",
                  int delay = 1)
                  : _deviceName( deviceName )
                  , _delay (delay)
        {
            //open port
            openPort();
        }

        virtual ~RobotPort()
        {
            deletePort();
        }

        void sendCommand( std::string command )
        {
            command += "\x0D";
            _port->write(command.c_str());
            usleep(_delay);
        }

        void sendCommandAndLog( std::string command )
        {
            HelperMethods::log( command );
            sendCommand( command );
        }

        void setCommandDelay(int delay)
        {
            _delay = delay;
        }
};


#endif // ROBOTPORT_H

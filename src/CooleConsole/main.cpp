#include <QtCore/QCoreApplication>
#include "../qextserialport/src/qextserialport.h"
#include "../qextserialport/src/qextserialenumerator.h"
#include <iostream>
#include <QList>
#include <QtDebug>
#include <sstream>
#include <stdexcept>

class Robot
{
    private:
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
        Robot( std::string deviceName = "/dev/ttyS0" )
        : _deviceName( deviceName )
        {
            //open port
            openPort();
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
            sleep(1);
        }

        void sendCommandAndLog( std::string command )
        {
            log( command );
            sendCommand( command );
        }

        void moveJointW( int value){ sendCommandAndLog("DJ 0, " + intToString(value) ); }
        void moveJointS( int value){ sendCommandAndLog("DJ 1, " + intToString(value) ); }
        void moveJointE( int value){ sendCommandAndLog("DJ 2, " + intToString(value) ); }
        void moveJointP( int value){ sendCommandAndLog("DJ 4, " + intToString(value) ); }
        void moveJointR( int value){ sendCommandAndLog("DJ 5, " + intToString(value) ); }
};





int main(int argc, char *argv[])
{
    Robot robot;

    robot.sendCommandAndLog( "SP 30");
    robot.sendCommandAndLog( "MO 42");
    robot.sendCommandAndLog( "MO 1");
    robot.sendCommandAndLog( "MO 44");
    robot.sendCommandAndLog( "MO 1");
    //robot.moveJointW( -20 );
    //robot.moveJointS( -20 );
    //robot.moveJointE( -20 );
    //robot.moveJointP( -20 );
    //robot.moveJointR( -20 );


    /*robot.sendCommandAndLog( "SP 10");
    sleep(1);
    robot.sendCommandAndLog( "MO 1");
    sleep(1);
    robot.sendCommandAndLog( "SP 30");
    sleep(1);
    robot.sendCommandAndLog( "DJ 4, -90");
    robot.sendCommandAndLog( "DW 2,0,0");
    robot.sendCommandAndLog( "DW -2,0,0");
    robot.sendCommandAndLog( "DW 2,0,0");
    robot.sendCommandAndLog( "DW -2,0,0");
    robot.sendCommandAndLog( "DW 2,0,0");
    robot.sendCommandAndLog( "DW -2,0,0");*/

    //sendCommandAndLog( port, "DW 2,0,0");
    //sendCommandAndLog( port, "DW 0,200,0");
    //sendCommandAndLog( port, "DW -2,0,0");
    //sendCommandAndLog( port, "DW 0,-200,0");

    //sendCommandAndLog( port, "RS");
    //sendCommandAndLog( port, "SP 15");
    //sendCommandAndLog( port, "MO 1");
    //sendCommandAndLog( port, "MO 42");
   // sendCommandAndLog( port, "SP 2");
    //bsendCommandAndLog( port, "MO 42");

    return 0;
}

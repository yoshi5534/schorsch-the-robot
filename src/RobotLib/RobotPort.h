#ifndef ROBOTPORT_H
#define ROBOTPORT_H

#include <list>
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
        std::string _deviceName;
        QextSerialPort*  _port;
        std::list< std::string > _commandList;
        bool _liveCommandModus;
        uint64 _delay;

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

       void sendLine( std::string command )
       {
           command += "\x0D";
           _port->write(command.c_str());
       }

       void sendLineAndLog( std::string command )
       {
           HelperMethods::log( command );
           sendLine( command );
       }

   public:
       std::string sendAndReceive( std::string command, bool doLog = true, bool receive = true)
       {
           // TODO: assure thread safety

           if(doLog)
                HelperMethods::log( "Sending: " + command );

           sendLine( command );
           if(receive)
           {
               char receivedChar = 'a';
               std::string terminator = "\x0D";
               std::string str = "";
               int failCounter = 300; // wait max for 3 seconds
               char lastTerminatorChar = terminator[terminator.size()-1];

               while( true )
               {
                    qint64 result = _port->read(&receivedChar, 1);
                    if(result != 0)
                    {
                        failCounter--;

                        if(failCounter <= 0)
                        {
                            std::stringstream sstrTemp;
                            sstrTemp << result;

                            throw(std::runtime_error(("Result " + sstrTemp.str() + " was returned by serial port too often. Timeout hit!").c_str()));
                        }
                        usleep(10000);
                    }

                    str.append(&receivedChar,1);
                    if(receivedChar == lastTerminatorChar) // to save time we are just comparing the string when the last char of the terminator string is fetched
                    {
                        if(str.substr(str.length()-terminator.length()).compare(terminator) == 0)
                        {
                            break;
                        }
                    }
               }

               str = str.substr(0, str.length()-terminator.length()); // chop the terminator

               if(doLog)
                    HelperMethods::log( "Receiving: " + str );

               return str;
           }
           return "";
       }

    public:

        RobotPort
        (
            std::string deviceName = "/dev/ttyS0",
            int delay = 1000000,
            bool liveCommandModus = false
        )
        : _deviceName( deviceName )
        , _delay (delay)
        , _liveCommandModus( liveCommandModus )
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
            if( _liveCommandModus == false)
            {
                 //store the camands and do not execute them now
                 _commandList.push_back( command );
            }
            else
            {
               sendLine(command);
               usleep(_delay);
            }
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

        void setLiveCommandMode(bool newMode)
        {
            _liveCommandModus = newMode;
        }

        void executeQuedCommands()
        {

            sendLineAndLog("N 1");
            //usleep(_delay);
            //sendLineAndLog("NW");
            uint64 lineNumber = 1;
            for( std::list<std::string>::iterator it = _commandList.begin(); it != _commandList.end(); it++ )
            {
                std::string currentLine = "";
                currentLine += dataToString(lineNumber);
                currentLine += " ";
                currentLine += *it;

                sendLineAndLog(currentLine);
                usleep(150000);
                lineNumber++;
             }
            sendLineAndLog(dataToString(lineNumber) + " ED");
            usleep(_delay);
            sendLineAndLog("RN 1");
        }
};


#endif // ROBOTPORT_H

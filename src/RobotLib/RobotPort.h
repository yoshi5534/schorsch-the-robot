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

       std::string readLine()
       {          
           std::string terminator = "\x0D";
           std::string resultString = "";
           int32 failCounter = 300; // wait max for 3 seconds
           char lastTerminatorChar = terminator[terminator.size()-1];

           while( true )
           {
                char receivedChar;
                qint64 result = _port->read(&receivedChar, 1);
                if(result != 0)
                {
                    failCounter--;
                    if(failCounter <= 0)
                    {
                        std::stringstream stringStream;
                        stringStream << result;

                        throw(std::runtime_error(("RobotPort::read() result " + stringStream.str() + " was returned by serial port too often. Timeout hit!").c_str()));
                    }
                    usleep(10000);
                }
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

   public:
       std::string sendAndReceive( std::string command, bool doLog = true)
       {
           // TODO: assure thread safety
           if(doLog)
           {
                HelperMethods::log( "Sending: " + command );
           }

           sendLine( command );

           std::string resultString = readLine();

           if(doLog)
           {
               HelperMethods::log( "Receiving: " + resultString );
           }

           return resultString;
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
	    HelperMethods::log( command );
            if( _liveCommandModus == false)
            {
                 //store the camands and do not execute them now
                 _commandList.push_back( command );
            }
            else
            {
               sendLine(command);
               //usleep(_delay);
            }
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
            uint64 lineNumber = 1;
            for( std::list<std::string>::iterator it = _commandList.begin(); it != _commandList.end(); it++ )
            {
                std::string currentLine = "";
                currentLine += dataToString(lineNumber);
                currentLine += " ";
                currentLine += *it;

                //Method1 send and wait
                {
                    sendLineAndLog(currentLine);
                    lineNumber++;
                    usleep(150000);
                }

                //Method2 send and compare  (slow due to compare but cool)
//                {
//                    sendLineAndLog(currentLine);
//                    sendLine("STR " + dataToString(lineNumber));
//                    std::string resultLine = readLine();
//
//                    if( currentLine != resultLine)
//                    {   //ohoh line send failed we should resend this line
//                        it--;
//                    }
//                    else
//                    { //sending sucedeed progress with next comand
//                        lineNumber++;
//                    }
//                }
             }
            sendLineAndLog(dataToString(lineNumber) + " ED");
            usleep(_delay);
            sendLineAndLog("RN 1");
        }
};


#endif // ROBOTPORT_H

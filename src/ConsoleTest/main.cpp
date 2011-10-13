#include <QtCore/QCoreApplication>
#include "../qextserialport/src/qextserialport.h"
#include "../qextserialport/src/qextserialenumerator.h"
#include <iostream>
#include <QList>
#include <QtDebug>
#include <sstream>

QextSerialPort* openPort()
{
    QextSerialPort* port = new QextSerialPort("/dev/ttyS0", QextSerialPort::Polling);
    port->setBaudRate(BAUD9600);
    port->setParity(PAR_EVEN);
    port->setDataBits(DATA_8);
    port->setStopBits(STOP_2);
    port->setFlowControl(FLOW_OFF);
    port->setTextModeEnabled(true);
    if(port->isOpen())
    {
        port->close();
        port->open(QIODevice::ReadWrite);

        if( port->isWritable() )
        {
            return port;
        }
    }
    return NULL;
}

void closePort(QextSerialPort* port)
{
    port->close();
}

void sendCommand( QextSerialPort* port, std::string command )
{
    command += "\x0D";
    port->write(command.c_str());
}

int main(int argc, char *argv[])
{
    QextSerialPort*  port = openPort();
    if( port == NULL )
    {
        std::cout << "Rs232 intitailisation falied" << std::endl;
        return -1;
    }

    sendCommand( port, "mo 1");
    sendCommand( port, "mo 42");

    closePort(port);

    return 0;
}

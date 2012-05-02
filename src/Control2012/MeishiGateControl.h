#ifndef MEISHIGATECONTROL_H
#define MEISHIGATECONTROL_H

#include <string>
#include "../qextserialport/src/qextserialport.h"
#include "../qextserialport/src/qextserialenumerator.h"
#include "../RobotLib/Types.h"

class MeishiGateControl
{

public:
    MeishiGateControl(std::string deviceName);
    virtual ~MeishiGateControl();
    std::string readLine();
    void send(std::string data);
    bool checkGate(std::string gateName);
    
private:
    void openPort();
    void deletePort();
    
    QextSerialPort*  _port;
    std::string _deviceName;
};

#endif // MEISHIGATECONTROL_H

#ifndef MEISHIGATECONTROL_H
#define MEISHIGATECONTROL_H

#include <string>
#include <map>
//#include "../qextserialport/src/qextserialport.h"
//#include "../qextserialport/src/qextserialenumerator.h"
#include <SerialPort.h>

#include "../RobotLib/Types.h"
#include "../RobotLib/Where.h"
#include "../RobotLib/Robot.h"

class MeishiGateControl
{

   std::vector< Where > positions;
   Robot *robot;
   bool _running;
   
   enum PositionEnum
    {
      EndOfGoHome = 0,
      EndOfBeOffended,
      EndOfTaunting,
      EndOfMeishiDiscard,
      EndOfGotoMeishi,
      GotoMeishiDiscard,
      GotoMeishi1Drop,
      BeOffended,
      BeOffended1,
      BeOffended2,
      DoTaunting,
      GotoMeishi1Grip,
      GotoMeishi1Safety,  
      GotoMeishi2Grip,
      GotoMeishi2Safety,
      GotoMeishi3Grip,
      GotoMeishi3Safety,
      GotoMeishi4Grip,
      GotoMeishi4Safety
    }positionEnum;
    
    struct MeshiSteps
    {
      uint32 gotoMeishi;
      uint32 gripMeishi;
      uint32 backToMeishi;
      uint32 dropMeishi;    
    };
  
public:
    MeishiGateControl(std::string deviceName);
    virtual ~MeishiGateControl();
    std::string readLine();
    void send(std::string data);
    void uploadProgram();

    void run();
    
private:
    void openPort();
    void deletePort();
    bool checkAndGrabMeishi(std::string gateName);
    void doTaunting();
    void beOffended();    
    void gotoMeishi(std::string gateName);   
    bool checkGate(std::string gateName); 
    
    void discardMeishiInDisgust();
    void dropMeishiInContainer();
    void giveBackMeishi();
    
    std::map<std::string, MeshiSteps> _meshiGrepProgramms;
    SerialPort  _port;
    std::string _deviceName;
};

#endif // MEISHIGATECONTROL_H

#ifndef AutomationThread_H
#define AutomationThread_H

#include <vector>
#include <QThread>

#include "../RobotLib/Robot.h"
#include "ImpressAutomation.h"
#include "MeishiGateControl.h"

class AutomationThread : public QThread
{

public:
    AutomationThread(com::sun::star::uno::Reference<com::sun::star::frame::XComponentLoader> createdXComponentLoader);
    ~AutomationThread();

private:
    Robot *robot;
    //MeishiGateControl *meishiGateControl;
    ImpressAutomation impressAutomation;
    QThread *automationThread;
    bool running;
 
    std::vector< Where > positions;
            
    bool robotIsAtHomePossition(float64 allowedDelta);
    
    enum PositionEnum
    {
      AboveSpecimen = 0,
      SlightyAboveSpecimen,
      ProjectionBeginPosition,
      ProjectionIntoBeam1,
      ProjectionIntoBeam2,
      ProjectionIntoBeam3,
      EndoscopeSavety,
      EndoscopeInside1,
      EndoscopeInside2,
      ComputedTomographyBegin,
      ComputedTomographyEnd,   
      EndOfGripSpecimen,
      EndOfProjection,
      EndOfEndoscope,
      EndOfComputedThomography,
      EndOfGoHome,
      EndOfBeOffended,
      EndOfTaunting,
      GotoMeishi1Safety,
      GotoMeishi1Grip, 
      GotoMeishi1Drop,
      BeOffended,
      DoTaunting,	
    }positionEnum;
    
protected:
    void run();

public:
    void abortTransmission();
    void uploadProgram();
    void loadPresentation(std::string fileName);
    void startPresentation();
    void stopPresentation();
    void nextSlide();
    void previousSlide();
    void stopProgram();
    
    void checkAndGrabMeishi(std::string gateName);
    void doTaunting();
    void beOffended();    
    void gotoMeishi(std::string gateName);
    
    void pickupSpecimen();
    void acquireEnoscopeData(bool withImpress = true);
    void acquireComputerTomographyData(bool withImpress = true);
    void acquireRadioscopieData(bool withImpress = true);
    void releaseSpecimen();
};

#endif // AutomationThread_H

#ifndef AutomationThread_H
#define AutomationThread_H

#include <vector>
#include <QThread>

#include "../RobotLib/Robot.h"
#include "ImpressAutomation.h"


class AutomationThread : public QThread
{

public:
    AutomationThread(com::sun::star::uno::Reference<com::sun::star::frame::XComponentLoader> createdXComponentLoader);
    ~AutomationThread();

private:
    Robot *robot;
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
      ProjectionIntoBeam,
      EndoscopeSavety,
      EndoscopeInside,
      ComputedTomographyBegin,
      ComputedTomographyEnd,   
      EndOfGripSpecimen,
      EndOfProjection,
      EndOfEndoscope,
      EndOfComputedThomography,
      EndOfGoHome   
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
    
    void pickupSpecimen();
    void acquireEnoscopeData();
    void acquireComputerTomographyData();
    void acquireRadioscopieData();
    void releaseSpecimen();
};

#endif // AutomationThread_H

#ifndef MAINGUI_H
#define MAINGUI_H

#include <vector>

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QProcess>

#include "../RobotLib/Robot.h"
#include "ImpressAutomation.h"

namespace Ui 
{
class mainGUI;
}

class mainGUI : public QMainWindow {
    Q_OBJECT
public:
    mainGUI(com::sun::star::uno::Reference<com::sun::star::frame::XComponentLoader> createdXComponentLoader, QWidget *parent = 0);
    ~mainGUI();

private:
    Ui::mainGUI *ui;
    Robot *robot;
    ImpressAutomation impressAutomation;
    
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

public slots:
    void abortTransmission();
    void uploadProgram();
    void selectPresentation();
    void loadPresentation();
    void startPresentation();
    void stopPresentation();
    void nextSlide();
    void previousSlide();
    void startProgram();

    
};

#endif // MAINGUI_H

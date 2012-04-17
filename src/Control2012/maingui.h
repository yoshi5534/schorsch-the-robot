#ifndef MAINGUI_H
#define MAINGUI_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
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
        
    bool robotIsAtHomePossition(float64 allowedDelta);

public slots:
    void abortTransmission();
    void uploadProgram();
    void loadPresentation();
    void startPresentation();
    void stopPresentation();
    void nextSlide();
    void previousSlide();

    
};

#endif // MAINGUI_H

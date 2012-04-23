#ifndef MAINGUI_H
#define MAINGUI_H

#include <vector>

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QProcess>
#include <QThread>

#include "../RobotLib/Robot.h"
#include "AutomationThread.h"

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
    AutomationThread automationThread;
 
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
    void stopProgram();    
};

#endif // MAINGUI_H

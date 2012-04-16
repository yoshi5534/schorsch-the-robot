#ifndef MAINGUI_H
#define MAINGUI_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include "../RobotLib/Robot.h"

namespace Ui {
class mainGUI;
}

class mainGUI : public QMainWindow {
    Q_OBJECT
public:
    mainGUI(QWidget *parent = 0);
    ~mainGUI();

private:
    Ui::mainGUI *ui;
    Robot *robot;
    
    bool robotIsAtHomePossition(float64 allowedDelta);

public slots:
    void abortTransmission();
    void uploadProgram();
    void yesClicked();

    
};

#endif // MAINGUI_H

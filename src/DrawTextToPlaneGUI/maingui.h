#ifndef MAINGUI_H
#define MAINGUI_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFileSystemModel>
#include "../RobotLib/Robot.h"

namespace Ui {
    class mainGUI;
}

class mainGUI : public QMainWindow {
    Q_OBJECT
public:
    mainGUI(QWidget *parent = 0);
    ~mainGUI();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::mainGUI *ui;
    Robot *robot;

public slots:
    void writeText();   
    void defineYVector();
    void defineXVector();
    void defineBaseVector();
    void defineMarker();
    void defineEraser();
    void loadConfiguration();
    void saveConfiguration();
    void moveToBaseVector();
    void moveToXVector();
    void moveToYVector();    
    void cleanBoard();
    void resetRobot();
    void abortTransmission();
    void goHome();
    void speedChanged(int);
    void selectScheduleDirectory();
    void scheduleDirectoryLineEditFinished();
};

#endif // MAINGUI_H

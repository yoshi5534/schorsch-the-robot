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

protected:
    void changeEvent(QEvent *e);

private:
    Ui::mainGUI *ui;
    Robot *robot;
    QTimer automaticTimer;
    QString loadFileContent(QString currentFilePathss);
    QString automaticFindAndSelectNextFileWhichShouldBePrinted(QTime currentTime);
    bool robotIsAtHomePossition(float64 allowedDelta);
    QTime automaticLastFilePrinted;

public slots:
    void writeText();
    void writeText(QString content);
    void cleanBoard();
    void cleanBoard(QString content);
    void defineYVector();
    void defineXVector();
    void defineBaseVector();
    void defineMarker();
    void defineEraserBegin();
    void defineEraserEnd();
    void loadConfiguration();
    void saveConfiguration();
    void moveToBaseVector();
    void moveToXVector();
    void moveToYVector();
    void resetRobot();
    void abortTransmission();
    void goHome();
    void speedChanged(int);
    void selectScheduleDirectory();
    void scheduleDirectoryLineEditFinished();
    void automaticStart();
    void automaticStop();
    void automaticTimerElapsed();
    void automaticGroupToggled(bool checked);
    void manualGroupToggled(bool checked);
    void manualLoadTextClicked();
};

#endif // MAINGUI_H

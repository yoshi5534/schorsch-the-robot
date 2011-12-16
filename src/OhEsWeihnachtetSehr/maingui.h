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
    void loadConfiguration();
    void saveConfiguration();
    void abortTransmission();

    void yesClicked();
    void noClicked();
    void toolWeakClicked();
    void toolStrongClicked();
    void lookToDoorClicked();
    void attackClicked();
    void obeisanceClicked();

    
};

#endif // MAINGUI_H

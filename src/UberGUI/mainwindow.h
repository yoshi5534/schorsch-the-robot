#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "../Robot.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow//, public QWidget
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);
    void keyPressEvent(QKeyEvent *);

private:
    Ui::MainWindow *ui;
    //Robot mRobot;
};

#endif // MAINWINDOW_H

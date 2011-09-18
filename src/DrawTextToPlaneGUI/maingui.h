#ifndef MAINGUI_H
#define MAINGUI_H

#include <QMainWindow>

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

public slots:
    void writeText();


};

#endif // MAINGUI_H

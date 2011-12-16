#include <QtGui/QApplication>
#include "maingui.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainGUI w;
    w.show();
    return a.exec();
}

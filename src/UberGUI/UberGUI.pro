#-------------------------------------------------
#
# Project created by QtCreator 2011-06-24T19:04:51
#
#-------------------------------------------------

TARGET = UberGUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
LIBS += ../qextserialport/src/build/libqextserialportd.a
LIBS += ../RobotLib/libRobotLib.a

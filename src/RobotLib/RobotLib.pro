# -------------------------------------------------
# Project created by QtCreator 2011-06-30T21:59:43
# -------------------------------------------------
QT -= core \
    gui
TARGET = RobotLib
TEMPLATE = lib
CONFIG += staticlib
SOURCES += robotlib.cpp
HEADERS += Robot.h \
    Types.h \
    HelperMethods.h \
    Joint.h \
    RobotPort.h \
    Position.h \
    Keyboard.h
OTHER_FILES += libRobotLib.a

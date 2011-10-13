#-------------------------------------------------
#
# Project created by QtCreator 2011-06-16T20:27:56
#
#-------------------------------------------------

QT       -= core gui

TARGET = ConsoleTest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp
#LIBS += ../rs232/librs232.a
LIBS +=  ../qextserialport/src/build/libqextserialportd.a

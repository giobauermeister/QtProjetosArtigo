#-------------------------------------------------
#
# Project created by QtCreator 2015-10-13T15:50:48
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = screen2
TEMPLATE = app


SOURCES += main.cpp\
        screen2.cpp

HEADERS  += screen2.h

FORMS    += screen2.ui

# deployment on Linux
unix {
    target.path = /usr/bin/
    INSTALLS += target \
}

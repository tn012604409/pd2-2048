#-------------------------------------------------
#
# Project created by QtCreator 2015-05-24T12:03:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 2048
TEMPLATE = app


SOURCES += main.cpp\
    game.cpp \
    set.cpp

HEADERS  += \
    game.h \
    set.h

FORMS    += \
    game.ui

RESOURCES += \
    pic.qrc

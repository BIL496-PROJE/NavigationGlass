#-------------------------------------------------
#
# Project created by QtCreator 2017-03-19T09:50:06
#
#-------------------------------------------------
QT       += core gui
QT+= bluetooth
QT += positioning
QT += quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = B_t
TEMPLATE = app
SOURCES += main.cpp\
        mainwindow.cpp \
    secdialog.cpp \
    currentlocation.cpp
HEADERS  += mainwindow.h \
    secdialog.h \
    currentlocation.h
FORMS    += mainwindow.ui \
    secdialog.ui \
    currentlocation.ui

CONFIG += mobility
MOBILITY += location

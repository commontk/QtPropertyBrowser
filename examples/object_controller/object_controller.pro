TEMPLATE = app
DEPENDPATH += .
INCLUDEPATH += .
QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

include(../../src/qtpropertybrowser.pri)
# Input
HEADERS += objectcontroller.h
SOURCES += objectcontroller.cpp main.cpp

DESTDIR = $$QTPROPERTYBROWSER_BINDIR

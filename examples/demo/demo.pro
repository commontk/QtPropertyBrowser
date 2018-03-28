TEMPLATE = app
DEPENDPATH += .
INCLUDEPATH += .
QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

include(../../src/qtpropertybrowser.pri)
# Input
SOURCES += main.cpp
RESOURCES += demo.qrc

DESTDIR = $$QTPROPERTYBROWSER_BINDIR

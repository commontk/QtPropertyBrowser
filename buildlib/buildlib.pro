TEMPLATE=lib
CONFIG += qt dll qtpropertybrowser-buildlib
QT       += core
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
mac:CONFIG += absolute_library_soname
win32|mac:!wince*:!win32-msvc:!macx-xcode:CONFIG += debug_and_release build_all
include(../src/qtpropertybrowser.pri)
TARGET = $$QTPROPERTYBROWSER_LIBNAME
DESTDIR = $$QTPROPERTYBROWSER_LIBDIR
#win32 {
#    DLLDESTDIR = $$QTPROPERTYBROWSER_BINDIR
#    QMAKE_DISTCLEAN += $$QTPROPERTYBROWSER_BINDIR\\$$QTPROPERTYBROWSER_LIBNAME.dll
#}
target.path = $$DESTDIR
INSTALLS += target

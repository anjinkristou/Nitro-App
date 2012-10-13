#-------------------------------------------------
#
# Project created by QtCreator 2012-10-13T17:05:13
#
#-------------------------------------------------

QT       += core gui webkit network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Nitro-Qt
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    WebView.cpp

HEADERS  += MainWindow.h \
    WebView.h

FORMS    +=

RESOURCES += Nitro.qrc

RC_FILE = Nitro.rc

ICON = nitrotasks.icns

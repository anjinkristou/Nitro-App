
#  Copyright (C) 2012 Mehrez Kristou <mehrez@kristou.com>
#  All rights reserved.

#  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

#  Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
#  Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
#  Neither the name of Caffeinated Code nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
#  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


QT       += core gui webkit svg network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Nitro-App
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    WebView.cpp

HEADERS  += MainWindow.h \
    WebView.h

QMAKE_CXXFLAGS += -static-libgcc -static-libstdc++

QMAKE_LFLAGS += -static-libgcc -static-libstdc++

RESOURCES += Nitro.qrc

RC_FILE = Nitro.rc

ICON = nitrotasks.icns

mac:QMAKE_POST_LINK += macdeployqt $${TARGET}.app

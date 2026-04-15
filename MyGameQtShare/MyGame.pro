QT += widgets
CONFIG += c++17

SOURCES += src/main.cpp \
           src/player.cpp \
           src/gamewindow.cpp

HEADERS += include/player.h \
           include/gamewindow.h

INCLUDEPATH += include/

TARGET = MyGameQt
TEMPLATE = app

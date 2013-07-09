#-------------------------------------------------
#
# Project created by QtCreator 2013-05-12T22:25:32
#
#-------------------------------------------------

QT       += core gui network sql

TARGET = ServPBX
TEMPLATE = app


SOURCES += main.cpp\
        server.cpp \
    userinfo.cpp \
    action.cpp \
    getmessagefrom.cpp

HEADERS  += server.h \
    userinfo.h \
    action.h \
    getmessagefrom.h

FORMS    += server.ui

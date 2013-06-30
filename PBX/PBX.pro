#-------------------------------------------------
#
# Project created by QtCreator 2013-05-12T15:39:42
#
#-------------------------------------------------

QT       += core gui network sql
3CONFIG += ordered release
TARGET = PBX
TEMPLATE = app


SOURCES += main.cpp\
        phonewindow.cpp \
    connection.cpp \
    userinfo.cpp \
    action.cpp \
    authorization.cpp \
    inoutcall.cpp

HEADERS  += phonewindow.h \
    connection.h \
    userinfo.h \
    action.h \
    authorization.h \
    inoutcall.h

FORMS    += phonewindow.ui \
    authorization.ui \
    inoutcall.ui

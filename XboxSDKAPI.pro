#-------------------------------------------------
#
# Project created by QtCreator 2012-06-28T19:41:27
#
#-------------------------------------------------

QT       += core gui network

TARGET = XboxSDKAPI
TEMPLATE = app

SOURCES     += main.cpp\
                xboxsdk.cpp

HEADERS     += xboxsdk.h

FORMS       += xboxsdk.ui

INCLUDEPATH += c:/qjson/include

LIBS        += -Lc:/qjson/lib -lqjson

RC_FILE     = xboxsdk.rc

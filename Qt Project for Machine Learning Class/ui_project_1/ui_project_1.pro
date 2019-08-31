#-------------------------------------------------
#
# Project created by QtCreator 2017-01-08T16:38:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ui_project_1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    input_read.cpp \
    my_Centroid_Neural_Network.cpp \
    my_data.cpp \
    weight_setting.cpp \
    save.cpp \
    lord.cpp

HEADERS  += mainwindow.h \
    input_read.h \
    my_Centroid_Neural_Network.hpp \
    my_data.hpp \
    weight_setting.h \
    save.h \
    lord.h

FORMS    += mainwindow.ui \
    input_read.ui \
    weight_setting.ui \
    save.ui \
    lord.ui

RESOURCES += \
    icon.qrc

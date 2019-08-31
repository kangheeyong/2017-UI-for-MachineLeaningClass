#-------------------------------------------------
#
# Project created by QtCreator 2017-01-15T18:09:06
#
#-------------------------------------------------

QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UI_Project_2
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
    enter.cpp \
    input.cpp \
    my_Centroid_Neural_Network.cpp \
    my_data.cpp \
    cnn_settiing.cpp \
    save.cpp \
    lord.cpp \
    my_Self_Organizing_Map.cpp \
    som_setting.cpp \
    my_K_Means.cpp \
    k_means_setting.cpp \
    my_Back_Propagtion.cpp \
    bp_setting.cpp

HEADERS  += mainwindow.h \
    enter.h \
    input.h \
    my_Centroid_Neural_Network.hpp \
    my_data.hpp \
    cnn_settiing.h \
    save.h \
    lord.h \
    my_Self_Organizing_Map.hpp \
    som_setting.h \
    my_K_Means.hpp \
    k_means_setting.h \
    my_Back_Propagtion.hpp \
    bp_setting.h

FORMS    += mainwindow.ui \
    enter.ui \
    input.ui \
    cnn_settiing.ui \
    save.ui \
    lord.ui \
    som_setting.ui \
    k_means_setting.ui \
    bp_setting.ui

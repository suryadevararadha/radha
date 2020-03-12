CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(class1plugin)
TEMPLATE    = lib

HEADERS     = class1plugin.h \
    component1.h
SOURCES     = class1plugin.cpp \
    component1.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(class1.pri)

FORMS += \
    component1.ui

QT += network

CONFIG += staticlib

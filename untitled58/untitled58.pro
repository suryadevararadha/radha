CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(class4plugin)
TEMPLATE    = lib

HEADERS     = class4plugin.h
SOURCES     = class4plugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(class4.pri)

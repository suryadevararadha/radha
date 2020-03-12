CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(customwizard1plugin)
TEMPLATE    = lib

HEADERS     = customwizard1plugin.h
SOURCES     = customwizard1plugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(customwizard1.pri)

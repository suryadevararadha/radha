CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(customwidget2plugin)
TEMPLATE    = lib

HEADERS     = customwidget2plugin.h
SOURCES     = customwidget2plugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(customwidget2.pri)

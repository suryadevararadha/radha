CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(mycomponentplugin)
TEMPLATE    = lib

HEADERS     = mycomponentplugin.h
SOURCES     = mycomponentplugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. -lmycomponent

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target



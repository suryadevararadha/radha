#include "mainwindow.h"
#include "mainwindowplugin.h"

#include <QtPlugin>

mainwindowPlugin::mainwindowPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void mainwindowPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool mainwindowPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *mainwindowPlugin::createWidget(QWidget *parent)
{
    return new mainwindow(parent);
}

QString mainwindowPlugin::name() const
{
    return QLatin1String("mainwindow");
}

QString mainwindowPlugin::group() const
{
    return QLatin1String("");
}

QIcon mainwindowPlugin::icon() const
{
    return QIcon();
}

QString mainwindowPlugin::toolTip() const
{
    return QLatin1String("");
}

QString mainwindowPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool mainwindowPlugin::isContainer() const
{
    return false;
}

QString mainwindowPlugin::domXml() const
{
    return QLatin1String("<widget class=\"mainwindow\" name=\"mainwindow\">\n</widget>\n");
}

QString mainwindowPlugin::includeFile() const
{
    return QLatin1String("mainwindow.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(mainwindowplugin, mainwindowPlugin)
#endif // QT_VERSION < 0x050000

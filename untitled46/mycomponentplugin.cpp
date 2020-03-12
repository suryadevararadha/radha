#include "mycomponent.h"
#include "mycomponentplugin.h"

#include <QtPlugin>

mycomponentPlugin::mycomponentPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void mycomponentPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool mycomponentPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *mycomponentPlugin::createWidget(QWidget *parent)
{
    return new mycomponent(parent);
}

QString mycomponentPlugin::name() const
{
    return QLatin1String("mycomponent");
}

QString mycomponentPlugin::group() const
{
    return QLatin1String("");
}

QIcon mycomponentPlugin::icon() const
{
    return QIcon();
}

QString mycomponentPlugin::toolTip() const
{
    return QLatin1String("");
}

QString mycomponentPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool mycomponentPlugin::isContainer() const
{
    return false;
}

QString mycomponentPlugin::domXml() const
{
    return QLatin1String("<widget class=\"mycomponent\" name=\"mycomponent\">\n</widget>\n");
}

QString mycomponentPlugin::includeFile() const
{
    return QLatin1String("mycomponent.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(mycomponentplugin, mycomponentPlugin)
#endif // QT_VERSION < 0x050000

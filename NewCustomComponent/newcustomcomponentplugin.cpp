#include "newcustomcomponent.h"
#include "newcustomcomponentplugin.h"

#include <QtPlugin>

NewCustomComponentPlugin::NewCustomComponentPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void NewCustomComponentPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool NewCustomComponentPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *NewCustomComponentPlugin::createWidget(QWidget *parent)
{
    return new NewCustomComponent(parent);
}

QString NewCustomComponentPlugin::name() const
{
    return QLatin1String("NewCustomComponent");
}

QString NewCustomComponentPlugin::group() const
{
    return QLatin1String("");
}

QIcon NewCustomComponentPlugin::icon() const
{
    return QIcon();
}

QString NewCustomComponentPlugin::toolTip() const
{
    return QLatin1String("");
}

QString NewCustomComponentPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool NewCustomComponentPlugin::isContainer() const
{
    return false;
}

QString NewCustomComponentPlugin::domXml() const
{
    return QLatin1String("<widget class=\"NewCustomComponent\" name=\"newCustomComponent\">\n</widget>\n");
}

QString NewCustomComponentPlugin::includeFile() const
{
    return QLatin1String("newcustomcomponent.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(newcustomcomponentplugin, NewCustomComponentPlugin)
#endif // QT_VERSION < 0x050000

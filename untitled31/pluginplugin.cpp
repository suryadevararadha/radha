#include "plugin.h"
#include "pluginplugin.h"

#include <QtPlugin>

PluginPlugin::PluginPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void PluginPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool PluginPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *PluginPlugin::createWidget(QWidget *parent)
{
    return new Plugin(parent);
}

QString PluginPlugin::name() const
{
    return QLatin1String("Plugin");
}

QString PluginPlugin::group() const
{
    return QLatin1String("");
}

QIcon PluginPlugin::icon() const
{
    return QIcon();
}

QString PluginPlugin::toolTip() const
{
    return QLatin1String("");
}

QString PluginPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool PluginPlugin::isContainer() const
{
    return false;
}

QString PluginPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Plugin\" name=\"plugin\">\n</widget>\n");
}

QString PluginPlugin::includeFile() const
{
    return QLatin1String("plugin.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(pluginplugin, PluginPlugin)
#endif // QT_VERSION < 0x050000

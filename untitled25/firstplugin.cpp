#include "first.h"
#include "firstplugin.h"

#include <QtPlugin>

FirstPlugin::FirstPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void FirstPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool FirstPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *FirstPlugin::createWidget(QWidget *parent)
{
    return new First(parent);
}

QString FirstPlugin::name() const
{
    return QLatin1String("First");
}

QString FirstPlugin::group() const
{
    return QLatin1String("");
}

QIcon FirstPlugin::icon() const
{
    return QIcon();
}

QString FirstPlugin::toolTip() const
{
    return QLatin1String("");
}

QString FirstPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool FirstPlugin::isContainer() const
{
    return false;
}

QString FirstPlugin::domXml() const
{
    return QLatin1String("<widget class=\"First\" name=\"first\">\n</widget>\n");
}

QString FirstPlugin::includeFile() const
{
    return QLatin1String("first.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(firstplugin, FirstPlugin)
#endif // QT_VERSION < 0x050000

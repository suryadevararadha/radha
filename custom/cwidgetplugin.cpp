#include "cwidget.h"
#include "cwidgetplugin.h"

#include <QtPlugin>

cwidgetPlugin::cwidgetPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void cwidgetPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool cwidgetPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *cwidgetPlugin::createWidget(QWidget *parent)
{
    return new cwidget(parent);
}

QString cwidgetPlugin::name() const
{
    return QLatin1String("cwidget");
}

QString cwidgetPlugin::group() const
{
    return QLatin1String("");
}

QIcon cwidgetPlugin::icon() const
{
    return QIcon();
}

QString cwidgetPlugin::toolTip() const
{
    return QLatin1String("");
}

QString cwidgetPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool cwidgetPlugin::isContainer() const
{
    return false;
}

QString cwidgetPlugin::domXml() const
{
    return QLatin1String("<widget class=\"cwidget\" name=\"cwidget\">\n</widget>\n");
}

QString cwidgetPlugin::includeFile() const
{
    return QLatin1String("cwidget.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(cwidgetplugin, cwidgetPlugin)
#endif // QT_VERSION < 0x050000

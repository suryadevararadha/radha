#include "car.h"
#include "carplugin.h"

#include <QtPlugin>

CarPlugin::CarPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void CarPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool CarPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *CarPlugin::createWidget(QWidget *parent)
{
    return new Car(parent);
}

QString CarPlugin::name() const
{
    return QLatin1String("Car");
}

QString CarPlugin::group() const
{
    return QLatin1String("");
}

QIcon CarPlugin::icon() const
{
    return QIcon();
}

QString CarPlugin::toolTip() const
{
    return QLatin1String("");
}

QString CarPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool CarPlugin::isContainer() const
{
    return false;
}

QString CarPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Car\" name=\"car\">\n</widget>\n");
}

QString CarPlugin::includeFile() const
{
    return QLatin1String("car.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(carplugin, CarPlugin)
#endif // QT_VERSION < 0x050000

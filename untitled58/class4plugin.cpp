#include "class4.h"
#include "class4plugin.h"

#include <QtPlugin>

Class4Plugin::Class4Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Class4Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool Class4Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Class4Plugin::createWidget(QWidget *parent)
{
    return new Class4(parent);
}

QString Class4Plugin::name() const
{
    return QLatin1String("Class4");
}

QString Class4Plugin::group() const
{
    return QLatin1String("");
}

QIcon Class4Plugin::icon() const
{
    return QIcon();
}

QString Class4Plugin::toolTip() const
{
    return QLatin1String("");
}

QString Class4Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool Class4Plugin::isContainer() const
{
    return false;
}

QString Class4Plugin::domXml() const
{
    return QLatin1String("<widget class=\"Class4\" name=\"class4\">\n</widget>\n");
}

QString Class4Plugin::includeFile() const
{
    return QLatin1String("class4.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(class4plugin, Class4Plugin)
#endif // QT_VERSION < 0x050000

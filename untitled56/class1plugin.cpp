#include "class1.h"
#include "class1plugin.h"

#include <QtPlugin>

Class1Plugin::Class1Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Class1Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool Class1Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Class1Plugin::createWidget(QWidget *parent)
{
    return new Class1(parent);
}

QString Class1Plugin::name() const
{
    return QLatin1String("Class1");
}

QString Class1Plugin::group() const
{
    return QLatin1String("");
}

QIcon Class1Plugin::icon() const
{
    return QIcon();
}

QString Class1Plugin::toolTip() const
{
    return QLatin1String("");
}

QString Class1Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool Class1Plugin::isContainer() const
{
    return false;
}

QString Class1Plugin::domXml() const
{
    return QLatin1String("<widget class=\"Class1\" name=\"class1\">\n</widget>\n");
}

QString Class1Plugin::includeFile() const
{
    return QLatin1String("class1.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(class1plugin, Class1Plugin)
#endif // QT_VERSION < 0x050000

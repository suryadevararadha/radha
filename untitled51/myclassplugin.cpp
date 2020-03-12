#include "myclass.h"
#include "myclassplugin.h"

#include <QtPlugin>

MyClassPlugin::MyClassPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void MyClassPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool MyClassPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *MyClassPlugin::createWidget(QWidget *parent)
{
    return new MyClass(parent);
}

QString MyClassPlugin::name() const
{
    return QLatin1String("MyClass");
}

QString MyClassPlugin::group() const
{
    return QLatin1String("");
}

QIcon MyClassPlugin::icon() const
{
    return QIcon();
}

QString MyClassPlugin::toolTip() const
{
    return QLatin1String("");
}

QString MyClassPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool MyClassPlugin::isContainer() const
{
    return false;
}

QString MyClassPlugin::domXml() const
{
    return QLatin1String("<widget class=\"MyClass\" name=\"myClass\">\n</widget>\n");
}

QString MyClassPlugin::includeFile() const
{
    return QLatin1String("myclass.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(myclassplugin, MyClassPlugin)
#endif // QT_VERSION < 0x050000

#include "custommodule.h"
#include "custommoduleplugin.h"

#include <QtPlugin>

CustomModulePlugin::CustomModulePlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void CustomModulePlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool CustomModulePlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *CustomModulePlugin::createWidget(QWidget *parent)
{
    return new CustomModule(parent);
}

QString CustomModulePlugin::name() const
{
    return QLatin1String("CustomModule");
}

QString CustomModulePlugin::group() const
{
    return QLatin1String("");
}

QIcon CustomModulePlugin::icon() const
{
    return QIcon();
}

QString CustomModulePlugin::toolTip() const
{
    return QLatin1String("");
}

QString CustomModulePlugin::whatsThis() const
{
    return QLatin1String("");
}

bool CustomModulePlugin::isContainer() const
{
    return false;
}

QString CustomModulePlugin::domXml() const
{
    return QLatin1String("<widget class=\"CustomModule\" name=\"customModule\">\n</widget>\n");
}

QString CustomModulePlugin::includeFile() const
{
    return QLatin1String("custommodule.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(custommoduleplugin, CustomModulePlugin)
#endif // QT_VERSION < 0x050000

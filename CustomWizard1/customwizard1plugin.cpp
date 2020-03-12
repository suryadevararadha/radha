#include "customwizard1.h"
#include "customwizard1plugin.h"

#include <QtPlugin>

CustomWizard1Plugin::CustomWizard1Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void CustomWizard1Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool CustomWizard1Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *CustomWizard1Plugin::createWidget(QWidget *parent)
{
    return new CustomWizard1(parent);
}

QString CustomWizard1Plugin::name() const
{
    return QLatin1String("CustomWizard1");
}

QString CustomWizard1Plugin::group() const
{
    return QLatin1String("");
}

QIcon CustomWizard1Plugin::icon() const
{
    return QIcon();
}

QString CustomWizard1Plugin::toolTip() const
{
    return QLatin1String("");
}

QString CustomWizard1Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool CustomWizard1Plugin::isContainer() const
{
    return false;
}

QString CustomWizard1Plugin::domXml() const
{
    return QLatin1String("<widget class=\"CustomWizard1\" name=\"customWizard1\">\n</widget>\n");
}

QString CustomWizard1Plugin::includeFile() const
{
    return QLatin1String("customwizard1.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(customwizard1plugin, CustomWizard1Plugin)
#endif // QT_VERSION < 0x050000

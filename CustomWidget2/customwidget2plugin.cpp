#include "customwidget2.h"
#include "customwidget2plugin.h"

#include <QtPlugin>

CustomWidget2Plugin::CustomWidget2Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void CustomWidget2Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool CustomWidget2Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *CustomWidget2Plugin::createWidget(QWidget *parent)
{
    return new CustomWidget2(parent);
}

QString CustomWidget2Plugin::name() const
{
    return QLatin1String("CustomWidget2");
}

QString CustomWidget2Plugin::group() const
{
    return QLatin1String("");
}

QIcon CustomWidget2Plugin::icon() const
{
    return QIcon();
}

QString CustomWidget2Plugin::toolTip() const
{
    return QLatin1String("");
}

QString CustomWidget2Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool CustomWidget2Plugin::isContainer() const
{
    return false;
}

QString CustomWidget2Plugin::domXml() const
{
    return QLatin1String("<widget class=\"CustomWidget2\" name=\"customWidget2\">\n</widget>\n");
}

QString CustomWidget2Plugin::includeFile() const
{
    return QLatin1String("customwidget2.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(customwidget2plugin, CustomWidget2Plugin)
#endif // QT_VERSION < 0x050000

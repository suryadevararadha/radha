#include "patient.h"
#include "patientplugin.h"

#include <QtPlugin>

PatientPlugin::PatientPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void PatientPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool PatientPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *PatientPlugin::createWidget(QWidget *parent)
{
    return new Patient(parent);
}

QString PatientPlugin::name() const
{
    return QLatin1String("Patient");
}

QString PatientPlugin::group() const
{
    return QLatin1String("");
}

QIcon PatientPlugin::icon() const
{
    return QIcon();
}

QString PatientPlugin::toolTip() const
{
    return QLatin1String("");
}

QString PatientPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool PatientPlugin::isContainer() const
{
    return false;
}

QString PatientPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Patient\" name=\"patient\">\n</widget>\n");
}

QString PatientPlugin::includeFile() const
{
    return QLatin1String("patient.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(patientplugin, PatientPlugin)
#endif // QT_VERSION < 0x050000

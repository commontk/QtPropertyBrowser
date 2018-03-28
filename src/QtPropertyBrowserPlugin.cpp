#include "QtPropertyBrowserPlugin.h"
#include "QtTreePropertyBrowser"

#include <QtPlugin>

QtPropertyBrowserPlugin::QtPropertyBrowserPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtPropertyBrowserPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool QtPropertyBrowserPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtPropertyBrowserPlugin::createWidget(QWidget *parent)
{
    return new QtTreePropertyBrowser(parent);
}

QString QtPropertyBrowserPlugin::name() const
{
    return QLatin1String("QtTreePropertyBrowser");
}

QString QtPropertyBrowserPlugin::group() const
{
    return QLatin1String("");
}

QIcon QtPropertyBrowserPlugin::icon() const
{
    return QIcon();
}

QString QtPropertyBrowserPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtPropertyBrowserPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtPropertyBrowserPlugin::isContainer() const
{
    return false;
}

QString QtPropertyBrowserPlugin::domXml() const
{
    return QLatin1String("<widget class=\"QtTreePropertyBrowser\" name=\"qTreePropertyBrowser\">\n</widget>\n");
}

QString QtPropertyBrowserPlugin::includeFile() const
{
    return QLatin1String("QtTreePropertyBrowser");
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(sjndsodskldplugin, SJNDSODSKLDPlugin)
#endif // QT_VERSION < 0x050000


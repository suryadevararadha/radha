#ifndef UNTITLED41_PLUGIN_H
#define UNTITLED41_PLUGIN_H

#include <QQmlExtensionPlugin>

class Untitled41Plugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override;
};

#endif // UNTITLED41_PLUGIN_H

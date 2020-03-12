#include "untitled41_plugin.h"
#include "myitem.h"

#include <qqml.h>

void Untitled41Plugin::registerTypes(const char *uri)
{
    // @uri com.mycompany.qmlcomponents
    qmlRegisterType<MyItem>(uri, 1, 0, "MyItem");
}


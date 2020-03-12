#ifndef PLUGIN_H
#define PLUGIN_H

#include <QWidget>

class Plugin : public QWidget
{
    Q_OBJECT

public:
    Plugin(QWidget *parent = 0);
};

#endif // PLUGIN_H

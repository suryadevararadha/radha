#ifndef CLASS1_H
#define CLASS1_H
#include "component1.h"

#include <QWidget>

class Class1 : public QWidget
{
    Q_OBJECT

public:
    Class1(QWidget *parent = 0);
public:
    Component1 *comp;
};

#endif // CLASS1_H

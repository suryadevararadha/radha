#ifndef MYCLASS_H
#define MYCLASS_H

#include <QWidget>

class MyClass : public QWidget
{
    Q_OBJECT

public:
    MyClass(QWidget *parent = 0);
};

#endif // MYCLASS_H

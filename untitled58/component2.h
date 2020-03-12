#ifndef COMPONENT2_H
#define COMPONENT2_H

#include <QMainWindow>

namespace Ui {
class Component2;
}

class Component2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Component2(QWidget *parent = nullptr);
    ~Component2();

private:
    Ui::Component2 *ui;
};

#endif // COMPONENT2_H

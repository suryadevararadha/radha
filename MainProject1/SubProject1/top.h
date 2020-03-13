#ifndef TOP_H
#define TOP_H

#include <QMainWindow>

namespace Ui {
class Top;
}

class Top : public QMainWindow
{
    Q_OBJECT

public:
    explicit Top(QWidget *parent = nullptr);
    ~Top();

private:
    Ui::Top *ui;
};

#endif // TOP_H

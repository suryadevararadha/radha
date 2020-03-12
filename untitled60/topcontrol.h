#ifndef TOPCONTROL_H
#define TOPCONTROL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TopControl; }
QT_END_NAMESPACE

class TopControl : public QMainWindow
{
    Q_OBJECT

public:
    TopControl(QWidget *parent = nullptr);
    ~TopControl();

private:
    Ui::TopControl *ui;
};
#endif // TOPCONTROL_H

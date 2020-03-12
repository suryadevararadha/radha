#ifndef INTEGRATION_H
#define INTEGRATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class integration; }
QT_END_NAMESPACE

class integration : public QMainWindow
{
    Q_OBJECT

public:
    integration(QWidget *parent = nullptr);
    ~integration();

private:
    Ui::integration *ui;
};
#endif // INTEGRATION_H

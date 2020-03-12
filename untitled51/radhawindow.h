#ifndef RADHAWINDOW_H
#define RADHAWINDOW_H

#include <QMainWindow>

namespace Ui {
class RadhaWindow;
}

class RadhaWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RadhaWindow(QWidget *parent = nullptr);
    ~RadhaWindow();

private:
    Ui::RadhaWindow *ui;
};

#endif // RADHAWINDOW_H

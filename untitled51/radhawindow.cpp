#include "radhawindow.h"
#include "ui_radhawindow.h"

RadhaWindow::RadhaWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RadhaWindow)
{
    ui->setupUi(this);
}

RadhaWindow::~RadhaWindow()
{
    delete ui;
}

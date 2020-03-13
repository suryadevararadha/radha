#include "top.h"
#include "ui_top.h"

Top::Top(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Top)
{
    ui->setupUi(this);
}

Top::~Top()
{
    delete ui;
}

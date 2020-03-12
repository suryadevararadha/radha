#include "component2.h"
#include "ui_component2.h"

Component2::Component2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Component2)
{
    ui->setupUi(this);
}

Component2::~Component2()
{
    delete ui;
}

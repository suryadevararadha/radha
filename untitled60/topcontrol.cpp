#include "topcontrol.h"
#include "ui_topcontrol.h"

TopControl::TopControl(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TopControl)
{
    ui->setupUi(this);
}

TopControl::~TopControl()
{
    delete ui;
}


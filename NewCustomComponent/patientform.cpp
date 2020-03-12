#include "patientform.h"
#include "ui_patientform.h"

PatientForm::PatientForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PatientForm)
{
    ui->setupUi(this);
}

PatientForm::~PatientForm()
{
    delete ui;
}

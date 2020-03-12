#ifndef PATIENTFORM_H
#define PATIENTFORM_H

#include <QMainWindow>

namespace Ui {
class PatientForm;
}

class PatientForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit PatientForm(QWidget *parent = nullptr);
    ~PatientForm();

private:
    Ui::PatientForm *ui;
};

#endif // PATIENTFORM_H

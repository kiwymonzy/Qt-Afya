#ifndef DOCTOR_H
#define DOCTOR_H

#include <QMainWindow>
#include "headers.h"
#include "login.h"


namespace Ui {
class Doctor;
}

class Doctor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Doctor(QWidget *parent = nullptr);
    ~Doctor();

signals:
 void myDoctor();

public:
    void on_exit_clicked();
    void loadPatient();
    void submit_doctor();
    void showTime_doc();


private slots:
    void on_pushButton_cancel_clicked();
    void on_pushButton_submit_clicked();
    void on_comboBox_loadpatient_currentIndexChanged(const QString &arg1);

private:
    Ui::Doctor *ui;
};

#endif // DOCTOR_H

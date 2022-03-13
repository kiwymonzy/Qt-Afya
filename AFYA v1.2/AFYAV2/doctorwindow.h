#ifndef DOCTORWINDOW_H
#define DOCTORWINDOW_H

#include <QMainWindow>
#include "header.h"

namespace Ui {
class DoctorWindow;
}

class DoctorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DoctorWindow(QWidget *parent = nullptr);
    ~DoctorWindow();

private slots:
    void on_closeButton_clicked();

    void on_btnHome_clicked();

    void on_btnClerkSheet_clicked();

    void on_btnDiagnosis_clicked();

    void on_btnInvestigation_clicked();

    void on_btnComfirmed_clicked();

    void on_btnManagement_clicked();

private:
    Ui::DoctorWindow *ui;
};

#endif // DOCTORWINDOW_H

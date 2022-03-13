#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "header.h"
#include "receptionwindow.h"
#include "doctorwindow.h"
#include "nursingwindow.h"
#include "billingwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

public:
    void login();

private slots:
    void on_closeButton_clicked();

    void on_btnLogin_clicked();

private:
    Ui::LoginWindow *ui;
    ReceptionWindow *receptionwindow;
    BillingWindow *billingwindow;
    NursingWindow *nursingwindow;
    DoctorWindow *doctorwindow;

};
#endif // LOGINWINDOW_H

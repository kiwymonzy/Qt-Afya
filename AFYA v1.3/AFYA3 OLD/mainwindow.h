#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "header.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    void login();

private slots:
    void on_pushButton_patient_clicked();

    void on_pushButton_outsiders_clicked();

    void on_pushButton_report_clicked();

    void on_pushButton_billing_clicked();

    void on_pushButton_cancel_clicked();

    void on_pushButton_newvisit_clicked();

    void on_pushButton_revisit_clicked();

    void on_pushButton_editDetails_clicked();

    void on_btnLogin_clicked();

    void on_pushButton_closeReceiption_clicked();

    void on_pushButton_closeDoctor_clicked();

    void on_pushButton_closeNurse_clicked();

    void on_pushButton_closeBilling_clicked();

    void on_pushButton_close_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

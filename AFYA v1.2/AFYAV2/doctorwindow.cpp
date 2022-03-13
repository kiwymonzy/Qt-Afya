#include "doctorwindow.h"
#include "ui_doctorwindow.h"

DoctorWindow::DoctorWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DoctorWindow)
{
    ui->setupUi(this);
}

DoctorWindow::~DoctorWindow()
{
    delete ui;
}

void DoctorWindow::on_closeButton_clicked()
{
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Exit the system?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes)
        this->hide();
}


void DoctorWindow::on_btnHome_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void DoctorWindow::on_btnClerkSheet_clicked()
{
   ui->stackedWidget->setCurrentIndex(1);
}


void DoctorWindow::on_btnDiagnosis_clicked()
{
   ui->stackedWidget->setCurrentIndex(2);
}


void DoctorWindow::on_btnInvestigation_clicked()
{
   ui->stackedWidget->setCurrentIndex(3);
}


void DoctorWindow::on_btnComfirmed_clicked()
{
   ui->stackedWidget->setCurrentIndex(4);
}


void DoctorWindow::on_btnManagement_clicked()
{
   ui->stackedWidget->setCurrentIndex(5);
}


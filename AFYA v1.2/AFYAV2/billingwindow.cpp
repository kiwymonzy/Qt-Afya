#include "billingwindow.h"
#include "ui_billingwindow.h"

BillingWindow::BillingWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BillingWindow)
{
    ui->setupUi(this);
}

BillingWindow::~BillingWindow()
{
    delete ui;
}

void BillingWindow::on_btnOPD_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}


void BillingWindow::on_btnOutsider_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void BillingWindow::on_closeButton_clicked()
{
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Exit the system?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes)
        this->hide();
}


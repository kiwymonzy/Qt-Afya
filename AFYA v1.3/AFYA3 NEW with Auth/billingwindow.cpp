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

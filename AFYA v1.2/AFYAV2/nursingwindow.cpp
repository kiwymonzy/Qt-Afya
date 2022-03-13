#include "nursingwindow.h"
#include "ui_nursingwindow.h"

NursingWindow::NursingWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NursingWindow)
{
    ui->setupUi(this);
}

NursingWindow::~NursingWindow()
{
    delete ui;
}

void NursingWindow::on_btnHome_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void NursingWindow::on_btnList_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void NursingWindow::on_btnInventory_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void NursingWindow::on_closeButton_clicked()
{
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Exit the system?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes)
        this->hide();
}


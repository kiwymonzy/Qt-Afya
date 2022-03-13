#include "inpatient.h"
#include "ui_inpatient.h"

Inpatient::Inpatient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inpatient)
{
    ui->setupUi(this);
    this->setFixedSize(875,725);
    beddialog =new BedDialog(this);
}

Inpatient::~Inpatient()
{
    delete ui;
}

void Inpatient::on_pushButton_bed_clicked()
{
    beddialog->show();
}


void Inpatient::on_exit_clicked()
{
    Login conn;
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Exit the system?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes)
        this->hide();
}


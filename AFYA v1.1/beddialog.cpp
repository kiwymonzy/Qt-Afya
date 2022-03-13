#include "beddialog.h"
#include "ui_beddialog.h"

BedDialog::BedDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BedDialog)
{
    ui->setupUi(this);
}

BedDialog::~BedDialog()
{
    delete ui;
}

void BedDialog::on_exit_clicked()
{
    this->hide();
}


#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1050,674);
    receptionwindow=new ReceptionWindow(this);
    doctorwindow=new DoctorWindow(this);
    nursingwindow=new NursingWindow(this);
    billingwindow=new BillingWindow(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::login()
{
    Database conn;
    QString username,password,department;
    username=ui->username->text();
    password=ui->password->text();
    department=ui->comboBox_department->currentText();

            if(!conn.connOpen()){
        qDebug()<< "Failed to open the database";
        return;
            }

    QSqlQuery qry;
    if(qry.exec("select * from users where username='"+username+"' and password='"+password+"'"))
    {
        int count=0;
        while (qry.next())
        {
            count++;
        }

        if(count==1)
        {
            if(department=="Reception")
            {
                receptionwindow->show();
            }

            if(department=="Doctor")
            {
                doctorwindow->show();
            }

            if(department=="Nursing Station")
            {
                nursingwindow->show();
            }

            if(department=="Billing")
            {
                billingwindow->show();
            }

            ui->statusbar->showMessage("Username and Password is correct");
        }
        if(count>1)
            ui->statusbar->showMessage("Duplicated Username and Password");
        if(count<1)
            ui->statusbar->showMessage("Username and Password is not correct");
    }
}

void LoginWindow::on_btnLogin_clicked()
{
        login();
}


void LoginWindow::on_closeButton_clicked()
{
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Exit the system?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes)
        qApp->exit(0);
}


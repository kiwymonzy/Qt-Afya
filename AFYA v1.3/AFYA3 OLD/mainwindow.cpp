#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1000,750);
    ui->stackedWidget_windows->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
///LOGIN CODE
void MainWindow::login()
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
                    ui->stackedWidget_windows->setCurrentIndex(1);
                }

                if(department=="Doctor")
                {
                    ui->stackedWidget_windows->setCurrentIndex(2);
                }

                if(department=="Nursing Station")
                {
                    ui->stackedWidget_windows->setCurrentIndex(3);
                }

                if(department=="Billing")
                {
                    ui->stackedWidget_windows->setCurrentIndex(4);
                }

                ui->statusbar->showMessage("Username and Password is correct");
            }
            if(count>1)
                ui->statusbar->showMessage("Duplicated Username and Password");
            if(count<1)
                ui->statusbar->showMessage("Username and Password is not correct");
        }
}

void MainWindow::on_btnLogin_clicked()
{
    login();
}
///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
///TOP TABS BUTTONS
void MainWindow::on_pushButton_patient_clicked()
{
    ui->stackedWidget_reception_tabs->setCurrentIndex(0);
}


void MainWindow::on_pushButton_outsiders_clicked()
{
    ui->stackedWidget_reception_tabs->setCurrentIndex(1);
}


void MainWindow::on_pushButton_report_clicked()
{
    ui->stackedWidget_reception_tabs->setCurrentIndex(1);
}


void MainWindow::on_pushButton_billing_clicked()
{
    ui->stackedWidget_reception_tabs->setCurrentIndex(1);
}
///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
/// PATIENT TABS
void MainWindow::on_pushButton_newvisit_clicked()
{
    ui->stackedWidget_Patient_tabs->setCurrentIndex(0);
}


void MainWindow::on_pushButton_revisit_clicked()
{
    ui->stackedWidget_Patient_tabs->setCurrentIndex(1);
}


void MainWindow::on_pushButton_editDetails_clicked()
{
    ui->stackedWidget_Patient_tabs->setCurrentIndex(2);
}


void MainWindow::on_pushButton_cancel_clicked()
{
    ui->stackedWidget_Patient_tabs->setCurrentIndex(3);
}
#ifdef USE_EXIT_BUTTON_AVAILABLE
///////////////////////////////////////////////////////////////
EXIT BUTTONS
///////////////////////////////////////////////////////////////

#endif
void MainWindow::on_pushButton_closeReceiption_clicked()
{
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Do you want to exit this Page?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes){
    ui->stackedWidget_windows->setCurrentIndex(0);
    }
}


void MainWindow::on_pushButton_closeDoctor_clicked()
{
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Do you want to exit this Page?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes){
    ui->stackedWidget_windows->setCurrentIndex(0);
    }
}


void MainWindow::on_pushButton_closeNurse_clicked()
{
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Do you want to exit this Page?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes){
    ui->stackedWidget_windows->setCurrentIndex(0);
    }
}


void MainWindow::on_pushButton_closeBilling_clicked()
{
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Do you want to exit this Page?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes){
    ui->stackedWidget_windows->setCurrentIndex(0);
    }
}


void MainWindow::on_pushButton_close_clicked()
{
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Exit the system?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes)
        this->hide();
}
///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////

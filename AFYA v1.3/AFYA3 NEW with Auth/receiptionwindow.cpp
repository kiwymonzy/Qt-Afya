#include "receiptionwindow.h"
#include "ui_receiptionwindow.h"

ReceiptionWindow::ReceiptionWindow(int loginID, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReceiptionWindow)
{
    ui->setupUi(this);
    // Setting 'Dashboard' tab as the initial tab
   ui->stackedWidget_reception_tabs->setCurrentIndex(0);
   ui->stackedWidget_Patient_tabs->setCurrentIndex(0);

    // Creating an object of DatabaseConnection class
    trms_dbConnection = new DatabaseConnection();

    // Creating an object of AuthenticateLogic class
    auth = new AuthenticateLogic();

    // Creating an object of AccountLogic class
    account = new AccountLogic();
}

ReceiptionWindow::~ReceiptionWindow()
{
    delete ui;
}

void ReceiptionWindow::on_logout_pushButton_clicked()
{

    // Showing message box to the user to get the confirmation to logout
    int userLogoutResponse = QMessageBox::question(this, "LOGOUT CONFIRMATION",
                          "This action will logout you out, do you want to continue?"
                          , "Cancel", "Continue");

    if(userLogoutResponse == 1){
        /* Recording session end */
        QString sessionEndStatus = auth->addSessionEndToDB(account->getLoginID());

        if(sessionEndStatus == "Session End Recorded"){
            this->hide();

        }
        else if(sessionEndStatus == "SQL Execution Failed"){
            QMessageBox::critical(this, "LOGIN - SESSION END ERROR", "SQL query execution was unsuccessful, please submit a report including your email address.");
        }
        else if(sessionEndStatus == "Database Connectivity Failed"){
            QMessageBox::critical(this, "LOGIN - SESSION END ERROR", "Database Connection has lost, please submit a report.");
        }

    }

}


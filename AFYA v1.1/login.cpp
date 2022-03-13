#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login),
    qry(new QSqlQuery)
{
    ui->setupUi(this);
    //DATABASE
    QSqlDatabase myDB=QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName("/sqlite/hospital.db");

    /*
     * QMYSQL-MySQL
     * QOCI-Oracle(Oracle call Interface)
     * QODBC-ODBC (includes Microsoft SQL server)
     * QPSQL-PostgreSQL
     * QSQLITE-SQlite3
     * QTDS-Sybase Adaotive Server
    */
    if(!myDB.open())
        ui->databaseinfo->setText("Failed to connect");
    else
        ui->databaseinfo->setText("Database Connected");
}

Login::~Login()
{
    delete ui;
    delete qry;
}


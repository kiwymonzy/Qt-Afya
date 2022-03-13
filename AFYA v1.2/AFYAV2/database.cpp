#include "database.h"
#include "ui_database.h"

Database::Database(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Database)
{
    ui->setupUi(this);
   //DATABASE
   QSqlDatabase myDB=QSqlDatabase::addDatabase("QSQLITE");
   myDB.setDatabaseName("/sqlite/afyasync/AfyaSyncMain.db");

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

Database::~Database()
{
    delete ui;
}

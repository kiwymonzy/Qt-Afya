#ifndef DATABASE_H
#define DATABASE_H

#include <QDialog>
#include "header.h"

namespace Ui {
class Database;
}

class Database : public QDialog
{
    Q_OBJECT

public:
    explicit Database(QWidget *parent = nullptr);
    ~Database();
public:
    QSqlDatabase myDB;
    void connClose()
        {
            myDB.close();
            myDB.removeDatabase(QSqlDatabase::defaultConnection);
        }

    bool connOpen()
        {
        //DATABASE
       QSqlDatabase myDB=QSqlDatabase::addDatabase("QSQLITE");
       myDB.setDatabaseName("/sqlite/afyasync/AfyaSyncMain.db");


        if(!myDB.open()){
            //qDebug()<< ("Failed to connect");
            return false;
        }
        else{
            //qDebug()<< ("Database Connected");
            return true;
            }
        }
private:
    Ui::Database *ui;
};

#endif // DATABASE_H

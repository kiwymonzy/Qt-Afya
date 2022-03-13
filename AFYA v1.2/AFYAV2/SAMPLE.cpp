/*bool check_enterd_data(QString name, QString phone, QString date)
{
    if(name.isEmpty() || phone.isEmpty() || date.isEmpty()){
        QMessageBox::warning(this,
                                 "ERROR",
                                 "ENTER ALL REQUIRED INFO\n " ,
                                 QMessageBox::Ok);
        return false;
    }else if(phone.size() < 11 || phone.size() > 13 || name.size() < 6){
        QMessageBox::warning(this,
                                 "ERROR",
                                 "ENTER CORRECT INFO\n " ,
                                 QMessageBox::Ok);
        return false;
    }

    return true;
}

void on_listView_activated(const QModelIndex &index)
{
    QString val=ui->listView->model()->data(index).toString();


    Login conn;
            if(!conn.connOpen()){
        qDebug()<< "Failed to open the database";
        return;
    }

    conn.connOpen();// OPEN CONNECTION
    QSqlQuery qry;
    qry.prepare("select * from customer where firstname='"+val+"'");

         if(qry.exec())
    {
        while(qry.next())
        {
            ui->line_firstname->setText(qry.value(0).toString());
            ui->line_surname->setText(qry.value(1).toString());
            ui->line_mobileno->setText(qry.value(2).toString());
            ui->line_nationality->setText(qry.value(3).toString());
            ui->line_address->setText(qry.value(4).toString());
            ui->line_roomno->setText(qry.value(5).toString());




            ui->dateTimeEdit->setEnabled(false);
            ui->pushButton_update->setEnabled(true);
            ui->pushButton_checkin->setEnabled(false);

        }
    }
}

void updateDetails()
{
    //TABLE VIEW ROOMS
    Login conn;
    QSqlQueryModel *modal =new QSqlQueryModel;

    conn.connOpen();// OPEN CONNECTION
    QSqlQuery *qry=new QSqlQuery(conn.myDB);

    qry->prepare("select firstname from customer");
    qry->exec();
    modal->setQuery(*qry);
    ui->listView->setModel(modal);
    conn.connClose();// CLOSE CONNECTION
    qDebug() << (modal->rowCount());
}

void UpdateCustomer()
{
    Login conn;
    QString surname,firstname,nationality,mobileno,address,roomno,roomtype,datein,dateout;

    surname=ui->line_surname->text();
    firstname=ui->line_firstname->text();
    nationality=ui->line_nationality->text();
    mobileno=ui->line_mobileno->text();
    address=ui->line_address->text();
    roomno=ui->line_roomno->text();
    roomtype=ui->RoomcomboBox->currentText();

    conn.connOpen();// OPEN CONNECTION
    QSqlQuery roomavailable;
    roomavailable.prepare("select roomno from customer where roomno='"+roomno+"'");
    if(roomavailable.exec())
    {
        int count=0;
        while(roomavailable.next())
        {
            ++count;
        }
        if(count==1)
        {

            QMessageBox::critical(this,
                                  tr("Error!"),
                                  tr("ROOM NOT AVAILALE"));
            updateDetails();
            ui->line_roomno->clear();
        }
        if(count>1)
        {

            QMessageBox::critical(this,
                                  tr("Error!"),
                                  tr("ROOM NOT AVAILALE"));
            updateDetails();
            ui->line_roomno->clear();
        }
        if(count<1)
        {
            QSqlQuery roomn,roomUP;
            roomUP.prepare("update reportbook set firstname='"+firstname+"', surname='"+surname+"', mobileno='"+mobileno+"',nationality='"+nationality+"',address='"+address+"',changes='"+roomno+"',roomtype='"+roomtype+"' where firstname='"+firstname+"'");
            roomn.prepare("update customer set firstname='"+firstname+"', surname='"+surname+"', mobileno='"+mobileno+"',nationality='"+nationality+"',address='"+address+"',roomno='"+roomno+"',roomtype='"+roomtype+"' where firstname='"+firstname+"'");
            roomUP.exec();
            roomn.exec();
            QMessageBox::critical(this,
                                  tr("Success!"),
                                  tr("ROOM CHECKED-IN!"));
            ui->line_surname->clear();
            ui->line_firstname->clear();
            ui->line_nationality->clear();
            ui->line_mobileno->clear();
            ui->line_address->clear();
            ui->line_roomno->clear();
            ui->dateTimeEdit->update();
            updateDetails();
            ui->pushButton_checkin->setEnabled(true);
            ui->pushButton_update->setEnabled(false);
            conn.connClose();// CLOSE CONNECTION
        }
    }
    else
    {
        QMessageBox::critical(this,tr("error;;"),roomavailable.lastError().text());

    };
}


void MainWindow::showTime()
{
        QTime time=QTime::currentTime();
        QString time_text=time.toString(("HH : mm : ss"));
        ui->Digital_clock->setText(time_text);
        ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
        ui->dateTimeEdit2->setDateTime(QDateTime::currentDateTime());

}

void MainWindow::on_tableView_room_activated(const QModelIndex &index)
{
            QString val=ui->tableView_room->model()->data(index).toString();


            Login conn;
                    if(!conn.connOpen()){
                qDebug()<< "Failed to open the database";
                return;
            }

            conn.connOpen();// OPEN CONNECTION
            QSqlQuery qry;
            qry.prepare("select * from customer where roomno='"+val+"'");

                 if(qry.exec())
            {
                while(qry.next())
                {
                    ui->line_surname_2->setText(qry.value(1).toString());
                    ui->line_firstname_2->setText(qry.value(0).toString());
                    ui->line_roomno_2->setText(qry.value(5).toString());

                    //ui->pushButton_checkout->setEnabled(true);
                    //ui->pushButton_checkin->setEnabled(false);
                }
            }


}

# set application icons for win and macx
win32 {
    RC_FILE += win/app_icon.rc
}
macx {
    ICON = macx/app_icon.icns
}

*/


#include "laboratory.h"
#include "ui_laboratory.h"

Laboratory::Laboratory(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Laboratory)
{
    ui->setupUi(this);
    this->setFixedSize(875,725);
    //DATE UPDATE
    showTime();
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start();

    //CONNECT SLOT
    connect(this, SIGNAL(myLaboratory()), parent, SLOT(loadPatient()));

    //CONNECTION SIGNAL
    //connect(lab_registration, &Registration::myRegistration, this, &Laboratory::loadPatient);
    //connect(lab_doctor, &Doctor::myDoctor, this, &Laboratory::loadPatient);
    //connect(lab_inpatient, &Inpatient::myInpatient, this, &Laboratory::loadPatient);
    emit myLaboratory();
}

Laboratory::~Laboratory()
{
    delete ui;
}

void Laboratory::on_comboBox_loadpatient_currentIndexChanged(const QString &arg1)
{
    QString val=ui->comboBox_loadpatient->currentText();


    Login conn;
            if(!conn.connOpen()){
        //qDebug()<< "Failed to open the database";
        return;
    }

    conn.connOpen();// OPEN CONNECTION
    QSqlQuery insert;
    insert.prepare("select * from registration where firstname='"+val+"'");

         if(insert.exec())
    {
        while(insert.next())
        {
            ui->id->setText(insert.value(0).toString());
            ui->fullname->setText(insert.value(1).toString()+"***"+insert.value(2).toString()+"***"+insert.value(3).toString());
            ui->gender->setText(insert.value(5).toString());
            ui->age->setText(insert.value(6).toString());
            //ui->status->setText(insert.value(13).toString());
        }
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("error;;"),insert.lastError().text());
    }
}

void Laboratory::showTime()
{
        QTime time=QTime::currentTime();
        QString time_text=time.toString(("HH : mm : ss"));
        ui->digitaldate->setText(time_text);
}

void Laboratory::on_exit_clicked()
{
    Login conn;
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Exit the system?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes)
        this->hide();
}

void Laboratory::loadPatient()
{
    //TABLE VIEW REPORT
    Login conn;
    QSqlQueryModel *load=new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery *qry=new QSqlQuery(conn.myDB);

    qry->prepare("select firstname from registration where status='IN'");
    qry->exec();
    load->setQuery(*qry);
    ui->comboBox_loadpatient->setModel(load);
    //qDebug() << (modal->rowCount());
}

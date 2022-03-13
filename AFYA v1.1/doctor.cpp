#include "doctor.h"
#include "ui_doctor.h"

Doctor::Doctor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Doctor)
{
    ui->setupUi(this);
    this->setFixedSize(875,675);

    //LOAD PATIENT
    loadPatient();


    //DATE UPDATE
    showTime_doc();
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showTime_doc()));
    timer->start();

    //CONNECT SLOT
    connect(this, SIGNAL(myDoctor()), parent, SLOT(loadPatient()));

    //CONNECTION SIGNAL
    //connect(doc_registration, &Registration::myRegistration, this, &Doctor::loadPatient);
    //connect(doc_laboratory, &Laboratory::myLaboratory, this, &Doctor::loadPatient);
    //connect(doc_inpatient, &Inpatient::myInpatient, this, &Doctor::loadPatient);
    emit myDoctor();

}

Doctor::~Doctor()
{
    delete ui;
}

void Doctor::on_pushButton_cancel_clicked()
{
    QPixmap code(":/img/img/registration/images/qrcode.png");
   ui->qr->setPixmap(code);
}

void Doctor::on_pushButton_submit_clicked()
{
    Login conn;
    QString ask,pharmacy,firstname,middlename,surname,gender,age,assigndoctor,status,opdate;
    QTime time=QTime::currentTime();
    QString patientname= firstname+" "+middlename+" "+surname;


    opdate=time.toString(("HH : mm : ss"));
    //ask= ui->line_ask->text();
    //pharmacy= ui->line_pharmacy->text();
    firstname=ui->firstname->text();
    middlename=ui->middlename->text();
    surname=ui->surname->text();
    gender=ui->gender->text();
    age=ui->age->text();
    //assigndoctor=ui->doctorname->setText("Kiwy Monzy");
    //status=ui->status->setText("IN");



    //conn.connOpen();// OPEN CONNECTION
    QSqlQuery patientIN;
    patientIN.prepare("insert into todoctor(patientname,gender,age,opdate,assigndoctor,ask,pharmacy,status) "
                      "values ('"+patientname+"','"+gender+"','"+age+"','"+opdate+"','"+assigndoctor+"','"+ask+"','"+pharmacy+"','"+status+"',)");
         if(patientIN.exec())
         {
            ui->statusbar->showMessage("Succesfully Sent to Departments as '"+patientname+"'");
            loadPatient();
            ui->pushButton_submit->setEnabled(false);
         }

    else
    {
        //qDebug()<<"NO is Clicked";
        QMessageBox::critical(this,tr("error;;"),patientIN.lastError().text());
    };
}


void Doctor::on_exit_clicked()
{
    Login conn;
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Exit the system?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes)
        this->hide();
}


void Doctor::submit_doctor()
{
    emit myDoctor();
}

void Doctor::loadPatient()
{
    //TABLE VIEW REPORT
    Login conn;
    QSqlQueryModel *load=new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery *qry=new QSqlQuery(conn.myDB);

   // qry->prepare("select firstname from registration where status='IN'");
    qry->prepare("select firstname from registration");
    qry->exec();
    load->setQuery(*qry);
    ui->comboBox_loadpatient->setModel(load);
    //qDebug() << (modal->rowCount());
}


void Doctor::on_comboBox_loadpatient_currentIndexChanged(const QString &arg1)
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
            ui->firstname->setText(insert.value(1).toString());
            ui->middlename->setText(insert.value(2).toString());
            ui->surname->setText(insert.value(3).toString());
            ui->gender->setText(insert.value(5).toString());
            ui->age->setText(insert.value(6).toString());
            ui->status->setText(insert.value(13).toString());

        }
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("error;;"),insert.lastError().text());
    }
}

void Doctor::showTime_doc()
{
        QTime time=QTime::currentTime();
        QString time_text=time.toString(("HH : mm : ss"));
        ui->digitaldate->setText(time_text);
}



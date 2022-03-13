#include "registration.h"
#include "ui_registration.h"
#include <QMessageBox>
#include <QCalendarWidget>
#include <QDateTimeEdit>
#include <QDateEdit>



Registration::Registration(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
    this->setFixedSize(875,675);

            //LOAD DATA
            loadPatient();

            //DATABASE CONNECTION
            Login conn;
            conn.connOpen(); //OPEN CONNECTION
            if(!conn.connOpen())
                ui->statusbar->showMessage("Failed to connect");
            else
                ui->statusbar->showMessage("Database Connected");


            //DATE UPDATE
            showTime();
            QTimer *timer=new QTimer(this);
            connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
            timer->start();
            ui->DOB->setDateTime(QDateTime::currentDateTime());
            ui->DOB->setDateTime(QDateTime::currentDateTime());

            //
            ui->pushButton_submit->setEnabled(false);


            //CONNECT
            //connect(this, SIGNAL(myRegistration()), parent, SLOT(loadPatient()));

            //CONNECTION SIGNAL
           //connect(Laboratory *reg_laboratory, &Laboratory::myLaboratory, this, &Registration::loadPatient);
           //connect(doctor, &Doctor::myDoctor, this, &Registration::loadPatient);
           // connect(inpatient, &Inpatient::myInpatient, this, &Registration::loadPatient);
            emit myRegistration();
}



Registration::~Registration()
{
    delete ui;
}

void Registration::on_exit_clicked()
{
    Login conn;
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Exit the system?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes)
        this->hide();
}





void Registration::showTime()
{
        QTime time=QTime::currentTime();
        QString time_text=time.toString(("HH : mm : ss"));
        ui->digitaldate->setText(time_text);
}


void Registration::submit()
{
    Login conn;
    QString firstname,middlename,surname,address,gender,age,occupation
            ,phoneno,payment,DOB,patientType,status;

    firstname=ui->firstname->text();
    middlename=ui->middlename->text();
    surname=ui->surname->text();
    address=ui->address->text();
    age=ui->age->text();
    occupation=ui->occupation->text();
    phoneno=ui->phoneno->text();
    DOB=ui->DOB->dateTime().toString("dd-MM-yyyy");
    status="IN";
    QString i;



    //SEX
    if(ui->radioButton_male->isChecked())
    {
        gender="Male";
    }
    else if(ui->radioButton_female->isChecked())
    {
        gender="Female";
    }



    //PAYMENT
    if(ui->radioButton_cash->isChecked())
    {
        payment="Cash";
    }
    else if(ui->radioButton_insuarance->isEnabled())
    {
        payment="Insuarance";
    }

    //PATIENT TYPE
    if(ui->radioButton_ipd->isChecked())
    {
        patientType="IPD";
        ui->label_type->setText("IPD");
    }
    else if(ui->radioButton_opd->isChecked())
    {
        patientType="OPD";
        ui->label_type->setText("OPD");
    }


    //conn.connOpen();// OPEN CONNECTION
    QSqlQuery patientIN;
    patientIN.prepare("insert into registration(firstname,middlename,surname,address,gender,age,phoneno,occupation,payment,DOB,patientType,status) "
                      "values ('"+firstname+"','"+middlename+"','"+surname+"','"+address+"','"+gender+"','"+age+"','"+phoneno+"','"+occupation+"','"+payment+"','"+DOB+"','"+patientType+"','"+status+"')");
         if(patientIN.exec())
         {
            ui->statusbar->showMessage("Succesfully Sent to Database as '"+firstname+"''"+surname+"'");
            loadPatient();
            ui->pushButton_submit->setEnabled(false);
         }

    else
    {
        //qDebug()<<"NO is Clicked";
        QMessageBox::critical(this,tr("error;;"),patientIN.lastError().text());
    };
}

void Registration::loadPatient()
{
    //TABLE VIEW REPORT
    Login conn;
    QSqlQueryModel *load=new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery *qry=new QSqlQuery(conn.myDB);

    qry->prepare("select firstname from registration where status='IN'");
    qry->exec();
    load->setQuery(*qry);
    ui->listView_patients->setModel(load);
    //qDebug() << (modal->rowCount());
}


void Registration::on_pushButton_submit_clicked()
{
                submit();
                sample();
                emit myRegistration();
}


void Registration::on_pushButton_load_clicked()
{
    //ui->pushButton_load->animateClick();
    QMessageBox::StandardButton reply=QMessageBox::question(this,
                          "ALERT!","Do you want to sent Patient's Details",
                          QMessageBox::No | QMessageBox::Yes );

         if(reply ==QMessageBox::Yes)
         {
                ui->pushButton_submit->setEnabled(true);
                generate_Qrcode();
                ui->statusbar->showMessage("Qr Code Generated");
         }

    else if(reply ==QMessageBox::No)
    {
        ui->statusbar->showMessage("Please fill Missing Information");
    }

}


void Registration::on_listView_patients_clicked(const QModelIndex &index)
{
    QString val=ui->listView_patients->model()->data(index).toString();


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
            ui->address->setText(insert.value(4).toString());
            ui->gender->setText(insert.value(5).toString());
            ui->age->setText(insert.value(6).toString());
            ui->phoneno->setText(insert.value(7).toString());
            ui->occupation->setText(insert.value(8).toString());
            ui->label_date->setText(insert.value(10).toString());
            ui->label_type->setText(insert.value(11).toString());

            ui->DOB->setEnabled(false);
            ui->gridLayout->setEnabled(false);

        }
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("error;;"),insert.lastError().text());
    }

}


void Registration::on_pushButton_cancel_clicked()
{
    ui->firstname->clear();
    ui->middlename->clear();
    ui->surname->clear();
    ui->address->clear();
    ui->gender->clear();
    ui->age->clear();
    ui->phoneno->clear();
    ui->occupation->clear();
    ui->label_date->clear();
    ui->label_type->clear();
    //ui->comboBox_loadpatient->setCurrentIndex(0);
    QPixmap code(":/img/img/registration/images/qrcode.png");
   ui->qr->setPixmap(code);
   ui->gridLayout->setEnabled(true);
}


void Registration::paintQR(QPainter &painter, const QSize sz, const QString &data,
                     QString complete_file_path, QColor fg, QPixmap &pixmap)
{
    char *str=data.toUtf8().data();
    qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(str, qrcodegen::QrCode::Ecc::LOW);
    const int s=qr.size>0?qr.size:1;
    const double w=sz.width();
    const double h=sz.height();
    const double aspect=w/h;
    const double size=((aspect>1.0)?h:w);
    const double scale=size/(s+2);
    painter.setPen(Qt::NoPen);
    painter.setBrush(fg);
    for(int y=0; y<s; y++) {
        for(int x=0; x<s; x++) {
            const int color = qr.getModule(x, y);  // 0 for white, 1 for black
            if(0x0!=color) {
                const double rx1=(x+1)*scale, ry1=(y+1)*scale;
                QRectF r(rx1, ry1, scale, scale);
                painter.drawRects(&r,1);
            }
        }
    }
    pixmap.save(complete_file_path);

    QPixmap code(complete_file_path);
   ui->qr->setPixmap(code);
}


void Registration::generate_Qrcode()
{
    // QString statue_code = ui -> firstname -> text();
    QString firstname = ui -> firstname -> text();
    QString middlename = ui -> middlename -> text();
    QString surname = ui -> surname -> text();
    //QString phoneno = ui -> phoneno -> text();
    QString statue_code = firstname+"***"+ middlename+"***"+surname;

    QString file_name = ui -> surname -> text();

    if(statue_code.isEmpty() || file_name.isEmpty()){
        QMessageBox msgBox;
        msgBox.setWindowTitle("incomplete info");
        msgBox.setText("Please,specify completed information");
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        int ret = msgBox.exec();
        qDebug() << ret;
    }else if(file_name.isEmpty()){
        QMessageBox msgBox;
        msgBox.setWindowTitle("incomplete info");
        msgBox.setText("Please,specify a correct directory path for the file");
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        int ret = msgBox.exec();
        qDebug() << ret;
    }else{
        QString file_extention = ".png";
        QString complte_file_path = "/sqlite/QRCODE/" +statue_code + file_extention;
        QPixmap pixmap( 100, 100 );
        pixmap.fill( Qt::white );
        QSize t1(100, 100);
        QPainter painter(&pixmap);
        paintQR(painter,t1, statue_code, complte_file_path, QColor(1, 0, 0, 220), pixmap);

    }
}

void Registration::on_pushButton_refresh_clicked()
{
    loadPatient();
}

void Registration::sample()
{
    QString heart,neuro,lungs,kidney,eyes,bones;
    if(ui->checkBox_heart->isChecked())
    {
        heart="HEART";
    }
    else if(ui->checkBox_neuorology->isEnabled())
    {
         neuro="NEUOROLOGY";
    }
    else if(ui->checkBox_lungs->isEnabled())
    {
         lungs="LUNGS";
    }
    else if(ui->checkBox_kidney->isEnabled())
    {
         kidney="KIDNEY";
    }
    else if(ui->checkBox_eyes->isEnabled())
    {
         eyes="EYES";
    }
    else if(ui->checkBox_bones->isEnabled())
    {
         bones="BONES";
    }
        QList <QString> List;

        List << heart << neuro << lungs << kidney << eyes << bones;

        foreach(QString symptoms, List)
        {
            QSqlQuery patientIN;
            patientIN.prepare("insert into registration(symptoms) "
                              "values ('"+symptoms+"')");
            patientIN.exec();

        }
}


#include "receptionwindow.h"
#include "ui_receptionwindow.h"

ReceptionWindow::ReceptionWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReceptionWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1050,776);
    //consultationdialog=new ConsultationDialog(this);
    billingwindow=new BillingWindow(this);

    //DATABASE CONNECTION
    Database conn;
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

    //LOAD LISTS
    revisitlist();



}

ReceptionWindow::~ReceptionWindow()
{
    delete ui;
}
// SHOW TIME
void ReceptionWindow::showTime()
{
        //QTime time = QTime::fromString("00:00:00");
        QTime time=QTime::currentTime();
        QString time_text=time.toString(("HH:mm"));
        ui->digitaldate->display(time_text);
}
//NEW VISIT SUBMIT
void ReceptionWindow::NewVisitSubmit()
{
    Database conn;
    QString firstname,middlename,surname,address,gender,age,occupation
            ,phoneno,payment,dob,country,status,fee,nidano,kinfullname,kinrelationship,kinphoneno;

    firstname=ui->firstname->text();
    middlename=ui->middlename->text();
    surname=ui->surname->text();
    address=ui->address->text();
    age=ui->age->text();
    occupation=ui->occupation->text();
    phoneno=ui->phoneno->text();
    nidano=ui->nida->text();
    kinfullname=ui->KinFull->text();
    kinrelationship=ui->KinRelation->text();
    kinphoneno=ui->KinPhoneno->text();
    dob=ui->DOB->dateTime().toString("dd-MM-yyyy");
    status="IN";
    fee="3000";
    country=ui->comboBox_country->currentText();



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





    //conn.connOpen();// OPEN CONNECTION
    QSqlQuery patientIN;

    patientIN.prepare("insert into newvisit (firstname,middlename,surname,age,gender,phoneno,address,country,occupation,dob,payment,nidano,kinfullname,kinrelationship,kinphoneno)"
            "values('"+firstname+"','"+middlename+"','"+surname+"','"+age+"','"+gender+"','"+phoneno+"','"+address+"','"+country+"','"+occupation+"','"+dob+"','"+payment+"','"+nidano+"','"+kinfullname+"','"+kinrelationship+"','"+kinphoneno+"')");

         if(patientIN.exec())
         {
            ui->statusbar->showMessage("Succesfully Sent to Database as '"+firstname+" "+surname+"'");
            reset();
            //loadPatient();

         }

    else
    {
        //qDebug()<<"NO is Clicked";
        QMessageBox::critical(this,tr("error;;"),patientIN.lastError().text());
    };
}
//RESET NEW VISIT
void ReceptionWindow::reset()
{
    ui->firstname->clear();
    ui->middlename->clear();
    ui->surname->clear();
    ui->address->clear();
    ui->age->clear();
    ui->occupation->clear();
    ui->phoneno->clear();
    ui->nida->clear();
    ui->KinFull->clear();
    ui->KinRelation->clear();
    ui->KinPhoneno->clear();
    ui->comboBox_country->setCurrentIndex(-1);
    ui->lcdnumber_NewFee->display("0");


    //ui->comboBox_loadpatient->setCurrentIndex(0);
    QPixmap code(":/img/icon/qrcode2.png");
   ui->qrcode->setPixmap(code);
   ui->gridLayout->setEnabled(true);
}
//PAINT QRCODE IN NEW VISIT
void ReceptionWindow::paintQR(QPainter &painter, const QSize sz, const QString &data,
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
   ui->qrcode->setPixmap(code);
}
//GENERATE QRCODE IN NEW VISIT
void ReceptionWindow::generate_Qrcode()
{
    // QString statue_code = ui -> firstname -> text();
    QString firstname = ui -> firstname -> text();
    QString middlename = ui -> middlename -> text();
    QString surname = ui -> surname -> text();
    //QString phoneno = ui -> phoneno -> text();
    QString statue_code = firstname+"  "+ middlename+"  "+surname;

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
        QPixmap pixmap( 150, 150 );
        pixmap.fill( Qt::white );
        QSize t1(150, 150);
        QPainter painter(&pixmap);
        ui->lcdnumber_NewFee->display("3000");
        paintQR(painter,t1, statue_code, complte_file_path, QColor(1, 0, 0, 220), pixmap);

    }
}
//BUTTONS IN NEW VISIT
void ReceptionWindow::on_btnGenerate_clicked()
{
    generate_Qrcode();
    //ui->lcdnumber_NewFee->display("3000");
}

void ReceptionWindow::on_closeButton_clicked()
{
    QMessageBox messageBox(QMessageBox::Warning, "waring", "Exit the system?", QMessageBox::Yes|QMessageBox::No);
    if(messageBox.exec()==QMessageBox::Yes)
        this->hide();
}

void ReceptionWindow::revisitlist()
{
    //TABLE VIEW ROOMS
    Database conn;
    QSqlQueryModel *modal =new QSqlQueryModel;

    conn.connOpen();// OPEN CONNECTION
    QSqlQuery *qry=new QSqlQuery(conn.myDB);

    qry->prepare("select firstname,middlename,surname from newvisit");
    qry->exec();
    modal->setQuery(*qry);
    ui->listViewReVisit->setModel(modal);
    conn.connClose();// CLOSE CONNECTION
    qDebug() << (modal->rowCount());
}


void ReceptionWindow::on_btnPatient_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void ReceptionWindow::on_btnOutsider_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void ReceptionWindow::on_btnSpecialist_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void ReceptionWindow::on_btnReport_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void ReceptionWindow::on_btnBilling_clicked()
{
    //this->hide();
    billingwindow->show();
}


void ReceptionWindow::on_btnLaboratory_clicked()
{
    ui->stackedWidgetOUT->setCurrentIndex(0);
}


void ReceptionWindow::on_btnDressing_clicked()
{
    ui->stackedWidgetOUT->setCurrentIndex(1);
}


void ReceptionWindow::on_saveBtnReVisit_clicked()
{
   ui->statusbar->showMessage("No action available for this button");
}


void ReceptionWindow::on_saveBtnVisit_clicked()
{
    NewVisitSubmit();
}

void ReceptionWindow::on_btnLaboratoryTable_clicked()
{
    ui->stackedWidgetOUT->setCurrentIndex(0);
}


void ReceptionWindow::on_btnDressingTable_clicked()
{
    ui->stackedWidgetOUT->setCurrentIndex(1);
}

void ReceptionWindow::on_btnSearchReVisit_clicked()
{
    revisitlist();
}


void ReceptionWindow::on_listViewReVisit_activated(const QModelIndex &index)
{
    QString val=ui->listViewReVisit->model()->data(index).toString();


    Database conn;
            if(!conn.connOpen()){
        qDebug()<< "Failed to open the database";
        return;
    }

    conn.connOpen();// OPEN CONNECTION
    QSqlQuery qry;
    qry.prepare("select * from newvisit where firstname='"+val+"'");

         if(qry.exec())
    {
        while(qry.next())
        {
            ui->idReVisit->setText(qry.value(0).toString());
            ui->firstnameReVisit->setText(qry.value(1).toString());
            ui->middlenameReVisit->setText(qry.value(3).toString());
            ui->lastnameReVisit->setText(qry.value(3).toString());
            ui->ageReVisit->setText(qry.value(4).toString());
            ui->genderReVisit->setText(qry.value(5).toString());
            ui->phonenoReVisit->setText(qry.value(6).toString());
            ui->addressReVisit->setText(qry.value(7).toString());
            ui->countryReVisit->setText(qry.value(8).toString());
            ui->occupationReVisit->setText(qry.value(9).toString());
            ui->DOBReVisit->setText(qry.value(10).toString());

            //ui->pushButton_checkout->setEnabled(true);
            //ui->pushButton_checkin->setEnabled(false);
        }
    }


}


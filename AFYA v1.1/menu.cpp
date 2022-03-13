#include "menu.h"
#include "ui_menu.h"
#include <QMessageBox>
#include <QCalendarWidget>
#include <QDateTimeEdit>
#include <QDateEdit>
Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    this->setFixedSize(875,675);

            //UI
              laboratory=new Laboratory(this);
              doctor=new Doctor(this);
              registration=new Registration(this);
              inpatient=new Inpatient(this);
            //LOAD DATA


            //DATABASE CONNECTION
            Login conn;
            conn.connOpen(); //OPEN CONNECTION
            if(!conn.connOpen())
            {
                //ui->database->setPixmap(":/img/img/NetOff.png");
                ui->statusbar->showMessage("Failed to connect");
            }
            else{
                //ui->database->setPixmap(":/img/img/NetOn.png");
                ui->statusbar->showMessage("Database Connected");
            }

            //DATE UPDATE
            showTime();
            QTimer *timer=new QTimer(this);
            connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
            timer->start();


            //


}



Menu::~Menu()
{
    delete ui;
    delete laboratory;
    delete doctor;
    delete registration;

}

void Menu::showTime()
{
        QTime time=QTime::currentTime();
        QString time_text=time.toString(("HH : mm : ss"));
        ui->digitaldate->setText(time_text);
}

void Menu::on_PushButton_laboratory_clicked()
{
    laboratory->show();
    //this->hide();
}


void Menu::on_PushButton_doctor_clicked()
{
    doctor->show();
    //this->hide();
}


void Menu::on_PushButton_registration_clicked()
{
    registration->show();
    //this->hide();

}


void Menu::on_PushButton_inpatient_clicked()
{
    inpatient->show();
    //this->hide();
}


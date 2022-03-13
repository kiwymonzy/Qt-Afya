/********************************************************************************
** Form generated from reading UI file 'doctor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTOR_H
#define UI_DOCTOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Doctor
{
public:
    QWidget *centralwidget;
    QLabel *status;
    QLabel *label_6;
    QLabel *label_20;
    QComboBox *comboBox_loadpatient;
    QPushButton *exit;
    QPushButton *pushButton_cancel;
    QLabel *doctorname;
    QGroupBox *groupBox_3;
    QTextEdit *textEdit;
    QLabel *label_type;
    QGroupBox *groupBox;
    QLabel *label_gender;
    QLabel *label_fileno;
    QLineEdit *fileno;
    QLineEdit *surname;
    QLabel *label_surname;
    QLabel *label_firstname;
    QLabel *label_middle;
    QLineEdit *firstname;
    QLineEdit *middlename;
    QLabel *gender;
    QLabel *label_date;
    QLabel *label_age;
    QLineEdit *age;
    QLineEdit *age_2;
    QGroupBox *groupBox_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_13;
    QWidget *tab_2;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_12;
    QLabel *qr;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_submit;
    QLabel *digitaldate;
    QGroupBox *groupBox_4;
    QLabel *label_4;
    QLabel *id;
    QLCDNumber *lcdNumber_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QPlainTextEdit *ask;
    QPlainTextEdit *pharmacy;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Doctor)
    {
        if (Doctor->objectName().isEmpty())
            Doctor->setObjectName(QString::fromUtf8("Doctor"));
        Doctor->resize(875, 675);
        centralwidget = new QWidget(Doctor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 100, 241, 31));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(740, 0, 131, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon);
        pushButton_cancel = new QPushButton(centralwidget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(730, 560, 131, 61));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        pushButton_cancel->setFont(font);
        pushButton_cancel->setIconSize(QSize(27, 27));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, -20, 150, 150));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/img/img/ucc.png")));
        label_6->setScaledContents(true);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(460, 340, 401, 211));
        textEdit = new QTextEdit(groupBox_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 30, 381, 171));
        label_type = new QLabel(centralwidget);
        label_type->setObjectName(QString::fromUtf8("label_type"));
        label_type->setGeometry(QRect(210, 160, 59, 16));
        label_type->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 160, 281, 191));
        label_gender = new QLabel(groupBox);
        label_gender->setObjectName(QString::fromUtf8("label_gender"));
        label_gender->setGeometry(QRect(10, 130, 61, 16));
        label_fileno = new QLabel(groupBox);
        label_fileno->setObjectName(QString::fromUtf8("label_fileno"));
        label_fileno->setGeometry(QRect(200, 130, 59, 16));
        fileno = new QLineEdit(groupBox);
        fileno->setObjectName(QString::fromUtf8("fileno"));
        fileno->setEnabled(false);
        fileno->setGeometry(QRect(200, 150, 61, 23));
        surname = new QLineEdit(groupBox);
        surname->setObjectName(QString::fromUtf8("surname"));
        surname->setEnabled(false);
        surname->setGeometry(QRect(10, 100, 237, 22));
        label_surname = new QLabel(groupBox);
        label_surname->setObjectName(QString::fromUtf8("label_surname"));
        label_surname->setGeometry(QRect(10, 80, 95, 16));
        label_firstname = new QLabel(groupBox);
        label_firstname->setObjectName(QString::fromUtf8("label_firstname"));
        label_firstname->setGeometry(QRect(13, 31, 73, 16));
        label_middle = new QLabel(groupBox);
        label_middle->setObjectName(QString::fromUtf8("label_middle"));
        label_middle->setGeometry(QRect(150, 31, 91, 16));
        firstname = new QLineEdit(groupBox);
        firstname->setObjectName(QString::fromUtf8("firstname"));
        firstname->setEnabled(false);
        firstname->setGeometry(QRect(13, 50, 125, 24));
        middlename = new QLineEdit(groupBox);
        middlename->setObjectName(QString::fromUtf8("middlename"));
        middlename->setEnabled(false);
        middlename->setGeometry(QRect(150, 50, 125, 24));
        gender = new QLabel(groupBox);
        gender->setObjectName(QString::fromUtf8("gender"));
        gender->setEnabled(false);
        gender->setGeometry(QRect(70, 180, 59, 16));
        label_date = new QLabel(groupBox);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setEnabled(false);
        label_date->setGeometry(QRect(120, 380, 81, 16));
        label_age = new QLabel(groupBox);
        label_age->setObjectName(QString::fromUtf8("label_age"));
        label_age->setGeometry(QRect(130, 130, 25, 16));
        age = new QLineEdit(groupBox);
        age->setObjectName(QString::fromUtf8("age"));
        age->setEnabled(false);
        age->setGeometry(QRect(130, 150, 61, 23));
        age_2 = new QLineEdit(groupBox);
        age_2->setObjectName(QString::fromUtf8("age_2"));
        age_2->setEnabled(false);
        age_2->setGeometry(QRect(10, 150, 111, 23));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 10, 561, 321));
        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 190, 401, 121));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        checkBox_5 = new QCheckBox(tab);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(10, 0, 62, 22));
        checkBox_6 = new QCheckBox(tab);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(10, 40, 101, 22));
        checkBox_10 = new QCheckBox(tab);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setGeometry(QRect(10, 20, 49, 22));
        checkBox_11 = new QCheckBox(tab);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));
        checkBox_11->setGeometry(QRect(10, 60, 47, 22));
        checkBox_13 = new QCheckBox(tab);
        checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));
        checkBox_13->setGeometry(QRect(120, 0, 81, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        checkBox_7 = new QCheckBox(tab_2);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(10, 0, 100, 22));
        checkBox_8 = new QCheckBox(tab_2);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(10, 20, 100, 22));
        checkBox_9 = new QCheckBox(tab_2);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(10, 40, 100, 22));
        checkBox_12 = new QCheckBox(tab_2);
        checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));
        checkBox_12->setGeometry(QRect(10, 60, 111, 22));
        tabWidget->addTab(tab_2, QString());
        qr = new QLabel(groupBox_2);
        qr->setObjectName(QString::fromUtf8("qr"));
        qr->setGeometry(QRect(440, 200, 100, 100));
        qr->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        qr->setAlignment(Qt::AlignCenter);
        textEdit_2 = new QTextEdit(groupBox_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 30, 541, 151));
        pushButton_submit = new QPushButton(centralwidget);
        pushButton_submit->setObjectName(QString::fromUtf8("pushButton_submit"));
        pushButton_submit->setGeometry(QRect(580, 560, 131, 61));
        pushButton_submit->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/save1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_submit->setIcon(icon1);
        pushButton_submit->setIconSize(QSize(25, 25));
        digitaldate = new QLabel(centralwidget);
        digitaldate->setObjectName(QString::fromUtf8("digitaldate"));
        digitaldate->setGeometry(QRect(10, 600, 281, 41));
        QFont font1;
        font1.setPointSize(23);
        font1.setBold(true);
        font1.setUnderline(true);
        digitaldate->setFont(font1);
        digitaldate->setFocusPolicy(Qt::StrongFocus);
        digitaldate->setAcceptDrops(true);
        digitaldate->setAlignment(Qt::AlignCenter);
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 360, 171, 151));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 30, 61, 61));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/img/boy.png")));
        label_4->setScaledContents(true);
        comboBox_loadpatient = new QComboBox(groupBox_4);
        comboBox_loadpatient->setObjectName(QString::fromUtf8("comboBox_loadpatient"));
        comboBox_loadpatient->setGeometry(QRect(10, 110, 151, 24));
        lcdNumber_4 = new QLCDNumber(groupBox_4);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(73, 50, 81, 41));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 30, 59, 16));
        Doctor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Doctor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 875, 22));
        Doctor->setMenuBar(menubar);
        statusbar = new QStatusBar(Doctor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Doctor->setStatusBar(statusbar);

        retranslateUi(Doctor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Doctor);
    } // setupUi

    void retranslateUi(QMainWindow *Doctor)
    {
        Doctor->setWindowTitle(QCoreApplication::translate("Doctor", "DOCTOR", nullptr));
        label_20->setText(QCoreApplication::translate("Doctor", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\">HOSPITAL </span><span style=\" font-size:24pt; font-weight:600; color:#ff2600;\">SYSTEM</span></p></body></html>", nullptr));
        exit->setText(QCoreApplication::translate("Doctor", "EXIT DATABASE", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("Doctor", "CANCEL", nullptr));
        label_6->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("Doctor", "PHARMACY", nullptr));
        label_type->setText(QCoreApplication::translate("Doctor", "TYPE", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Doctor", "PATIENT'S PARTICULARS", nullptr));
        label_gender->setText(QCoreApplication::translate("Doctor", "<html><head/><body><p><span style=\" color:#ff2600;\">GENDER</span></p></body></html>", nullptr));
        label_fileno->setText(QCoreApplication::translate("Doctor", "<html><head/><body><p><span style=\" color:#ff2600;\">FILE NO</span></p></body></html>", nullptr));
        label_surname->setText(QCoreApplication::translate("Doctor", "<html><head/><body><p><span style=\" color:#ff2600;\">SURNAME</span></p><p><br/></p></body></html>", nullptr));
        label_firstname->setText(QCoreApplication::translate("Doctor", "<html><head/><body><p><span style=\" color:#ff2600;\">FULL NAME\n"
"</span></p></body></html>", nullptr));
        label_middle->setText(QCoreApplication::translate("Doctor", "<html><head/><body><p><span style=\" color:#ff2600;\">MIDDLENAME</span></p></body></html>", nullptr));
        gender->setText(QString());
        label_date->setText(QString());
        label_age->setText(QCoreApplication::translate("Doctor", "<html><head/><body><p><span style=\" color:#ff2600;\">AGE</span></p></body></html>", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Doctor", "ASK", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Doctor", "MRDT", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Doctor", "URINE TEST", nullptr));
        checkBox_10->setText(QCoreApplication::translate("Doctor", "FBP", nullptr));
        checkBox_11->setText(QCoreApplication::translate("Doctor", "HIV", nullptr));
        checkBox_13->setText(QCoreApplication::translate("Doctor", "MALARIA", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Doctor", "CLINICAL LAB", nullptr));
        checkBox_7->setText(QCoreApplication::translate("Doctor", "X-RAY", nullptr));
        checkBox_8->setText(QCoreApplication::translate("Doctor", "CT SCAN", nullptr));
        checkBox_9->setText(QCoreApplication::translate("Doctor", "MIR", nullptr));
        checkBox_12->setText(QCoreApplication::translate("Doctor", "ULTRA SOUND", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Doctor", "RADIOLOGY", nullptr));
        qr->setText(QCoreApplication::translate("Doctor", "QR CODE", nullptr));
        pushButton_submit->setText(QCoreApplication::translate("Doctor", "SAVE", nullptr));
        digitaldate->setText(QCoreApplication::translate("Doctor", "00   :   00   :   00", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Doctor", "ONLINE PATIENTS", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("Doctor", "NUMBER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Doctor: public Ui_Doctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTOR_H

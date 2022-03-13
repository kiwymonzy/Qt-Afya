/********************************************************************************
** Form generated from reading UI file 'adminaccountwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINACCOUNTWINDOW_H
#define UI_ADMINACCOUNTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminAccountWindow
{
public:
    QWidget *centralwidget;
    QPushButton *logout_pushButton;
    QGroupBox *groupBox_2;
    QPushButton *profileImage_label_2;
    QLabel *profileText_label;
    QLabel *accountTypeText_label;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_dashboard;
    QPushButton *pushButton_employee;
    QPushButton *pushButton_report;
    QLabel *label_61;
    QLabel *label_62;
    QLabel *label_63;
    QStackedWidget *stackedWidget_admin_tabs;
    QWidget *DASHBOARD;
    QGroupBox *groupBox_3;
    QLabel *label;
    QLabel *noOfStandardUserAccounts_label;
    QGroupBox *groupBox_5;
    QLabel *label_2;
    QLabel *noOfPremiumUserAccounts_label;
    QWidget *EMPLOYEE;
    QGroupBox *groupBox_10;
    QLabel *label_41;
    QLabel *label_47;
    QLabel *label_49;
    QGroupBox *groupBox_12;
    QPushButton *register_pushButton;
    QLineEdit *firstName_lineEdit;
    QLineEdit *middleName_lineEdit;
    QLineEdit *lastName_lineEdit;
    QLineEdit *emailAddress_lineEdit;
    QLabel *label_42;
    QLineEdit *password_lineEdit;
    QLabel *label_43;
    QLineEdit *confirmPassword_lineEdit;
    QLabel *label_44;
    QComboBox *accountType_comboBox;
    QCheckBox *termsAndConditions_checkBox;
    QComboBox *namePrefix_comboBox;
    QLabel *label_45;
    QLabel *label_46;
    QWidget *REPORT;
    QGroupBox *groupBox_6;
    QTableView *accountActivity_tableView;
    QGroupBox *groupBox_9;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *nameText_label;
    QLabel *emailAddressText_label;
    QLabel *accountCreatedDateTimeText_label;
    QTableView *feedbackReport_tableView;
    QLabel *noNewReportsAvailable_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminAccountWindow)
    {
        if (AdminAccountWindow->objectName().isEmpty())
            AdminAccountWindow->setObjectName(QString::fromUtf8("AdminAccountWindow"));
        AdminAccountWindow->setWindowModality(Qt::WindowModal);
        AdminAccountWindow->resize(1000, 750);
        centralwidget = new QWidget(AdminAccountWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        logout_pushButton = new QPushButton(centralwidget);
        logout_pushButton->setObjectName(QString::fromUtf8("logout_pushButton"));
        logout_pushButton->setGeometry(QRect(910, 10, 74, 48));
        QFont font;
        font.setPointSize(13);
        logout_pushButton->setFont(font);
        logout_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#logout_pushButton{\n"
"background-color: rgb(250, 50, 0);\n"
"border-radius: 24px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon/ICON_CLOSE.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout_pushButton->setIcon(icon);
        logout_pushButton->setIconSize(QSize(30, 30));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 237, 86));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: #33B9A9;\n"
"border-radius: 30px;"));
        profileImage_label_2 = new QPushButton(groupBox_2);
        profileImage_label_2->setObjectName(QString::fromUtf8("profileImage_label_2"));
        profileImage_label_2->setGeometry(QRect(10, 10, 61, 61));
        profileImage_label_2->setFont(font);
        profileImage_label_2->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"border-radius: 24px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/icon/PROFILE PICTURE.png"), QSize(), QIcon::Normal, QIcon::Off);
        profileImage_label_2->setIcon(icon1);
        profileImage_label_2->setIconSize(QSize(60, 60));
        profileText_label = new QLabel(groupBox_2);
        profileText_label->setObjectName(QString::fromUtf8("profileText_label"));
        profileText_label->setGeometry(QRect(80, 20, 141, 20));
        QFont font1;
        font1.setPointSize(16);
        profileText_label->setFont(font1);
        profileText_label->setStyleSheet(QString::fromUtf8("color: #000;"));
        profileText_label->setFrameShape(QFrame::Box);
        profileText_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        accountTypeText_label = new QLabel(groupBox_2);
        accountTypeText_label->setObjectName(QString::fromUtf8("accountTypeText_label"));
        accountTypeText_label->setGeometry(QRect(80, 40, 151, 21));
        QFont font2;
        font2.setPointSize(11);
        accountTypeText_label->setFont(font2);
        profileText_label->raise();
        profileImage_label_2->raise();
        accountTypeText_label->raise();
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(260, 10, 371, 86));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: #EDEDED;\n"
"border-radius: 30px;"));
        pushButton_dashboard = new QPushButton(groupBox_4);
        pushButton_dashboard->setObjectName(QString::fromUtf8("pushButton_dashboard"));
        pushButton_dashboard->setGeometry(QRect(40, 10, 74, 48));
        pushButton_dashboard->setFont(font);
        pushButton_dashboard->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_dashboard{\n"
"background-color: #DE6F6F;\n"
"border-radius: 24px;\n"
"}\n"
"\n"
"QPushButton#pushButton_dashboard:hover {\n"
"background-color: #000000;\n"
"\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/icon/ICON_PATIENT.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_dashboard->setIcon(icon2);
        pushButton_dashboard->setIconSize(QSize(30, 30));
        pushButton_employee = new QPushButton(groupBox_4);
        pushButton_employee->setObjectName(QString::fromUtf8("pushButton_employee"));
        pushButton_employee->setGeometry(QRect(160, 10, 74, 48));
        pushButton_employee->setFont(font);
        pushButton_employee->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_employee{\n"
"background-color: #DE6F6F;\n"
"border-radius: 24px;\n"
"}\n"
"\n"
"QPushButton#pushButton_employee:hover {\n"
"background-color: #000000;\n"
"\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/icon/ICON_SPECIALIST.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_employee->setIcon(icon3);
        pushButton_employee->setIconSize(QSize(30, 30));
        pushButton_report = new QPushButton(groupBox_4);
        pushButton_report->setObjectName(QString::fromUtf8("pushButton_report"));
        pushButton_report->setGeometry(QRect(280, 10, 74, 48));
        pushButton_report->setFont(font);
        pushButton_report->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_report{\n"
"background-color: #DE6F6F;\n"
"border-radius: 24px;\n"
"}\n"
"\n"
"QPushButton#pushButton_report:hover {\n"
"background-color: #000000;\n"
"\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/icon/ICON_BILLING.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_report->setIcon(icon4);
        pushButton_report->setIconSize(QSize(30, 30));
        label_61 = new QLabel(groupBox_4);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setGeometry(QRect(40, 60, 81, 16));
        QFont font3;
        label_61->setFont(font3);
        label_61->setStyleSheet(QString::fromUtf8("color: #000;"));
        label_61->setFrameShape(QFrame::Box);
        label_61->setAlignment(Qt::AlignCenter);
        label_62 = new QLabel(groupBox_4);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setGeometry(QRect(160, 60, 71, 16));
        label_62->setFont(font3);
        label_62->setStyleSheet(QString::fromUtf8("color: #000;"));
        label_62->setFrameShape(QFrame::Box);
        label_62->setAlignment(Qt::AlignCenter);
        label_63 = new QLabel(groupBox_4);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setGeometry(QRect(280, 60, 71, 16));
        label_63->setFont(font3);
        label_63->setStyleSheet(QString::fromUtf8("color: #000;"));
        label_63->setFrameShape(QFrame::Box);
        label_63->setAlignment(Qt::AlignCenter);
        stackedWidget_admin_tabs = new QStackedWidget(centralwidget);
        stackedWidget_admin_tabs->setObjectName(QString::fromUtf8("stackedWidget_admin_tabs"));
        stackedWidget_admin_tabs->setGeometry(QRect(10, 100, 981, 591));
        stackedWidget_admin_tabs->setStyleSheet(QString::fromUtf8(""));
        DASHBOARD = new QWidget();
        DASHBOARD->setObjectName(QString::fromUtf8("DASHBOARD"));
        groupBox_3 = new QGroupBox(DASHBOARD);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 50, 251, 61));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: #33B9A9;\n"
"border-radius: 30px;"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 0, 191, 31));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        noOfStandardUserAccounts_label = new QLabel(groupBox_3);
        noOfStandardUserAccounts_label->setObjectName(QString::fromUtf8("noOfStandardUserAccounts_label"));
        noOfStandardUserAccounts_label->setGeometry(QRect(10, 30, 231, 21));
        noOfStandardUserAccounts_label->setFont(font1);
        noOfStandardUserAccounts_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        noOfStandardUserAccounts_label->setAlignment(Qt::AlignCenter);
        groupBox_5 = new QGroupBox(DASHBOARD);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 120, 251, 61));
        groupBox_5->setStyleSheet(QString::fromUtf8("background-color: #33B9A9;\n"
"border-radius: 30px;"));
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 0, 191, 31));
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);
        noOfPremiumUserAccounts_label = new QLabel(groupBox_5);
        noOfPremiumUserAccounts_label->setObjectName(QString::fromUtf8("noOfPremiumUserAccounts_label"));
        noOfPremiumUserAccounts_label->setGeometry(QRect(10, 30, 231, 21));
        noOfPremiumUserAccounts_label->setFont(font1);
        noOfPremiumUserAccounts_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        noOfPremiumUserAccounts_label->setAlignment(Qt::AlignCenter);
        stackedWidget_admin_tabs->addWidget(DASHBOARD);
        EMPLOYEE = new QWidget();
        EMPLOYEE->setObjectName(QString::fromUtf8("EMPLOYEE"));
        groupBox_10 = new QGroupBox(EMPLOYEE);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 20, 321, 551));
        groupBox_10->setStyleSheet(QString::fromUtf8("background-color: #EDEDED;\n"
"border-radius: 30px;"));
        label_41 = new QLabel(groupBox_10);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(160, 20, 71, 16));
        label_41->setFont(font3);
        label_41->setStyleSheet(QString::fromUtf8("color: #000;"));
        label_47 = new QLabel(groupBox_10);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(20, 90, 81, 16));
        label_47->setFont(font3);
        label_47->setStyleSheet(QString::fromUtf8("color: #000;"));
        label_49 = new QLabel(groupBox_10);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(160, 90, 81, 16));
        label_49->setFont(font3);
        label_49->setStyleSheet(QString::fromUtf8("color: #000;"));
        groupBox_12 = new QGroupBox(groupBox_10);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(90, 440, 141, 91));
        groupBox_12->setStyleSheet(QString::fromUtf8("background-color: #BEBEBE;\n"
"border-radius: 30px;"));
        register_pushButton = new QPushButton(groupBox_12);
        register_pushButton->setObjectName(QString::fromUtf8("register_pushButton"));
        register_pushButton->setGeometry(QRect(10, 10, 121, 71));
        QFont font5;
        font5.setPointSize(18);
        register_pushButton->setFont(font5);
        register_pushButton->setStyleSheet(QString::fromUtf8("background: #33B9A9;\n"
"border-radius: 20px;\n"
"color: #000;"));
        firstName_lineEdit = new QLineEdit(groupBox_10);
        firstName_lineEdit->setObjectName(QString::fromUtf8("firstName_lineEdit"));
        firstName_lineEdit->setGeometry(QRect(160, 50, 141, 31));
        QFont font6;
        font6.setPointSize(12);
        firstName_lineEdit->setFont(font6);
        firstName_lineEdit->setStyleSheet(QString::fromUtf8("background-color: #33B9A9;\n"
"border-radius: 30px;"));
        middleName_lineEdit = new QLineEdit(groupBox_10);
        middleName_lineEdit->setObjectName(QString::fromUtf8("middleName_lineEdit"));
        middleName_lineEdit->setGeometry(QRect(20, 120, 131, 31));
        middleName_lineEdit->setFont(font6);
        middleName_lineEdit->setStyleSheet(QString::fromUtf8("background-color: #33B9A9;\n"
"border-radius: 30px;"));
        middleName_lineEdit->setEchoMode(QLineEdit::Normal);
        lastName_lineEdit = new QLineEdit(groupBox_10);
        lastName_lineEdit->setObjectName(QString::fromUtf8("lastName_lineEdit"));
        lastName_lineEdit->setGeometry(QRect(160, 120, 141, 31));
        lastName_lineEdit->setFont(font6);
        lastName_lineEdit->setStyleSheet(QString::fromUtf8("background-color: #33B9A9;\n"
"border-radius: 30px;"));
        lastName_lineEdit->setEchoMode(QLineEdit::Normal);
        emailAddress_lineEdit = new QLineEdit(groupBox_10);
        emailAddress_lineEdit->setObjectName(QString::fromUtf8("emailAddress_lineEdit"));
        emailAddress_lineEdit->setGeometry(QRect(20, 180, 281, 31));
        emailAddress_lineEdit->setFont(font6);
        emailAddress_lineEdit->setStyleSheet(QString::fromUtf8("background-color: #33B9A9;\n"
"border-radius: 30px;"));
        emailAddress_lineEdit->setEchoMode(QLineEdit::Normal);
        label_42 = new QLabel(groupBox_10);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(20, 160, 91, 16));
        label_42->setFont(font3);
        label_42->setStyleSheet(QString::fromUtf8("color: #000;"));
        password_lineEdit = new QLineEdit(groupBox_10);
        password_lineEdit->setObjectName(QString::fromUtf8("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(20, 240, 281, 31));
        password_lineEdit->setFont(font6);
        password_lineEdit->setStyleSheet(QString::fromUtf8("background-color: #33B9A9;\n"
"border-radius: 30px;"));
        password_lineEdit->setEchoMode(QLineEdit::Password);
        label_43 = new QLabel(groupBox_10);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(20, 220, 91, 16));
        label_43->setFont(font3);
        label_43->setStyleSheet(QString::fromUtf8("color: #000;"));
        confirmPassword_lineEdit = new QLineEdit(groupBox_10);
        confirmPassword_lineEdit->setObjectName(QString::fromUtf8("confirmPassword_lineEdit"));
        confirmPassword_lineEdit->setGeometry(QRect(20, 300, 281, 31));
        confirmPassword_lineEdit->setFont(font6);
        confirmPassword_lineEdit->setStyleSheet(QString::fromUtf8("background-color: #33B9A9;\n"
"border-radius: 30px;"));
        confirmPassword_lineEdit->setEchoMode(QLineEdit::Password);
        label_44 = new QLabel(groupBox_10);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(20, 280, 121, 16));
        label_44->setFont(font3);
        label_44->setStyleSheet(QString::fromUtf8("color: #000;"));
        accountType_comboBox = new QComboBox(groupBox_10);
        accountType_comboBox->setObjectName(QString::fromUtf8("accountType_comboBox"));
        accountType_comboBox->setGeometry(QRect(50, 360, 221, 31));
        accountType_comboBox->setFont(font6);
        accountType_comboBox->setStyleSheet(QString::fromUtf8("background-color: #DE6F6F;\n"
"border-radius: 30px;\n"
"color: #000;"));
        termsAndConditions_checkBox = new QCheckBox(groupBox_10);
        termsAndConditions_checkBox->setObjectName(QString::fromUtf8("termsAndConditions_checkBox"));
        termsAndConditions_checkBox->setGeometry(QRect(50, 400, 221, 31));
        termsAndConditions_checkBox->setFont(font6);
        termsAndConditions_checkBox->setStyleSheet(QString::fromUtf8("background-color: #DE6F6F;\n"
"color:#000;"));
        namePrefix_comboBox = new QComboBox(groupBox_10);
        namePrefix_comboBox->setObjectName(QString::fromUtf8("namePrefix_comboBox"));
        namePrefix_comboBox->setGeometry(QRect(20, 50, 131, 31));
        namePrefix_comboBox->setFont(font6);
        namePrefix_comboBox->setStyleSheet(QString::fromUtf8("background-color: #DE6F6F;\n"
"border-radius: 30px;\n"
"color: #000;"));
        label_45 = new QLabel(groupBox_10);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(20, 30, 81, 16));
        label_45->setFont(font3);
        label_45->setStyleSheet(QString::fromUtf8("color: #000;"));
        label_46 = new QLabel(groupBox_10);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(100, 340, 121, 16));
        label_46->setFont(font3);
        label_46->setStyleSheet(QString::fromUtf8("color: #000;"));
        label_46->setAlignment(Qt::AlignCenter);
        stackedWidget_admin_tabs->addWidget(EMPLOYEE);
        REPORT = new QWidget();
        REPORT->setObjectName(QString::fromUtf8("REPORT"));
        groupBox_6 = new QGroupBox(REPORT);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(450, 20, 541, 251));
        QFont font7;
        font7.setPointSize(14);
        font7.setBold(true);
        groupBox_6->setFont(font7);
        accountActivity_tableView = new QTableView(groupBox_6);
        accountActivity_tableView->setObjectName(QString::fromUtf8("accountActivity_tableView"));
        accountActivity_tableView->setGeometry(QRect(10, 30, 511, 211));
        groupBox_9 = new QGroupBox(REPORT);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(0, 20, 431, 251));
        groupBox_9->setFont(font7);
        label_11 = new QLabel(groupBox_9);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 110, 61, 21));
        QFont font8;
        font8.setPointSize(11);
        font8.setBold(false);
        label_11->setFont(font8);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_12 = new QLabel(groupBox_9);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 150, 121, 21));
        label_12->setFont(font8);
        label_13 = new QLabel(groupBox_9);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 190, 151, 21));
        label_13->setFont(font8);
        nameText_label = new QLabel(groupBox_9);
        nameText_label->setObjectName(QString::fromUtf8("nameText_label"));
        nameText_label->setGeometry(QRect(160, 110, 261, 21));
        nameText_label->setFont(font8);
        emailAddressText_label = new QLabel(groupBox_9);
        emailAddressText_label->setObjectName(QString::fromUtf8("emailAddressText_label"));
        emailAddressText_label->setGeometry(QRect(160, 150, 261, 21));
        emailAddressText_label->setFont(font8);
        accountCreatedDateTimeText_label = new QLabel(groupBox_9);
        accountCreatedDateTimeText_label->setObjectName(QString::fromUtf8("accountCreatedDateTimeText_label"));
        accountCreatedDateTimeText_label->setGeometry(QRect(170, 190, 251, 21));
        accountCreatedDateTimeText_label->setFont(font8);
        feedbackReport_tableView = new QTableView(REPORT);
        feedbackReport_tableView->setObjectName(QString::fromUtf8("feedbackReport_tableView"));
        feedbackReport_tableView->setGeometry(QRect(0, 290, 981, 301));
        noNewReportsAvailable_label = new QLabel(REPORT);
        noNewReportsAvailable_label->setObjectName(QString::fromUtf8("noNewReportsAvailable_label"));
        noNewReportsAvailable_label->setGeometry(QRect(400, 420, 191, 41));
        noNewReportsAvailable_label->setFont(font4);
        stackedWidget_admin_tabs->addWidget(REPORT);
        AdminAccountWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminAccountWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 22));
        AdminAccountWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminAccountWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AdminAccountWindow->setStatusBar(statusbar);

        retranslateUi(AdminAccountWindow);

        stackedWidget_admin_tabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdminAccountWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminAccountWindow)
    {
        AdminAccountWindow->setWindowTitle(QCoreApplication::translate("AdminAccountWindow", "MainWindow", nullptr));
        logout_pushButton->setText(QString());
        groupBox_2->setTitle(QString());
        profileImage_label_2->setText(QString());
        profileText_label->setText(QCoreApplication::translate("AdminAccountWindow", "DR. KIWY", nullptr));
        accountTypeText_label->setText(QCoreApplication::translate("AdminAccountWindow", "Account Type", nullptr));
        groupBox_4->setTitle(QString());
        pushButton_dashboard->setText(QString());
        pushButton_employee->setText(QString());
        pushButton_report->setText(QString());
        label_61->setText(QCoreApplication::translate("AdminAccountWindow", "DASHBOARD", nullptr));
        label_62->setText(QCoreApplication::translate("AdminAccountWindow", "EMPLOYEE", nullptr));
        label_63->setText(QCoreApplication::translate("AdminAccountWindow", "REPORT", nullptr));
        groupBox_3->setTitle(QString());
        label->setText(QCoreApplication::translate("AdminAccountWindow", "No of Standard User Accounts", nullptr));
        noOfStandardUserAccounts_label->setText(QCoreApplication::translate("AdminAccountWindow", "No of Standard User Accounts", nullptr));
        groupBox_5->setTitle(QString());
        label_2->setText(QCoreApplication::translate("AdminAccountWindow", "No of Standard User Accounts", nullptr));
        noOfPremiumUserAccounts_label->setText(QCoreApplication::translate("AdminAccountWindow", "No of Premium User Accounts", nullptr));
        groupBox_10->setTitle(QString());
        label_41->setText(QCoreApplication::translate("AdminAccountWindow", "Firstname", nullptr));
        label_47->setText(QCoreApplication::translate("AdminAccountWindow", "MIddlename", nullptr));
        label_49->setText(QCoreApplication::translate("AdminAccountWindow", "Lastname", nullptr));
        groupBox_12->setTitle(QString());
        register_pushButton->setText(QCoreApplication::translate("AdminAccountWindow", "REGISTER", nullptr));
#if QT_CONFIG(tooltip)
        firstName_lineEdit->setToolTip(QCoreApplication::translate("AdminAccountWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Enter First Name</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        middleName_lineEdit->setToolTip(QCoreApplication::translate("AdminAccountWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Enter Middle Name</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lastName_lineEdit->setToolTip(QCoreApplication::translate("AdminAccountWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Enter Last Name</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        emailAddress_lineEdit->setToolTip(QCoreApplication::translate("AdminAccountWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Enter Valid Email Address</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_42->setText(QCoreApplication::translate("AdminAccountWindow", "Email Address", nullptr));
#if QT_CONFIG(tooltip)
        password_lineEdit->setToolTip(QCoreApplication::translate("AdminAccountWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Enter Suitable Password</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#000000;\">Password Guidelines:</span></p><p align=\"center\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">Minimum of seven(7)characters</span></p><p align=\"center\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">Maximum of twenty(20)characters</span></p><p align=\"center\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">At least one uppercase letter</span></p><p align=\"center\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">At least one lowercase letter</span></p><p align=\"center\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">At least one numeric character</span></p><p align=\"center\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">At least one special character"
                        "</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_43->setText(QCoreApplication::translate("AdminAccountWindow", "Password", nullptr));
#if QT_CONFIG(tooltip)
        confirmPassword_lineEdit->setToolTip(QCoreApplication::translate("AdminAccountWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Re-enter Suitable Password</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#000000;\">Password Guidelines:</span></p><p align=\"center\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">Minimum of seven(7)characters</span></p><p align=\"center\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">Maximum of twenty(20)characters</span></p><p align=\"center\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">At least one uppercase letter</span></p><p align=\"center\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">At least one lowercase letter</span></p><p align=\"center\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">At least one numeric character</span></p><p align=\"center\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">At least one special charac"
                        "ter</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_44->setText(QCoreApplication::translate("AdminAccountWindow", "Confirm Password", nullptr));
#if QT_CONFIG(tooltip)
        accountType_comboBox->setToolTip(QCoreApplication::translate("AdminAccountWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Select Suitable Account Type</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        termsAndConditions_checkBox->setToolTip(QCoreApplication::translate("AdminAccountWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Review Terms and Conditions before Agreeing</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        termsAndConditions_checkBox->setText(QCoreApplication::translate("AdminAccountWindow", "I accept the Terms and Conditions", nullptr));
#if QT_CONFIG(tooltip)
        namePrefix_comboBox->setToolTip(QCoreApplication::translate("AdminAccountWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Select Suitable Account Type</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_45->setText(QCoreApplication::translate("AdminAccountWindow", "Name Prefix", nullptr));
        label_46->setText(QCoreApplication::translate("AdminAccountWindow", "Account Type", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("AdminAccountWindow", "ACCOUNT ACTIVITY", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("AdminAccountWindow", "ACCOUNT DETAILS", nullptr));
        label_11->setText(QCoreApplication::translate("AdminAccountWindow", "Name", nullptr));
        label_12->setText(QCoreApplication::translate("AdminAccountWindow", "Email Address", nullptr));
        label_13->setText(QCoreApplication::translate("AdminAccountWindow", "Account Created Date Time", nullptr));
        nameText_label->setText(QCoreApplication::translate("AdminAccountWindow", "Name", nullptr));
        emailAddressText_label->setText(QCoreApplication::translate("AdminAccountWindow", "Email Address", nullptr));
        accountCreatedDateTimeText_label->setText(QCoreApplication::translate("AdminAccountWindow", "Account Created Date Time", nullptr));
        noNewReportsAvailable_label->setText(QCoreApplication::translate("AdminAccountWindow", "No New Reports Available", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminAccountWindow: public Ui_AdminAccountWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINACCOUNTWINDOW_H

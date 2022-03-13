/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *logo;
    QFrame *frame;
    QLineEdit *password;
    QLineEdit *username;
    QPushButton *closeButton;
    QPushButton *btnLogin;
    QLabel *state;
    QLabel *label_9;
    QLabel *label_8;
    QComboBox *comboBox_department;
    QLabel *label;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(1050, 674);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(66, 66, 66, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(100, 100, 100, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(83, 83, 83, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(33, 33, 33, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(44, 44, 44, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        LoginWindow->setPalette(palette);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 460, 551, 161));
        QFont font;
        font.setFamilies({QString::fromUtf8("Aharoni")});
        font.setPointSize(100);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(66, 66, 66);"));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(880, 580, 143, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("AlfredDrake")});
        label_10->setFont(font1);
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setEnabled(true);
        logo->setGeometry(QRect(20, 10, 601, 601));
        logo->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.0113636, x2:0.5, y2:1, stop:0 rgba(102, 108, 228, 255), stop:1 rgba(93, 99, 221, 255));\n"
"border-radius: 30px;"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/img/workplace.jpg")));
        logo->setScaledContents(false);
        logo->setAlignment(Qt::AlignCenter);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(510, 50, 521, 521));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 246, 253);\n"
"border-radius: 30px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        password = new QLineEdit(frame);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(160, 240, 291, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Poppins Light")});
        password->setFont(font2);
        password->setStyleSheet(QString::fromUtf8("border-bottom: 2px solid rgb(93, 99, 221);\n"
"color: rgb(0, 0, 0);"));
        password->setEchoMode(QLineEdit::Password);
        username = new QLineEdit(frame);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(160, 170, 291, 41));
        username->setFont(font2);
        username->setStyleSheet(QString::fromUtf8("border-bottom: 2px solid rgb(93, 99, 221);\n"
"color: rgb(0, 0, 0);"));
        closeButton = new QPushButton(frame);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(490, 10, 21, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Poppins Black")});
        font3.setBold(true);
        closeButton->setFont(font3);
        closeButton->setCursor(QCursor(Qt::PointingHandCursor));
        closeButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);
        btnLogin = new QPushButton(frame);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(160, 370, 291, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Poppins")});
        font4.setPointSize(12);
        btnLogin->setFont(font4);
        btnLogin->setCursor(QCursor(Qt::PointingHandCursor));
        btnLogin->setStyleSheet(QString::fromUtf8("QPushButton#btnLogin {\n"
"background-color: rgb(102, 108, 228);\n"
"border-radius: 10px;\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton#btnLogin:hover {\n"
"background-color: rgb(79, 84, 188);\n"
"}"));
        state = new QLabel(frame);
        state->setObjectName(QString::fromUtf8("state"));
        state->setGeometry(QRect(90, 480, 421, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Poppins Medium")});
        state->setFont(font5);
        state->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);"));
        state->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(230, 80, 251, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Poppins Light")});
        font6.setPointSize(18);
        label_9->setFont(font6);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(121, 121, 121);"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(230, 30, 231, 71));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Poppins SemiBold")});
        font7.setPointSize(20);
        font7.setBold(true);
        label_8->setFont(font7);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        comboBox_department = new QComboBox(frame);
        comboBox_department->addItem(QString());
        comboBox_department->addItem(QString());
        comboBox_department->addItem(QString());
        comboBox_department->addItem(QString());
        comboBox_department->addItem(QString());
        comboBox_department->addItem(QString());
        comboBox_department->addItem(QString());
        comboBox_department->addItem(QString());
        comboBox_department->addItem(QString());
        comboBox_department->addItem(QString());
        comboBox_department->setObjectName(QString::fromUtf8("comboBox_department"));
        comboBox_department->setGeometry(QRect(160, 310, 291, 24));
        comboBox_department->setStyleSheet(QString::fromUtf8("border-bottom: 2px solid rgb(93, 99, 221);\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 40, 80, 80));
        QFont font8;
        font8.setBold(true);
        label->setFont(font8);
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/ucc.png")));
        label->setScaledContents(true);
        password->raise();
        username->raise();
        closeButton->raise();
        btnLogin->raise();
        state->raise();
        label_8->raise();
        label_9->raise();
        comboBox_department->raise();
        label->raise();
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 450, 551, 161));
        label_3->setFont(font);
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignCenter);
        LoginWindow->setCentralWidget(centralwidget);
        frame->raise();
        logo->raise();
        label_2->raise();
        label_10->raise();
        label_3->raise();
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1050, 22));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LoginWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(username, password);
        QWidget::setTabOrder(password, comboBox_department);
        QWidget::setTabOrder(comboBox_department, btnLogin);
        QWidget::setTabOrder(btnLogin, closeButton);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "AFYA HUB", nullptr));
        label_10->setText(QCoreApplication::translate("LoginWindow", "@KIWYMONZY 2021", nullptr));
        logo->setText(QString());
        password->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Enter password", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Enter username", nullptr));
#if QT_CONFIG(tooltip)
        closeButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        closeButton->setText(QString());
        btnLogin->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        state->setText(QString());
        label_9->setText(QCoreApplication::translate("LoginWindow", "Login to continue.", nullptr));
        label_8->setText(QCoreApplication::translate("LoginWindow", "Welcome back!", nullptr));
        comboBox_department->setItemText(0, QCoreApplication::translate("LoginWindow", "*** SELECT DEPARTMENT***", nullptr));
        comboBox_department->setItemText(1, QCoreApplication::translate("LoginWindow", "Billing", nullptr));
        comboBox_department->setItemText(2, QCoreApplication::translate("LoginWindow", "Doctor", nullptr));
        comboBox_department->setItemText(3, QCoreApplication::translate("LoginWindow", "Laboratory", nullptr));
        comboBox_department->setItemText(4, QCoreApplication::translate("LoginWindow", "Management", nullptr));
        comboBox_department->setItemText(5, QCoreApplication::translate("LoginWindow", "Nursing Station", nullptr));
        comboBox_department->setItemText(6, QCoreApplication::translate("LoginWindow", "Pharmcy", nullptr));
        comboBox_department->setItemText(7, QCoreApplication::translate("LoginWindow", "Radiology / Imaging", nullptr));
        comboBox_department->setItemText(8, QCoreApplication::translate("LoginWindow", "Reception", nullptr));
        comboBox_department->setItemText(9, QCoreApplication::translate("LoginWindow", "Store", nullptr));

        label->setText(QString());
        label_3->setText(QCoreApplication::translate("LoginWindow", "AFYA HUB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H

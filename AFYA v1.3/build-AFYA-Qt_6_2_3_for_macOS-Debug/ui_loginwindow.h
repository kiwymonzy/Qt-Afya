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
#include <QtWidgets/QCheckBox>
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
    QFrame *frame;
    QLineEdit *password_lineEdit;
    QLineEdit *emailAddress_lineEdit;
    QPushButton *login_pushButton;
    QLabel *label_10;
    QLabel *label_11;
    QCheckBox *showPassword_checkBox;
    QLabel *label;
    QPushButton *logout_pushButton;
    QLabel *bg;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(1000, 750);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(300, 80, 371, 491));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 146, 146);\n"
"border-radius: 30px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        password_lineEdit = new QLineEdit(frame);
        password_lineEdit->setObjectName(QString::fromUtf8("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(40, 330, 291, 41));
        QFont font;
        password_lineEdit->setFont(font);
        password_lineEdit->setStyleSheet(QString::fromUtf8("border-bottom: 2px solid rgb(250, 50, 0)  ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(235, 235, 235);\n"
"border-radius: 10px;"));
        password_lineEdit->setEchoMode(QLineEdit::Password);
        emailAddress_lineEdit = new QLineEdit(frame);
        emailAddress_lineEdit->setObjectName(QString::fromUtf8("emailAddress_lineEdit"));
        emailAddress_lineEdit->setGeometry(QRect(40, 270, 291, 41));
        emailAddress_lineEdit->setFont(font);
        emailAddress_lineEdit->setStyleSheet(QString::fromUtf8("border-bottom: 2px solid rgb(250, 50, 0)  ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(235, 235, 235);\n"
"border-radius: 10px;"));
        login_pushButton = new QPushButton(frame);
        login_pushButton->setObjectName(QString::fromUtf8("login_pushButton"));
        login_pushButton->setGeometry(QRect(40, 410, 291, 41));
        QFont font1;
        font1.setPointSize(12);
        login_pushButton->setFont(font1);
        login_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        login_pushButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(250, 50, 0);\n"
"border-radius: 5px;"));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 230, 251, 41));
        QFont font2;
        font2.setPointSize(18);
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(50, 170, 271, 71));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Agent Orange")});
        font3.setPointSize(40);
        font3.setBold(true);
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_11->setAlignment(Qt::AlignCenter);
        showPassword_checkBox = new QCheckBox(frame);
        showPassword_checkBox->setObjectName(QString::fromUtf8("showPassword_checkBox"));
        showPassword_checkBox->setGeometry(QRect(220, 380, 111, 17));
        QFont font4;
        font4.setPointSize(10);
        showPassword_checkBox->setFont(font4);
        showPassword_checkBox->setStyleSheet(QString::fromUtf8("color:#000"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 210, 160));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/png/32.png")));
        label->setScaledContents(true);
        label_10->raise();
        password_lineEdit->raise();
        emailAddress_lineEdit->raise();
        login_pushButton->raise();
        showPassword_checkBox->raise();
        label->raise();
        label_11->raise();
        logout_pushButton = new QPushButton(centralwidget);
        logout_pushButton->setObjectName(QString::fromUtf8("logout_pushButton"));
        logout_pushButton->setGeometry(QRect(910, 10, 74, 48));
        QFont font5;
        font5.setPointSize(13);
        logout_pushButton->setFont(font5);
        logout_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#logout_pushButton{\n"
"background-color: rgb(250, 50, 0);\n"
"border-radius: 24px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon/ICON_CLOSE.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout_pushButton->setIcon(icon);
        logout_pushButton->setIconSize(QSize(30, 30));
        bg = new QLabel(centralwidget);
        bg->setObjectName(QString::fromUtf8("bg"));
        bg->setEnabled(false);
        bg->setGeometry(QRect(0, 0, 1000, 750));
        bg->setPixmap(QPixmap(QString::fromUtf8(":/img/bg/05.png")));
        bg->setScaledContents(true);
        bg->setAlignment(Qt::AlignCenter);
        bg->setWordWrap(false);
        LoginWindow->setCentralWidget(centralwidget);
        bg->raise();
        frame->raise();
        logout_pushButton->raise();
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 22));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LoginWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(emailAddress_lineEdit, password_lineEdit);
        QWidget::setTabOrder(password_lineEdit, showPassword_checkBox);
        QWidget::setTabOrder(showPassword_checkBox, login_pushButton);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "MainWindow", nullptr));
        password_lineEdit->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Enter Password", nullptr));
        emailAddress_lineEdit->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Enter Email", nullptr));
        login_pushButton->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        label_10->setText(QCoreApplication::translate("LoginWindow", "Login to continue.", nullptr));
        label_11->setText(QCoreApplication::translate("LoginWindow", "AFYAHUB", nullptr));
        showPassword_checkBox->setText(QCoreApplication::translate("LoginWindow", "Show Password", nullptr));
        label->setText(QString());
        logout_pushButton->setText(QString());
        bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H

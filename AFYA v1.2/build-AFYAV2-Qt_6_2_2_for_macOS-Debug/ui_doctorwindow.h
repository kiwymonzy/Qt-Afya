/********************************************************************************
** Form generated from reading UI file 'doctorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORWINDOW_H
#define UI_DOCTORWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoctorWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *home;
    QLabel *label_12;
    QWidget *clearSheet;
    QLabel *label_7;
    QWidget *diagnosis;
    QLabel *label_6;
    QWidget *investigation;
    QLabel *label_8;
    QWidget *comfirmed;
    QLabel *label_9;
    QWidget *management;
    QLabel *label_10;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnDiagnosis;
    QLabel *label_4;
    QPushButton *btnComfirmed;
    QPushButton *btnHome;
    QLabel *label_14;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnInvestigation;
    QPushButton *btnManagement;
    QLabel *label_5;
    QPushButton *btnClerkSheet;
    QLabel *label;
    QPushButton *closeButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DoctorWindow)
    {
        if (DoctorWindow->objectName().isEmpty())
            DoctorWindow->setObjectName(QString::fromUtf8("DoctorWindow"));
        DoctorWindow->setWindowModality(Qt::WindowModal);
        DoctorWindow->resize(1050, 776);
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
        DoctorWindow->setPalette(palette);
        centralwidget = new QWidget(DoctorWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 100, 1031, 621));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 30px;"));
        home = new QWidget();
        home->setObjectName(QString::fromUtf8("home"));
        label_12 = new QLabel(home);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 0, 1031, 621));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/img/aboutApp.png")));
        stackedWidget->addWidget(home);
        clearSheet = new QWidget();
        clearSheet->setObjectName(QString::fromUtf8("clearSheet"));
        label_7 = new QLabel(clearSheet);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(260, 170, 481, 161));
        QFont font;
        font.setPointSize(50);
        font.setBold(true);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(clearSheet);
        diagnosis = new QWidget();
        diagnosis->setObjectName(QString::fromUtf8("diagnosis"));
        label_6 = new QLabel(diagnosis);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 170, 481, 161));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(diagnosis);
        investigation = new QWidget();
        investigation->setObjectName(QString::fromUtf8("investigation"));
        label_8 = new QLabel(investigation);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(260, 170, 481, 161));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(investigation);
        comfirmed = new QWidget();
        comfirmed->setObjectName(QString::fromUtf8("comfirmed"));
        label_9 = new QLabel(comfirmed);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(260, 170, 481, 161));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(comfirmed);
        management = new QWidget();
        management->setObjectName(QString::fromUtf8("management"));
        label_10 = new QLabel(management);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(260, 170, 481, 161));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(management);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(29, 10, 961, 71));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnDiagnosis = new QPushButton(layoutWidget);
        btnDiagnosis->setObjectName(QString::fromUtf8("btnDiagnosis"));
        btnDiagnosis->setCursor(QCursor(Qt::PointingHandCursor));
        btnDiagnosis->setStyleSheet(QString::fromUtf8("QPushButton#btnDiagnosis:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/calendar.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnDiagnosis->setIcon(icon);
        btnDiagnosis->setIconSize(QSize(33, 33));
        btnDiagnosis->setFlat(true);

        gridLayout->addWidget(btnDiagnosis, 0, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        btnComfirmed = new QPushButton(layoutWidget);
        btnComfirmed->setObjectName(QString::fromUtf8("btnComfirmed"));
        btnComfirmed->setCursor(QCursor(Qt::PointingHandCursor));
        btnComfirmed->setStyleSheet(QString::fromUtf8("QPushButton#btnComfirmed:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/video-camera.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnComfirmed->setIcon(icon1);
        btnComfirmed->setIconSize(QSize(40, 40));
        btnComfirmed->setFlat(true);

        gridLayout->addWidget(btnComfirmed, 0, 4, 1, 1);

        btnHome = new QPushButton(layoutWidget);
        btnHome->setObjectName(QString::fromUtf8("btnHome"));
        btnHome->setCursor(QCursor(Qt::PointingHandCursor));
        btnHome->setStyleSheet(QString::fromUtf8("QPushButton#btnHome:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnHome->setIcon(icon2);
        btnHome->setIconSize(QSize(40, 40));
        btnHome->setFlat(true);

        gridLayout->addWidget(btnHome, 0, 0, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_14, 1, 4, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        btnInvestigation = new QPushButton(layoutWidget);
        btnInvestigation->setObjectName(QString::fromUtf8("btnInvestigation"));
        btnInvestigation->setCursor(QCursor(Qt::PointingHandCursor));
        btnInvestigation->setStyleSheet(QString::fromUtf8("QPushButton#btnInvestigation:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"}"));
        btnInvestigation->setIcon(icon1);
        btnInvestigation->setIconSize(QSize(40, 40));
        btnInvestigation->setFlat(true);

        gridLayout->addWidget(btnInvestigation, 0, 3, 1, 1);

        btnManagement = new QPushButton(layoutWidget);
        btnManagement->setObjectName(QString::fromUtf8("btnManagement"));
        btnManagement->setCursor(QCursor(Qt::PointingHandCursor));
        btnManagement->setStyleSheet(QString::fromUtf8("QPushButton#btnManagement:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnManagement->setIcon(icon3);
        btnManagement->setIconSize(QSize(40, 40));
        btnManagement->setFlat(true);

        gridLayout->addWidget(btnManagement, 0, 5, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 1, 5, 1, 1);

        btnClerkSheet = new QPushButton(layoutWidget);
        btnClerkSheet->setObjectName(QString::fromUtf8("btnClerkSheet"));
        btnClerkSheet->setCursor(QCursor(Qt::PointingHandCursor));
        btnClerkSheet->setStyleSheet(QString::fromUtf8("QPushButton#btnClerkSheet:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/chat.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnClerkSheet->setIcon(icon4);
        btnClerkSheet->setIconSize(QSize(33, 33));
        btnClerkSheet->setFlat(true);

        gridLayout->addWidget(btnClerkSheet, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(990, 0, 50, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Poppins Black")});
        font1.setBold(true);
        closeButton->setFont(font1);
        closeButton->setCursor(QCursor(Qt::PointingHandCursor));
        closeButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon5);
        DoctorWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DoctorWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1050, 22));
        DoctorWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DoctorWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DoctorWindow->setStatusBar(statusbar);

        retranslateUi(DoctorWindow);

        stackedWidget->setCurrentIndex(1);
        btnClerkSheet->setDefault(true);


        QMetaObject::connectSlotsByName(DoctorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DoctorWindow)
    {
        DoctorWindow->setWindowTitle(QCoreApplication::translate("DoctorWindow", "MainWindow", nullptr));
        label_12->setText(QString());
        label_7->setText(QCoreApplication::translate("DoctorWindow", "<html><head/><body><p><span style=\" color:#0096ff;\">CLERK SHEET</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("DoctorWindow", "<html><head/><body><p><span style=\" color:#0096ff;\">DIAGNOSIS</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("DoctorWindow", "<html><head/><body><p><span style=\" color:#0096ff;\">INVESTIGATION</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("DoctorWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#0096ff;\">COMFIRMED</span></p><p align=\"center\"><span style=\" color:#0096ff;\">INVESTIGATION</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("DoctorWindow", "<html><head/><body><p><span style=\" color:#0096ff;\">MANAGEMENT</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        btnDiagnosis->setToolTip(QCoreApplication::translate("DoctorWindow", "Qu\341\272\243n l\303\275 th\341\273\235i gian bi\341\273\203u", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDiagnosis->setText(QString());
        label_4->setText(QCoreApplication::translate("DoctorWindow", "INVESTIGATION", nullptr));
#if QT_CONFIG(tooltip)
        btnComfirmed->setToolTip(QCoreApplication::translate("DoctorWindow", "Tr\303\262 chuy\341\273\207n qua video", nullptr));
#endif // QT_CONFIG(tooltip)
        btnComfirmed->setText(QString());
#if QT_CONFIG(tooltip)
        btnHome->setToolTip(QCoreApplication::translate("DoctorWindow", "Qu\341\272\243n l\303\275 c\303\241c d\341\273\261 \303\241n", nullptr));
#endif // QT_CONFIG(tooltip)
        btnHome->setText(QString());
        label_14->setText(QCoreApplication::translate("DoctorWindow", "COMFIRMED INVESTIGATION", nullptr));
        label_2->setText(QCoreApplication::translate("DoctorWindow", "CLERK SHEET", nullptr));
        label_3->setText(QCoreApplication::translate("DoctorWindow", "DIAGNOSIS", nullptr));
#if QT_CONFIG(tooltip)
        btnInvestigation->setToolTip(QCoreApplication::translate("DoctorWindow", "Tr\303\262 chuy\341\273\207n qua video", nullptr));
#endif // QT_CONFIG(tooltip)
        btnInvestigation->setText(QString());
#if QT_CONFIG(tooltip)
        btnManagement->setToolTip(QCoreApplication::translate("DoctorWindow", "Qu\341\272\243n l\303\275 th\303\264ng tin th\303\240nh vi\303\252n", nullptr));
#endif // QT_CONFIG(tooltip)
        btnManagement->setText(QString());
        label_5->setText(QCoreApplication::translate("DoctorWindow", "MANAGEMENT", nullptr));
#if QT_CONFIG(tooltip)
        btnClerkSheet->setToolTip(QCoreApplication::translate("DoctorWindow", "Tr\303\262 chuy\341\273\207n v\341\273\233i c\303\241c th\303\240nh vi\303\252n", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClerkSheet->setText(QString());
        label->setText(QCoreApplication::translate("DoctorWindow", "HOME", nullptr));
#if QT_CONFIG(tooltip)
        closeButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        closeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DoctorWindow: public Ui_DoctorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORWINDOW_H

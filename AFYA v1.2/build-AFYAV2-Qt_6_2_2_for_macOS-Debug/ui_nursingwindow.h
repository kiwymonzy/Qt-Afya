/********************************************************************************
** Form generated from reading UI file 'nursingwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NURSINGWINDOW_H
#define UI_NURSINGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NursingWindow
{
public:
    QWidget *centralwidget;
    QPushButton *closeButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnHome;
    QLabel *label;
    QPushButton *btnList;
    QLabel *label_3;
    QPushButton *btnInventory;
    QLabel *label_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *frame_16;
    QLineEdit *searchReOut;
    QPushButton *btnSearchPatient_3;
    QListView *listViewReOut;
    QFrame *frame_17;
    QLineEdit *firstnameReOut;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *cardReOut;
    QLineEdit *ageReOut;
    QLabel *label_27;
    QLineEdit *heightReOut;
    QLabel *label_31;
    QLineEdit *weightReOut;
    QLabel *label_32;
    QFrame *frame_18;
    QFrame *frame;
    QLabel *label_21;
    QLabel *label_15;
    QLineEdit *pressure;
    QFrame *frame_2;
    QLabel *label_29;
    QLabel *label_16;
    QLineEdit *temperature;
    QFrame *frame_3;
    QLabel *label_30;
    QLabel *label_17;
    QLineEdit *pulserate;
    QFrame *frame_4;
    QLabel *label_7;
    QLabel *label_18;
    QLineEdit *weight;
    QFrame *frame_5;
    QLabel *label_8;
    QLabel *label_19;
    QLineEdit *height;
    QFrame *frame_6;
    QLabel *label_20;
    QLabel *label_9;
    QLineEdit *massindex;
    QFrame *frame_7;
    QLabel *label_10;
    QLineEdit *masscomment;
    QFrame *frame_8;
    QLabel *label_22;
    QLabel *label_11;
    QLineEdit *surfacearea;
    QFrame *frame_9;
    QLabel *label_23;
    QLabel *label_12;
    QLineEdit *oxygen;
    QFrame *frame_10;
    QLabel *label_13;
    QLabel *label_24;
    QLineEdit *respiratoryrate;
    QLabel *label_14;
    QPushButton *btnNurseClear;
    QPushButton *btnNurseSave;
    QLabel *label_33;
    QTextEdit *otherexams;
    QWidget *page_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QFrame *frame_20;
    QLineEdit *searchReOut_3;
    QPushButton *btnSearchPatient_5;
    QListView *listViewReOut_3;
    QWidget *tab_4;
    QFrame *frame_19;
    QLineEdit *searchReOut_2;
    QPushButton *btnSearchPatient_4;
    QListView *listViewReOut_2;
    QWidget *page_3;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QFrame *frame_21;
    QLineEdit *searchReOut_4;
    QPushButton *btnSearchPatient_6;
    QListView *listViewReOut_4;
    QLabel *label_2;
    QPushButton *btnNurseORDER;
    QFrame *frame_12;
    QLabel *label_item;
    QLineEdit *quantity;
    QLabel *label_36;
    QWidget *tab_6;
    QWidget *tab_2;
    QWidget *tab_7;
    QWidget *tab_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NursingWindow)
    {
        if (NursingWindow->objectName().isEmpty())
            NursingWindow->setObjectName(QString::fromUtf8("NursingWindow"));
        NursingWindow->setWindowModality(Qt::WindowModal);
        NursingWindow->resize(1050, 776);
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
        NursingWindow->setPalette(palette);
        centralwidget = new QWidget(NursingWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(990, 0, 50, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Poppins Black")});
        font.setBold(true);
        closeButton->setFont(font);
        closeButton->setCursor(QCursor(Qt::PointingHandCursor));
        closeButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 10, 601, 81));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnHome = new QPushButton(layoutWidget);
        btnHome->setObjectName(QString::fromUtf8("btnHome"));
        btnHome->setCursor(QCursor(Qt::PointingHandCursor));
        btnHome->setStyleSheet(QString::fromUtf8("QPushButton#btnHome:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnHome->setIcon(icon1);
        btnHome->setIconSize(QSize(40, 40));
        btnHome->setFlat(true);

        gridLayout->addWidget(btnHome, 0, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        btnList = new QPushButton(layoutWidget);
        btnList->setObjectName(QString::fromUtf8("btnList"));
        btnList->setCursor(QCursor(Qt::PointingHandCursor));
        btnList->setStyleSheet(QString::fromUtf8("QPushButton#btnList:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/calendar.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnList->setIcon(icon2);
        btnList->setIconSize(QSize(33, 33));
        btnList->setFlat(true);

        gridLayout->addWidget(btnList, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        btnInventory = new QPushButton(layoutWidget);
        btnInventory->setObjectName(QString::fromUtf8("btnInventory"));
        btnInventory->setCursor(QCursor(Qt::PointingHandCursor));
        btnInventory->setStyleSheet(QString::fromUtf8("QPushButton#btnInventory:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnInventory->setIcon(icon3);
        btnInventory->setIconSize(QSize(33, 33));
        btnInventory->setFlat(true);

        gridLayout->addWidget(btnInventory, 0, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 100, 1031, 621));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 246, 253);\n"
"border-radius: 30px;"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1021, 591));
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        font1.setKerning(true);
        tabWidget->setFont(font1);
        tabWidget->setFocusPolicy(Qt::TabFocus);
        tabWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        tabWidget->setStyleSheet(QString::fromUtf8("color: rgb(66, 66, 66);"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(30, 30));
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        frame_16 = new QFrame(tab);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setGeometry(QRect(10, 10, 281, 471));
        frame_16->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
"background-color: rgb(214, 214, 214);"));
        searchReOut = new QLineEdit(frame_16);
        searchReOut->setObjectName(QString::fromUtf8("searchReOut"));
        searchReOut->setGeometry(QRect(10, 10, 201, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Piximisa")});
        font2.setPointSize(20);
        searchReOut->setFont(font2);
        searchReOut->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border : 1px solid rgb(14, 188, 157);\n"
"color: rgb(145, 145, 145);"));
        searchReOut->setAlignment(Qt::AlignCenter);
        searchReOut->setClearButtonEnabled(true);
        btnSearchPatient_3 = new QPushButton(frame_16);
        btnSearchPatient_3->setObjectName(QString::fromUtf8("btnSearchPatient_3"));
        btnSearchPatient_3->setGeometry(QRect(210, 10, 61, 41));
        btnSearchPatient_3->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/paper-plane.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnSearchPatient_3->setIcon(icon4);
        btnSearchPatient_3->setIconSize(QSize(42, 42));
        btnSearchPatient_3->setFlat(true);
        listViewReOut = new QListView(frame_16);
        listViewReOut->setObjectName(QString::fromUtf8("listViewReOut"));
        listViewReOut->setGeometry(QRect(10, 60, 261, 401));
        listViewReOut->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        frame_17 = new QFrame(tab);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setGeometry(QRect(300, 10, 271, 181));
        frame_17->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        firstnameReOut = new QLineEdit(frame_17);
        firstnameReOut->setObjectName(QString::fromUtf8("firstnameReOut"));
        firstnameReOut->setGeometry(QRect(10, 30, 181, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Poppins")});
        font3.setPointSize(10);
        firstnameReOut->setFont(font3);
        firstnameReOut->setCursor(QCursor(Qt::ForbiddenCursor));
        firstnameReOut->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        firstnameReOut->setAlignment(Qt::AlignCenter);
        firstnameReOut->setReadOnly(true);
        label_25 = new QLabel(frame_17);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 10, 111, 21));
        label_25->setFont(font3);
        label_25->setStyleSheet(QString::fromUtf8(""));
        label_26 = new QLabel(frame_17);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(70, 60, 61, 21));
        label_26->setFont(font3);
        label_26->setStyleSheet(QString::fromUtf8(""));
        cardReOut = new QLineEdit(frame_17);
        cardReOut->setObjectName(QString::fromUtf8("cardReOut"));
        cardReOut->setGeometry(QRect(70, 80, 121, 31));
        cardReOut->setFont(font3);
        cardReOut->setCursor(QCursor(Qt::ForbiddenCursor));
        cardReOut->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        cardReOut->setAlignment(Qt::AlignCenter);
        cardReOut->setReadOnly(true);
        ageReOut = new QLineEdit(frame_17);
        ageReOut->setObjectName(QString::fromUtf8("ageReOut"));
        ageReOut->setGeometry(QRect(10, 80, 51, 31));
        ageReOut->setFont(font3);
        ageReOut->setCursor(QCursor(Qt::ForbiddenCursor));
        ageReOut->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        ageReOut->setAlignment(Qt::AlignCenter);
        ageReOut->setReadOnly(true);
        label_27 = new QLabel(frame_17);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 60, 31, 21));
        label_27->setFont(font3);
        label_27->setStyleSheet(QString::fromUtf8(""));
        heightReOut = new QLineEdit(frame_17);
        heightReOut->setObjectName(QString::fromUtf8("heightReOut"));
        heightReOut->setGeometry(QRect(90, 130, 71, 31));
        heightReOut->setFont(font3);
        heightReOut->setCursor(QCursor(Qt::ForbiddenCursor));
        heightReOut->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        heightReOut->setAlignment(Qt::AlignCenter);
        heightReOut->setReadOnly(true);
        label_31 = new QLabel(frame_17);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(90, 110, 71, 21));
        label_31->setFont(font3);
        label_31->setStyleSheet(QString::fromUtf8(""));
        weightReOut = new QLineEdit(frame_17);
        weightReOut->setObjectName(QString::fromUtf8("weightReOut"));
        weightReOut->setGeometry(QRect(10, 130, 71, 31));
        weightReOut->setFont(font3);
        weightReOut->setCursor(QCursor(Qt::ForbiddenCursor));
        weightReOut->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        weightReOut->setAlignment(Qt::AlignCenter);
        weightReOut->setReadOnly(true);
        label_32 = new QLabel(frame_17);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(10, 110, 71, 21));
        label_32->setFont(font3);
        label_32->setStyleSheet(QString::fromUtf8(""));
        firstnameReOut->raise();
        label_25->raise();
        label_26->raise();
        ageReOut->raise();
        label_27->raise();
        label_31->raise();
        label_32->raise();
        cardReOut->raise();
        heightReOut->raise();
        weightReOut->raise();
        frame_18 = new QFrame(tab);
        frame_18->setObjectName(QString::fromUtf8("frame_18"));
        frame_18->setGeometry(QRect(500, 10, 391, 511));
        frame_18->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_18);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 30, 371, 31));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 221, 213);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_21 = new QLabel(frame);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 5, 78, 21));
        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(300, 0, 45, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Poppins")});
        label_15->setFont(font4);
        label_15->setStyleSheet(QString::fromUtf8(""));
        pressure = new QLineEdit(frame);
        pressure->setObjectName(QString::fromUtf8("pressure"));
        pressure->setGeometry(QRect(170, 0, 113, 31));
        pressure->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        pressure->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(frame_18);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 70, 371, 31));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 214, 214);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_29 = new QLabel(frame_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(10, 5, 101, 21));
        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(300, 0, 20, 31));
        label_16->setFont(font4);
        label_16->setStyleSheet(QString::fromUtf8(""));
        temperature = new QLineEdit(frame_2);
        temperature->setObjectName(QString::fromUtf8("temperature"));
        temperature->setGeometry(QRect(170, 0, 113, 31));
        temperature->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        temperature->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(frame_18);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 110, 371, 31));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 221, 213);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_30 = new QLabel(frame_3);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(10, 0, 78, 31));
        label_17 = new QLabel(frame_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(300, 0, 40, 31));
        label_17->setFont(font4);
        label_17->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        pulserate = new QLineEdit(frame_3);
        pulserate->setObjectName(QString::fromUtf8("pulserate"));
        pulserate->setGeometry(QRect(170, 0, 113, 31));
        pulserate->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        pulserate->setAlignment(Qt::AlignCenter);
        frame_4 = new QFrame(frame_18);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(10, 150, 371, 31));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 214, 214);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, -2, 70, 31));
        label_7->setFont(font4);
        label_18 = new QLabel(frame_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(300, -2, 20, 31));
        label_18->setFont(font4);
        weight = new QLineEdit(frame_4);
        weight->setObjectName(QString::fromUtf8("weight"));
        weight->setGeometry(QRect(170, 0, 113, 31));
        weight->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        weight->setAlignment(Qt::AlignCenter);
        frame_5 = new QFrame(frame_18);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(10, 190, 371, 31));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 221, 213);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, -2, 62, 31));
        label_8->setFont(font4);
        label_19 = new QLabel(frame_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(300, -2, 20, 31));
        label_19->setFont(font4);
        height = new QLineEdit(frame_5);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(170, 0, 113, 31));
        height->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        height->setAlignment(Qt::AlignCenter);
        frame_6 = new QFrame(frame_18);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(10, 230, 371, 31));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 214, 214);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        label_20 = new QLabel(frame_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(300, -1, 40, 31));
        label_20->setFont(font4);
        label_9 = new QLabel(frame_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, -1, 144, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Poppins")});
        font5.setKerning(false);
        label_9->setFont(font5);
        massindex = new QLineEdit(frame_6);
        massindex->setObjectName(QString::fromUtf8("massindex"));
        massindex->setGeometry(QRect(170, 0, 113, 31));
        massindex->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        massindex->setAlignment(Qt::AlignCenter);
        frame_7 = new QFrame(frame_18);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(10, 270, 371, 31));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 221, 213);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(frame_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, -2, 140, 31));
        label_10->setFont(font4);
        masscomment = new QLineEdit(frame_7);
        masscomment->setObjectName(QString::fromUtf8("masscomment"));
        masscomment->setGeometry(QRect(170, 0, 113, 31));
        masscomment->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        masscomment->setAlignment(Qt::AlignCenter);
        frame_8 = new QFrame(frame_18);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(10, 310, 371, 31));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 214, 214);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_22 = new QLabel(frame_8);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(300, -2, 37, 31));
        label_22->setFont(font4);
        label_11 = new QLabel(frame_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, -2, 121, 31));
        label_11->setFont(font4);
        surfacearea = new QLineEdit(frame_8);
        surfacearea->setObjectName(QString::fromUtf8("surfacearea"));
        surfacearea->setGeometry(QRect(170, 0, 113, 31));
        surfacearea->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        surfacearea->setAlignment(Qt::AlignCenter);
        frame_9 = new QFrame(frame_18);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(10, 350, 371, 31));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 221, 213);"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        label_23 = new QLabel(frame_9);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(300, 0, 21, 31));
        label_23->setFont(font4);
        label_12 = new QLabel(frame_9);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, -2, 136, 31));
        label_12->setFont(font4);
        oxygen = new QLineEdit(frame_9);
        oxygen->setObjectName(QString::fromUtf8("oxygen"));
        oxygen->setGeometry(QRect(170, 0, 113, 31));
        oxygen->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        oxygen->setAlignment(Qt::AlignCenter);
        frame_10 = new QFrame(frame_18);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(10, 390, 371, 31));
        frame_10->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 214, 214);"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        label_13 = new QLabel(frame_10);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, -2, 129, 31));
        label_13->setFont(font4);
        label_24 = new QLabel(frame_10);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(300, 0, 66, 31));
        label_24->setFont(font4);
        respiratoryrate = new QLineEdit(frame_10);
        respiratoryrate->setObjectName(QString::fromUtf8("respiratoryrate"));
        respiratoryrate->setGeometry(QRect(170, 0, 113, 31));
        respiratoryrate->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        respiratoryrate->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(frame_18);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 420, 144, 19));
        label_14->setFont(font4);
        btnNurseClear = new QPushButton(frame_18);
        btnNurseClear->setObjectName(QString::fromUtf8("btnNurseClear"));
        btnNurseClear->setGeometry(QRect(310, 440, 71, 51));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Poppins SemiBold")});
        font6.setBold(true);
        btnNurseClear->setFont(font6);
        btnNurseClear->setCursor(QCursor(Qt::PointingHandCursor));
        btnNurseClear->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 38, 0);\n"
"border-radius: 7px;\n"
"color: rgb(0, 0, 0);"));
        btnNurseSave = new QPushButton(frame_18);
        btnNurseSave->setObjectName(QString::fromUtf8("btnNurseSave"));
        btnNurseSave->setGeometry(QRect(230, 440, 71, 51));
        btnNurseSave->setFont(font6);
        btnNurseSave->setCursor(QCursor(Qt::PointingHandCursor));
        btnNurseSave->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 50, 0);\n"
"border-radius: 7px;\n"
"color: rgb(0, 0, 0);"));
        label_33 = new QLabel(frame_18);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(110, 0, 191, 19));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Poppins")});
        font7.setBold(true);
        label_33->setFont(font7);
        label_33->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 147, 0);"));
        label_33->setAlignment(Qt::AlignCenter);
        otherexams = new QTextEdit(frame_18);
        otherexams->setObjectName(QString::fromUtf8("otherexams"));
        otherexams->setGeometry(QRect(20, 440, 201, 61));
        otherexams->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(214, 214, 214);\n"
"border : 1px solid rgb(14, 188, 157);"));
        label_14->raise();
        frame_6->raise();
        frame_7->raise();
        frame_8->raise();
        frame_9->raise();
        frame_10->raise();
        frame_5->raise();
        frame_4->raise();
        frame_2->raise();
        frame_3->raise();
        frame->raise();
        btnNurseClear->raise();
        btnNurseSave->raise();
        label_33->raise();
        otherexams->raise();
        tabWidget->addTab(tab, QString());
        frame_17->raise();
        frame_18->raise();
        frame_16->raise();
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tabWidget_2 = new QTabWidget(page_2);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 1031, 611));
        QFont font8;
        font8.setPointSize(20);
        font8.setBold(true);
        font8.setKerning(true);
        tabWidget_2->setFont(font8);
        tabWidget_2->setFocusPolicy(Qt::TabFocus);
        tabWidget_2->setContextMenuPolicy(Qt::ActionsContextMenu);
        tabWidget_2->setStyleSheet(QString::fromUtf8("color: rgb(66, 66, 66);"));
        tabWidget_2->setTabPosition(QTabWidget::North);
        tabWidget_2->setTabShape(QTabWidget::Rounded);
        tabWidget_2->setIconSize(QSize(30, 30));
        tabWidget_2->setElideMode(Qt::ElideNone);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        frame_20 = new QFrame(tab_3);
        frame_20->setObjectName(QString::fromUtf8("frame_20"));
        frame_20->setGeometry(QRect(10, 10, 281, 471));
        frame_20->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
"background-color: rgb(214, 214, 214);"));
        searchReOut_3 = new QLineEdit(frame_20);
        searchReOut_3->setObjectName(QString::fromUtf8("searchReOut_3"));
        searchReOut_3->setGeometry(QRect(10, 10, 201, 41));
        searchReOut_3->setFont(font2);
        searchReOut_3->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border : 1px solid rgb(14, 188, 157);\n"
"color: rgb(145, 145, 145);"));
        searchReOut_3->setAlignment(Qt::AlignCenter);
        searchReOut_3->setClearButtonEnabled(true);
        btnSearchPatient_5 = new QPushButton(frame_20);
        btnSearchPatient_5->setObjectName(QString::fromUtf8("btnSearchPatient_5"));
        btnSearchPatient_5->setGeometry(QRect(210, 10, 61, 41));
        btnSearchPatient_5->setCursor(QCursor(Qt::PointingHandCursor));
        btnSearchPatient_5->setIcon(icon4);
        btnSearchPatient_5->setIconSize(QSize(42, 42));
        btnSearchPatient_5->setFlat(true);
        listViewReOut_3 = new QListView(frame_20);
        listViewReOut_3->setObjectName(QString::fromUtf8("listViewReOut_3"));
        listViewReOut_3->setGeometry(QRect(10, 60, 261, 401));
        listViewReOut_3->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        frame_19 = new QFrame(tab_4);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setGeometry(QRect(10, 10, 281, 471));
        frame_19->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
"background-color: rgb(214, 214, 214);"));
        searchReOut_2 = new QLineEdit(frame_19);
        searchReOut_2->setObjectName(QString::fromUtf8("searchReOut_2"));
        searchReOut_2->setGeometry(QRect(10, 10, 201, 41));
        searchReOut_2->setFont(font2);
        searchReOut_2->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border : 1px solid rgb(14, 188, 157);\n"
"color: rgb(145, 145, 145);"));
        searchReOut_2->setAlignment(Qt::AlignCenter);
        searchReOut_2->setClearButtonEnabled(true);
        btnSearchPatient_4 = new QPushButton(frame_19);
        btnSearchPatient_4->setObjectName(QString::fromUtf8("btnSearchPatient_4"));
        btnSearchPatient_4->setGeometry(QRect(210, 10, 61, 41));
        btnSearchPatient_4->setCursor(QCursor(Qt::PointingHandCursor));
        btnSearchPatient_4->setIcon(icon4);
        btnSearchPatient_4->setIconSize(QSize(42, 42));
        btnSearchPatient_4->setFlat(true);
        listViewReOut_2 = new QListView(frame_19);
        listViewReOut_2->setObjectName(QString::fromUtf8("listViewReOut_2"));
        listViewReOut_2->setGeometry(QRect(10, 60, 261, 401));
        listViewReOut_2->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        btnSearchPatient_4->raise();
        listViewReOut_2->raise();
        searchReOut_2->raise();
        tabWidget_2->addTab(tab_4, QString());
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        tabWidget_3 = new QTabWidget(page_3);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 1031, 631));
        tabWidget_3->setFont(font8);
        tabWidget_3->setFocusPolicy(Qt::TabFocus);
        tabWidget_3->setContextMenuPolicy(Qt::ActionsContextMenu);
        tabWidget_3->setStyleSheet(QString::fromUtf8("color: rgb(66, 66, 66);"));
        tabWidget_3->setTabPosition(QTabWidget::North);
        tabWidget_3->setTabShape(QTabWidget::Rounded);
        tabWidget_3->setIconSize(QSize(30, 30));
        tabWidget_3->setElideMode(Qt::ElideNone);
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        frame_21 = new QFrame(tab_5);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        frame_21->setGeometry(QRect(0, 0, 361, 591));
        frame_21->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 214, 214);"));
        searchReOut_4 = new QLineEdit(frame_21);
        searchReOut_4->setObjectName(QString::fromUtf8("searchReOut_4"));
        searchReOut_4->setGeometry(QRect(10, 30, 261, 41));
        searchReOut_4->setFont(font2);
        searchReOut_4->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border : 1px solid rgb(14, 188, 157);\n"
"color: rgb(145, 145, 145);"));
        searchReOut_4->setAlignment(Qt::AlignCenter);
        searchReOut_4->setClearButtonEnabled(true);
        btnSearchPatient_6 = new QPushButton(frame_21);
        btnSearchPatient_6->setObjectName(QString::fromUtf8("btnSearchPatient_6"));
        btnSearchPatient_6->setGeometry(QRect(270, 30, 61, 41));
        btnSearchPatient_6->setCursor(QCursor(Qt::PointingHandCursor));
        btnSearchPatient_6->setIcon(icon4);
        btnSearchPatient_6->setIconSize(QSize(42, 42));
        btnSearchPatient_6->setFlat(true);
        listViewReOut_4 = new QListView(frame_21);
        listViewReOut_4->setObjectName(QString::fromUtf8("listViewReOut_4"));
        listViewReOut_4->setGeometry(QRect(0, 80, 351, 501));
        listViewReOut_4->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        label_2 = new QLabel(frame_21);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 0, 311, 31));
        QFont font9;
        font9.setPointSize(12);
        font9.setBold(true);
        label_2->setFont(font9);
        listViewReOut_4->raise();
        label_2->raise();
        btnSearchPatient_6->raise();
        searchReOut_4->raise();
        btnNurseORDER = new QPushButton(tab_5);
        btnNurseORDER->setObjectName(QString::fromUtf8("btnNurseORDER"));
        btnNurseORDER->setGeometry(QRect(820, 160, 91, 61));
        btnNurseORDER->setFont(font6);
        btnNurseORDER->setCursor(QCursor(Qt::PointingHandCursor));
        btnNurseORDER->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 221, 213);\n"
"border-radius: 7px;\n"
"color: rgb(0, 0, 0);"));
        frame_12 = new QFrame(tab_5);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setGeometry(QRect(390, 140, 421, 91));
        frame_12->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);\n"
"color: rgb(255, 255, 255);"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        label_item = new QLabel(frame_12);
        label_item->setObjectName(QString::fromUtf8("label_item"));
        label_item->setGeometry(QRect(10, 20, 321, 51));
        QFont font10;
        font10.setPointSize(9);
        label_item->setFont(font10);
        label_item->setAlignment(Qt::AlignCenter);
        quantity = new QLineEdit(frame_12);
        quantity->setObjectName(QString::fromUtf8("quantity"));
        quantity->setGeometry(QRect(340, 30, 61, 51));
        quantity->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(146, 146, 146);\n"
"border : 1px solid rgb(14, 188, 157);"));
        quantity->setAlignment(Qt::AlignCenter);
        label_36 = new QLabel(frame_12);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(350, 10, 48, 11));
        label_36->setFont(font10);
        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget_3->addTab(tab_6, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget_3->addTab(tab_2, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tabWidget_3->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget_3->addTab(tab_8, QString());
        stackedWidget->addWidget(page_3);
        NursingWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NursingWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1050, 22));
        NursingWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(NursingWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NursingWindow->setStatusBar(statusbar);

        retranslateUi(NursingWindow);

        btnInventory->setDefault(true);
        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(NursingWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NursingWindow)
    {
        NursingWindow->setWindowTitle(QCoreApplication::translate("NursingWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        closeButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        closeButton->setText(QString());
#if QT_CONFIG(tooltip)
        btnHome->setToolTip(QCoreApplication::translate("NursingWindow", "Qu\341\272\243n l\303\275 c\303\241c d\341\273\261 \303\241n", nullptr));
#endif // QT_CONFIG(tooltip)
        btnHome->setText(QString());
        label->setText(QCoreApplication::translate("NursingWindow", "HOME", nullptr));
#if QT_CONFIG(tooltip)
        btnList->setToolTip(QCoreApplication::translate("NursingWindow", "Qu\341\272\243n l\303\275 th\341\273\235i gian bi\341\273\203u", nullptr));
#endif // QT_CONFIG(tooltip)
        btnList->setText(QString());
        label_3->setText(QCoreApplication::translate("NursingWindow", "LIST", nullptr));
#if QT_CONFIG(tooltip)
        btnInventory->setToolTip(QCoreApplication::translate("NursingWindow", "Tr\303\262 chuy\341\273\207n v\341\273\233i c\303\241c th\303\240nh vi\303\252n", nullptr));
#endif // QT_CONFIG(tooltip)
        btnInventory->setText(QString());
        label_4->setText(QCoreApplication::translate("NursingWindow", "INVENTORY", nullptr));
        searchReOut->setPlaceholderText(QCoreApplication::translate("NursingWindow", "Search Patient", nullptr));
        btnSearchPatient_3->setText(QString());
        firstnameReOut->setText(QString());
        label_25->setText(QCoreApplication::translate("NursingWindow", "Full Name", nullptr));
        label_26->setText(QCoreApplication::translate("NursingWindow", "ID", nullptr));
        cardReOut->setText(QString());
        ageReOut->setText(QString());
        label_27->setText(QCoreApplication::translate("NursingWindow", "Age", nullptr));
        heightReOut->setText(QString());
        label_31->setText(QCoreApplication::translate("NursingWindow", "Height", nullptr));
        weightReOut->setText(QString());
        label_32->setText(QCoreApplication::translate("NursingWindow", "Weight", nullptr));
        label_21->setText(QCoreApplication::translate("NursingWindow", "Pressure: BP", nullptr));
        label_15->setText(QCoreApplication::translate("NursingWindow", "mmHg", nullptr));
        label_29->setText(QCoreApplication::translate("NursingWindow", "Temperature: T", nullptr));
        label_16->setText(QCoreApplication::translate("NursingWindow", "\302\272C", nullptr));
        label_30->setText(QCoreApplication::translate("NursingWindow", "Pulse rate: PR", nullptr));
        label_17->setText(QCoreApplication::translate("NursingWindow", "b/min", nullptr));
        label_7->setText(QCoreApplication::translate("NursingWindow", "Weight: Wt", nullptr));
        label_18->setText(QCoreApplication::translate("NursingWindow", "kg", nullptr));
        label_8->setText(QCoreApplication::translate("NursingWindow", "Height: Ht", nullptr));
        label_19->setText(QCoreApplication::translate("NursingWindow", "Ft", nullptr));
        label_20->setText(QCoreApplication::translate("NursingWindow", "<html><head/><body><p>kg/m<span style=\" vertical-align:super;\">2</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("NursingWindow", "<html><head/><body><p>Body Mass Index: BMA</p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("NursingWindow", "Body Mass Comment", nullptr));
        label_22->setText(QCoreApplication::translate("NursingWindow", "cmkg", nullptr));
        label_11->setText(QCoreApplication::translate("NursingWindow", "Body Surface Area", nullptr));
        label_23->setText(QCoreApplication::translate("NursingWindow", "%", nullptr));
        label_12->setText(QCoreApplication::translate("NursingWindow", "Saturation of Oxygen", nullptr));
        label_13->setText(QCoreApplication::translate("NursingWindow", "Respiratory Rate: RR", nullptr));
        label_24->setText(QCoreApplication::translate("NursingWindow", "cycle/min", nullptr));
        label_14->setText(QCoreApplication::translate("NursingWindow", "Other Examination", nullptr));
        btnNurseClear->setText(QCoreApplication::translate("NursingWindow", "CLEAR", nullptr));
        btnNurseSave->setText(QCoreApplication::translate("NursingWindow", "SAVE", nullptr));
        label_33->setText(QCoreApplication::translate("NursingWindow", "GENERAL EXAMINATION", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("NursingWindow", "VITAL SIGN ASSESMENT", nullptr));
        searchReOut_3->setPlaceholderText(QCoreApplication::translate("NursingWindow", "Search Patient", nullptr));
        btnSearchPatient_5->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("NursingWindow", "Injection List", nullptr));
        searchReOut_2->setPlaceholderText(QCoreApplication::translate("NursingWindow", "Search Patient", nullptr));
        btnSearchPatient_4->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("NursingWindow", "Dressing List", nullptr));
        searchReOut_4->setPlaceholderText(QCoreApplication::translate("NursingWindow", "Search Patient", nullptr));
        btnSearchPatient_6->setText(QString());
        label_2->setText(QCoreApplication::translate("NursingWindow", "Catalog for Items to be request form the main store", nullptr));
        btnNurseORDER->setText(QCoreApplication::translate("NursingWindow", "ORDER", nullptr));
        label_item->setText(QCoreApplication::translate("NursingWindow", "ITEM NAME", nullptr));
        label_36->setText(QCoreApplication::translate("NursingWindow", "QUANTITY", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QCoreApplication::translate("NursingWindow", "Supply Catalog", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QCoreApplication::translate("NursingWindow", "My Orders", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_2), QCoreApplication::translate("NursingWindow", "Stock Level", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QCoreApplication::translate("NursingWindow", "Request Trend", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QCoreApplication::translate("NursingWindow", "Usage Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NursingWindow: public Ui_NursingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NURSINGWINDOW_H

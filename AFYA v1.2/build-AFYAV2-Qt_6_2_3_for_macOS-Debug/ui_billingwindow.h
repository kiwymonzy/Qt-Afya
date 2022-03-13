/********************************************************************************
** Form generated from reading UI file 'billingwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLINGWINDOW_H
#define UI_BILLINGWINDOW_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BillingWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *frame_5;
    QLineEdit *searchconsuOPD;
    QPushButton *btnSearchconsuOPD;
    QListView *listViewConsuOPD;
    QWidget *tab_2;
    QFrame *frame_6;
    QLineEdit *searchLabOPD;
    QPushButton *btnSearchLabOPD;
    QListView *listViewLabOPD;
    QWidget *tab_5;
    QFrame *frame_7;
    QLineEdit *searchPharOPD;
    QPushButton *btnSearchPharOPD;
    QListView *listViewPharOPD;
    QWidget *tab_6;
    QFrame *frame_8;
    QLineEdit *searchInjeOPD;
    QPushButton *btnSearchInjeOPD;
    QListView *listViewInjeOPD;
    QWidget *tab_7;
    QFrame *frame_9;
    QLineEdit *searchDentalOPD;
    QPushButton *btnSearchDentalOPD;
    QListView *listViewDentalOPD;
    QWidget *tab_8;
    QFrame *frame_10;
    QLineEdit *searchOtherprocOPD;
    QPushButton *btnSearchOtherprocOPD;
    QListView *listViewOtherprocOPD;
    QWidget *tab_9;
    QFrame *frame_11;
    QLineEdit *searchObOPD;
    QPushButton *btnSearchObOPD;
    QListView *listViewObOPD;
    QWidget *page_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_10;
    QWidget *tab_11;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *btnOPD;
    QLabel *label_3;
    QPushButton *btnOutsider;
    QPushButton *closeButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BillingWindow)
    {
        if (BillingWindow->objectName().isEmpty())
            BillingWindow->setObjectName(QString::fromUtf8("BillingWindow"));
        BillingWindow->setWindowModality(Qt::WindowModal);
        BillingWindow->resize(1050, 776);
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
        BillingWindow->setPalette(palette);
        centralwidget = new QWidget(BillingWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 100, 1031, 621));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 246, 253);\n"
"border-radius: 30px;"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1011, 591));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setKerning(true);
        tabWidget->setFont(font);
        tabWidget->setFocusPolicy(Qt::TabFocus);
        tabWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        tabWidget->setStyleSheet(QString::fromUtf8("color: rgb(66, 66, 66);"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(30, 30));
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        frame_5 = new QFrame(tab);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(10, 10, 411, 481));
        frame_5->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
"background-color: rgb(214, 214, 214);"));
        searchconsuOPD = new QLineEdit(frame_5);
        searchconsuOPD->setObjectName(QString::fromUtf8("searchconsuOPD"));
        searchconsuOPD->setGeometry(QRect(10, 20, 321, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Piximisa")});
        font1.setPointSize(20);
        searchconsuOPD->setFont(font1);
        searchconsuOPD->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border : 1px solid rgb(14, 188, 157);\n"
"color: rgb(145, 145, 145);"));
        searchconsuOPD->setAlignment(Qt::AlignCenter);
        searchconsuOPD->setClearButtonEnabled(true);
        btnSearchconsuOPD = new QPushButton(frame_5);
        btnSearchconsuOPD->setObjectName(QString::fromUtf8("btnSearchconsuOPD"));
        btnSearchconsuOPD->setGeometry(QRect(330, 20, 61, 41));
        btnSearchconsuOPD->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/paper-plane.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnSearchconsuOPD->setIcon(icon);
        btnSearchconsuOPD->setIconSize(QSize(42, 42));
        btnSearchconsuOPD->setFlat(true);
        listViewConsuOPD = new QListView(frame_5);
        listViewConsuOPD->setObjectName(QString::fromUtf8("listViewConsuOPD"));
        listViewConsuOPD->setGeometry(QRect(10, 70, 391, 401));
        listViewConsuOPD->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        btnSearchconsuOPD->raise();
        listViewConsuOPD->raise();
        searchconsuOPD->raise();
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        frame_6 = new QFrame(tab_2);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(10, 10, 411, 481));
        frame_6->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
"background-color: rgb(214, 214, 214);"));
        searchLabOPD = new QLineEdit(frame_6);
        searchLabOPD->setObjectName(QString::fromUtf8("searchLabOPD"));
        searchLabOPD->setGeometry(QRect(10, 20, 321, 41));
        searchLabOPD->setFont(font1);
        searchLabOPD->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border : 1px solid rgb(14, 188, 157);\n"
"color: rgb(145, 145, 145);"));
        searchLabOPD->setAlignment(Qt::AlignCenter);
        searchLabOPD->setClearButtonEnabled(true);
        btnSearchLabOPD = new QPushButton(frame_6);
        btnSearchLabOPD->setObjectName(QString::fromUtf8("btnSearchLabOPD"));
        btnSearchLabOPD->setGeometry(QRect(330, 20, 61, 41));
        btnSearchLabOPD->setCursor(QCursor(Qt::PointingHandCursor));
        btnSearchLabOPD->setIcon(icon);
        btnSearchLabOPD->setIconSize(QSize(42, 42));
        btnSearchLabOPD->setFlat(true);
        listViewLabOPD = new QListView(frame_6);
        listViewLabOPD->setObjectName(QString::fromUtf8("listViewLabOPD"));
        listViewLabOPD->setGeometry(QRect(10, 70, 391, 401));
        listViewLabOPD->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        frame_7 = new QFrame(tab_5);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(10, 10, 411, 481));
        frame_7->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
"background-color: rgb(214, 214, 214);"));
        searchPharOPD = new QLineEdit(frame_7);
        searchPharOPD->setObjectName(QString::fromUtf8("searchPharOPD"));
        searchPharOPD->setGeometry(QRect(10, 20, 321, 41));
        searchPharOPD->setFont(font1);
        searchPharOPD->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border : 1px solid rgb(14, 188, 157);\n"
"color: rgb(145, 145, 145);"));
        searchPharOPD->setAlignment(Qt::AlignCenter);
        searchPharOPD->setClearButtonEnabled(true);
        btnSearchPharOPD = new QPushButton(frame_7);
        btnSearchPharOPD->setObjectName(QString::fromUtf8("btnSearchPharOPD"));
        btnSearchPharOPD->setGeometry(QRect(330, 20, 61, 41));
        btnSearchPharOPD->setCursor(QCursor(Qt::PointingHandCursor));
        btnSearchPharOPD->setIcon(icon);
        btnSearchPharOPD->setIconSize(QSize(42, 42));
        btnSearchPharOPD->setFlat(true);
        listViewPharOPD = new QListView(frame_7);
        listViewPharOPD->setObjectName(QString::fromUtf8("listViewPharOPD"));
        listViewPharOPD->setGeometry(QRect(10, 70, 391, 401));
        listViewPharOPD->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        frame_8 = new QFrame(tab_6);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(10, 10, 411, 481));
        frame_8->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
"background-color: rgb(214, 214, 214);"));
        searchInjeOPD = new QLineEdit(frame_8);
        searchInjeOPD->setObjectName(QString::fromUtf8("searchInjeOPD"));
        searchInjeOPD->setGeometry(QRect(10, 20, 321, 41));
        searchInjeOPD->setFont(font1);
        searchInjeOPD->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border : 1px solid rgb(14, 188, 157);\n"
"color: rgb(145, 145, 145);"));
        searchInjeOPD->setAlignment(Qt::AlignCenter);
        searchInjeOPD->setClearButtonEnabled(true);
        btnSearchInjeOPD = new QPushButton(frame_8);
        btnSearchInjeOPD->setObjectName(QString::fromUtf8("btnSearchInjeOPD"));
        btnSearchInjeOPD->setGeometry(QRect(330, 20, 61, 41));
        btnSearchInjeOPD->setCursor(QCursor(Qt::PointingHandCursor));
        btnSearchInjeOPD->setIcon(icon);
        btnSearchInjeOPD->setIconSize(QSize(42, 42));
        btnSearchInjeOPD->setFlat(true);
        listViewInjeOPD = new QListView(frame_8);
        listViewInjeOPD->setObjectName(QString::fromUtf8("listViewInjeOPD"));
        listViewInjeOPD->setGeometry(QRect(10, 70, 391, 401));
        listViewInjeOPD->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        frame_9 = new QFrame(tab_7);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(10, 10, 411, 481));
        frame_9->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
"background-color: rgb(214, 214, 214);"));
        searchDentalOPD = new QLineEdit(frame_9);
        searchDentalOPD->setObjectName(QString::fromUtf8("searchDentalOPD"));
        searchDentalOPD->setGeometry(QRect(10, 20, 321, 41));
        searchDentalOPD->setFont(font1);
        searchDentalOPD->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border : 1px solid rgb(14, 188, 157);\n"
"color: rgb(145, 145, 145);"));
        searchDentalOPD->setAlignment(Qt::AlignCenter);
        searchDentalOPD->setClearButtonEnabled(true);
        btnSearchDentalOPD = new QPushButton(frame_9);
        btnSearchDentalOPD->setObjectName(QString::fromUtf8("btnSearchDentalOPD"));
        btnSearchDentalOPD->setGeometry(QRect(330, 20, 61, 41));
        btnSearchDentalOPD->setCursor(QCursor(Qt::PointingHandCursor));
        btnSearchDentalOPD->setIcon(icon);
        btnSearchDentalOPD->setIconSize(QSize(42, 42));
        btnSearchDentalOPD->setFlat(true);
        listViewDentalOPD = new QListView(frame_9);
        listViewDentalOPD->setObjectName(QString::fromUtf8("listViewDentalOPD"));
        listViewDentalOPD->setGeometry(QRect(10, 70, 391, 401));
        listViewDentalOPD->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        frame_10 = new QFrame(tab_8);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(10, 10, 411, 481));
        frame_10->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
"background-color: rgb(214, 214, 214);"));
        searchOtherprocOPD = new QLineEdit(frame_10);
        searchOtherprocOPD->setObjectName(QString::fromUtf8("searchOtherprocOPD"));
        searchOtherprocOPD->setGeometry(QRect(10, 20, 321, 41));
        searchOtherprocOPD->setFont(font1);
        searchOtherprocOPD->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border : 1px solid rgb(14, 188, 157);\n"
"color: rgb(145, 145, 145);"));
        searchOtherprocOPD->setAlignment(Qt::AlignCenter);
        searchOtherprocOPD->setClearButtonEnabled(true);
        btnSearchOtherprocOPD = new QPushButton(frame_10);
        btnSearchOtherprocOPD->setObjectName(QString::fromUtf8("btnSearchOtherprocOPD"));
        btnSearchOtherprocOPD->setGeometry(QRect(330, 20, 61, 41));
        btnSearchOtherprocOPD->setCursor(QCursor(Qt::PointingHandCursor));
        btnSearchOtherprocOPD->setIcon(icon);
        btnSearchOtherprocOPD->setIconSize(QSize(42, 42));
        btnSearchOtherprocOPD->setFlat(true);
        listViewOtherprocOPD = new QListView(frame_10);
        listViewOtherprocOPD->setObjectName(QString::fromUtf8("listViewOtherprocOPD"));
        listViewOtherprocOPD->setGeometry(QRect(10, 70, 391, 401));
        listViewOtherprocOPD->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        frame_11 = new QFrame(tab_9);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setGeometry(QRect(10, 10, 411, 481));
        frame_11->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
"background-color: rgb(214, 214, 214);"));
        searchObOPD = new QLineEdit(frame_11);
        searchObOPD->setObjectName(QString::fromUtf8("searchObOPD"));
        searchObOPD->setGeometry(QRect(10, 20, 321, 41));
        searchObOPD->setFont(font1);
        searchObOPD->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border : 1px solid rgb(14, 188, 157);\n"
"color: rgb(145, 145, 145);"));
        searchObOPD->setAlignment(Qt::AlignCenter);
        searchObOPD->setClearButtonEnabled(true);
        btnSearchObOPD = new QPushButton(frame_11);
        btnSearchObOPD->setObjectName(QString::fromUtf8("btnSearchObOPD"));
        btnSearchObOPD->setGeometry(QRect(330, 20, 61, 41));
        btnSearchObOPD->setCursor(QCursor(Qt::PointingHandCursor));
        btnSearchObOPD->setIcon(icon);
        btnSearchObOPD->setIconSize(QSize(42, 42));
        btnSearchObOPD->setFlat(true);
        listViewObOPD = new QListView(frame_11);
        listViewObOPD->setObjectName(QString::fromUtf8("listViewObOPD"));
        listViewObOPD->setGeometry(QRect(10, 70, 391, 401));
        listViewObOPD->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        tabWidget->addTab(tab_9, QString());
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tabWidget_2 = new QTabWidget(page_2);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 1031, 621));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setKerning(true);
        tabWidget_2->setFont(font2);
        tabWidget_2->setFocusPolicy(Qt::TabFocus);
        tabWidget_2->setContextMenuPolicy(Qt::ActionsContextMenu);
        tabWidget_2->setStyleSheet(QString::fromUtf8("color: rgb(66, 66, 66);"));
        tabWidget_2->setTabPosition(QTabWidget::North);
        tabWidget_2->setTabShape(QTabWidget::Rounded);
        tabWidget_2->setIconSize(QSize(30, 30));
        tabWidget_2->setElideMode(Qt::ElideNone);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget_2->addTab(tab_4, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        tabWidget_2->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        tabWidget_2->addTab(tab_11, QString());
        stackedWidget->addWidget(page_2);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 10, 601, 81));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        btnOPD = new QPushButton(layoutWidget);
        btnOPD->setObjectName(QString::fromUtf8("btnOPD"));
        btnOPD->setCursor(QCursor(Qt::PointingHandCursor));
        btnOPD->setStyleSheet(QString::fromUtf8("QPushButton#btnOPD:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnOPD->setIcon(icon1);
        btnOPD->setIconSize(QSize(40, 40));
        btnOPD->setFlat(true);

        gridLayout->addWidget(btnOPD, 0, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        btnOutsider = new QPushButton(layoutWidget);
        btnOutsider->setObjectName(QString::fromUtf8("btnOutsider"));
        btnOutsider->setCursor(QCursor(Qt::PointingHandCursor));
        btnOutsider->setStyleSheet(QString::fromUtf8("QPushButton#btnOutsider:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/calendar.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnOutsider->setIcon(icon2);
        btnOutsider->setIconSize(QSize(33, 33));
        btnOutsider->setFlat(true);

        gridLayout->addWidget(btnOutsider, 0, 1, 1, 1);

        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(990, 0, 50, 50));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Poppins Black")});
        font3.setBold(true);
        closeButton->setFont(font3);
        closeButton->setCursor(QCursor(Qt::PointingHandCursor));
        closeButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon3);
        BillingWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BillingWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1050, 22));
        BillingWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(BillingWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BillingWindow->setStatusBar(statusbar);

        retranslateUi(BillingWindow);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(6);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BillingWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BillingWindow)
    {
        BillingWindow->setWindowTitle(QCoreApplication::translate("BillingWindow", "MainWindow", nullptr));
        searchconsuOPD->setPlaceholderText(QCoreApplication::translate("BillingWindow", "Search Patient", nullptr));
        btnSearchconsuOPD->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("BillingWindow", "Consultation", nullptr));
        searchLabOPD->setPlaceholderText(QCoreApplication::translate("BillingWindow", "Search Patient", nullptr));
        btnSearchLabOPD->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("BillingWindow", "Laboratory", nullptr));
        searchPharOPD->setPlaceholderText(QCoreApplication::translate("BillingWindow", "Search Patient", nullptr));
        btnSearchPharOPD->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("BillingWindow", "Pharmacy", nullptr));
        searchInjeOPD->setPlaceholderText(QCoreApplication::translate("BillingWindow", "Search Patient", nullptr));
        btnSearchInjeOPD->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("BillingWindow", "Injection", nullptr));
        searchDentalOPD->setPlaceholderText(QCoreApplication::translate("BillingWindow", "Search Patient", nullptr));
        btnSearchDentalOPD->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("BillingWindow", "Dental Procedure", nullptr));
        searchOtherprocOPD->setPlaceholderText(QCoreApplication::translate("BillingWindow", "Search Patient", nullptr));
        btnSearchOtherprocOPD->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("BillingWindow", "Other Procedure", nullptr));
        searchObOPD->setPlaceholderText(QCoreApplication::translate("BillingWindow", "Search Patient", nullptr));
        btnSearchObOPD->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QCoreApplication::translate("BillingWindow", "Observation", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("BillingWindow", "RCH-Checkup", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("BillingWindow", "Outsider Laboratory", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QCoreApplication::translate("BillingWindow", "Outsider Radiology", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QCoreApplication::translate("BillingWindow", "Outsider Dressing", nullptr));
        label->setText(QCoreApplication::translate("BillingWindow", "OPD AGENDA", nullptr));
#if QT_CONFIG(tooltip)
        btnOPD->setToolTip(QCoreApplication::translate("BillingWindow", "Qu\341\272\243n l\303\275 c\303\241c d\341\273\261 \303\241n", nullptr));
#endif // QT_CONFIG(tooltip)
        btnOPD->setText(QString());
        label_3->setText(QCoreApplication::translate("BillingWindow", "OUTSIDER & RCH", nullptr));
#if QT_CONFIG(tooltip)
        btnOutsider->setToolTip(QCoreApplication::translate("BillingWindow", "Qu\341\272\243n l\303\275 th\341\273\235i gian bi\341\273\203u", nullptr));
#endif // QT_CONFIG(tooltip)
        btnOutsider->setText(QString());
#if QT_CONFIG(tooltip)
        closeButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        closeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BillingWindow: public Ui_BillingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLINGWINDOW_H

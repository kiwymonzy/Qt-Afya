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
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BillingWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BillingWindow)
    {
        if (BillingWindow->objectName().isEmpty())
            BillingWindow->setObjectName(QString::fromUtf8("BillingWindow"));
        BillingWindow->resize(800, 600);
        menubar = new QMenuBar(BillingWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        BillingWindow->setMenuBar(menubar);
        centralwidget = new QWidget(BillingWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BillingWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BillingWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BillingWindow->setStatusBar(statusbar);

        retranslateUi(BillingWindow);

        QMetaObject::connectSlotsByName(BillingWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BillingWindow)
    {
        BillingWindow->setWindowTitle(QCoreApplication::translate("BillingWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BillingWindow: public Ui_BillingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLINGWINDOW_H

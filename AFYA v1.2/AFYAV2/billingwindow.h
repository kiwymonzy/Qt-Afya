#ifndef BILLINGWINDOW_H
#define BILLINGWINDOW_H

#include <QMainWindow>
#include "header.h"

namespace Ui {
class BillingWindow;
}

class BillingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BillingWindow(QWidget *parent = nullptr);
    ~BillingWindow();

private slots:
    void on_btnOPD_clicked();

    void on_btnOutsider_clicked();

    void on_closeButton_clicked();

private:
    Ui::BillingWindow *ui;
};

#endif // BILLINGWINDOW_H

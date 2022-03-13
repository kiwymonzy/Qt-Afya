#ifndef BILLINGWINDOW_H
#define BILLINGWINDOW_H

#include <QMainWindow>

namespace Ui {
class BillingWindow;
}

class BillingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BillingWindow(QWidget *parent = nullptr);
    ~BillingWindow();

private:
    Ui::BillingWindow *ui;
};

#endif // BILLINGWINDOW_H

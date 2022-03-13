#ifndef NURSINGWINDOW_H
#define NURSINGWINDOW_H

#include <QMainWindow>
#include "header.h"

namespace Ui {
class NursingWindow;
}

class NursingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NursingWindow(QWidget *parent = nullptr);
    ~NursingWindow();

private slots:
    void on_btnHome_clicked();

    void on_btnList_clicked();

    void on_btnInventory_clicked();

    void on_closeButton_clicked();

private:
    Ui::NursingWindow *ui;
};

#endif // NURSINGWINDOW_H

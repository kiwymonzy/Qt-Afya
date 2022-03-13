#ifndef INPATIENT_H
#define INPATIENT_H

#include <QMainWindow>
#include "beddialog.h"
#include "headers.h"

namespace Ui {
class Inpatient;
}

class Inpatient : public QMainWindow
{
    Q_OBJECT
signals:
 void myInpatient();
public:
    explicit Inpatient(QWidget *parent = nullptr);
    ~Inpatient();

private slots:
    void on_pushButton_bed_clicked();

    void on_exit_clicked();

private:
    Ui::Inpatient *ui;
    BedDialog *beddialog;
};

#endif // INPATIENT_H

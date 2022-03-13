#ifndef LABORATORY_H
#define LABORATORY_H

#include <QMainWindow>
#include "headers.h"

namespace Ui {
class Laboratory;
}

class Laboratory : public QMainWindow
{
    Q_OBJECT

public:
    explicit Laboratory(QWidget *parent = nullptr);
    ~Laboratory();
signals:
 void myLaboratory();
public:
    void showTime();
    void loadPatient();
private slots:
    void on_comboBox_loadpatient_currentIndexChanged(const QString &arg1);

    void on_exit_clicked();

private:
    Ui::Laboratory *ui;
};

#endif // LABORATORY_H

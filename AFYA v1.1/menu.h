#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include "headers.h"
#include "laboratory.h"
#include "doctor.h"
#include "registration.h"
#include "inpatient.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Menu; }
QT_END_NAMESPACE

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    Menu(QWidget *parent = nullptr);
    ~Menu();
private slots:
    void showTime();

    void on_PushButton_laboratory_clicked();

    void on_PushButton_doctor_clicked();

    void on_PushButton_registration_clicked();

    void on_PushButton_inpatient_clicked();

private:
    Ui::Menu *ui;
    QSqlDatabase myDB;
    Laboratory *laboratory;
    Doctor *doctor;
    Registration *registration;
    Inpatient *inpatient;
    QPixmap *QPixmap;
};

#endif // MENU_H

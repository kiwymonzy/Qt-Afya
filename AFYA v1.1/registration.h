#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QMainWindow>
#include "headers.h"
#include <QHash>
#include <QStringList>
#include <QList>

namespace Ui {
class Registration;
}

class Registration : public QMainWindow
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();

public:
    QString *i;

protected:
    void paintQR(QPainter &painter, const QSize sz, const QString &data,QString complete_file_path, QColor fg, QPixmap &pixmap);

private slots:
    void on_exit_clicked();
    void submit();
    void showTime();
    void loadPatient();
    void on_pushButton_submit_clicked();
    void on_pushButton_load_clicked();
    void on_listView_patients_clicked(const QModelIndex &index);
    void on_pushButton_cancel_clicked();
    void generate_Qrcode();
    void on_pushButton_refresh_clicked();
    void sample();



signals:
 void myRegistration();

private:
    Ui::Registration *ui;
    QSqlDatabase myDB;
    QString statue_code;
    QString file_name;
    QString file_directory;
    QComboBox *fileComboBox;
    QComboBox *createComboBox(const QString &text = QString());

};
#endif // REGISTRATION_H

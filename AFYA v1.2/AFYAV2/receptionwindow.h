#ifndef RECEPTIONWINDOW_H
#define RECEPTIONWINDOW_H

#include <QMainWindow>
#include "header.h"
//#include "consultationdialog.h"
#include "billingwindow.h"

namespace Ui {
class ReceptionWindow;
}

class ReceptionWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReceptionWindow(QWidget *parent = nullptr);
    ~ReceptionWindow();

protected:
    void paintQR(QPainter &painter, const QSize sz, const QString &data,QString complete_file_path, QColor fg, QPixmap &pixmap);

private slots:
    void NewVisitSubmit();
    void reset();
    void generate_Qrcode();
    void showTime();
    void on_btnGenerate_clicked();
    void on_closeButton_clicked();
    void revisitlist();

    void on_btnPatient_clicked();

    void on_btnOutsider_clicked();

    void on_btnSpecialist_clicked();

    void on_btnReport_clicked();

    void on_btnBilling_clicked();

    void on_btnLaboratory_clicked();

    void on_btnDressing_clicked();

    void on_saveBtnReVisit_clicked();

    void on_saveBtnVisit_clicked();

    void on_btnLaboratoryTable_clicked();

    void on_btnDressingTable_clicked();

    void on_btnSearchReVisit_clicked();

    void on_listViewReVisit_activated(const QModelIndex &index);

private:
    Ui::ReceptionWindow *ui;
    QString statue_code;
    QString file_name;
    QString file_directory;
    QComboBox *fileComboBox;
    QComboBox *createComboBox(const QString &text = QString());
    //ConsultationDialog *consultationdialog;
    BillingWindow *billingwindow;
};

#endif // RECEPTIONWINDOW_H

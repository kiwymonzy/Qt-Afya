#ifndef BEDDIALOG_H
#define BEDDIALOG_H

#include <QDialog>

namespace Ui {
class BedDialog;
}

class BedDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BedDialog(QWidget *parent = nullptr);
    ~BedDialog();

private slots:
    void on_exit_clicked();

private:
    Ui::BedDialog *ui;
};

#endif // BEDDIALOG_H

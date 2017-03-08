#ifndef CHSDIALOG_H
#define CHSDIALOG_H

#include <QDialog>

namespace Ui {
class ChsDialog;
}

class ChsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChsDialog(QWidget *parent = 0);
    ~ChsDialog();

signals:
    void reader_return(QString);

    void manager_return(QString);

private slots:
    void on_pushButton_reader_clicked();

    void on_pushButton_manager_clicked();

private:
    Ui::ChsDialog *ui;
};

#endif // CHSDIALOG_H

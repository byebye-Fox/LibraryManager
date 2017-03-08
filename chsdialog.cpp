#include "chsdialog.h"
#include "ui_chsdialog.h"

ChsDialog::ChsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChsDialog)
{
    ui->setupUi(this);
}

ChsDialog::~ChsDialog()
{
    delete ui;
}

void ChsDialog::on_pushButton_reader_clicked()
{
    emit reader_return(ui->pushButton_reader->text());
    close();
}

void ChsDialog::on_pushButton_manager_clicked()
{
    emit manager_return(ui->pushButton_manager->text());
    close();
}

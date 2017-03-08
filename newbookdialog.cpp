#include "newbookdialog.h"
#include "ui_newbookdialog.h"

NewBookDialog::NewBookDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewBookDialog)
{
    ui->setupUi(this);
}

NewBookDialog::~NewBookDialog()
{
    delete ui;
}

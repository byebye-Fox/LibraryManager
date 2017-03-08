#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_login_pushButton_clicked()
{
    if (ui->user_lineEdit->text().trimmed() == "karlpig" &&
            ui->pwd_lineEdit->text() == "qwerty")
        accept();
    else
    {
        QMessageBox::warning(this, "Warning!", "User name or password not correct!", QMessageBox::Yes);
        ui->user_lineEdit->clear();
        ui->pwd_lineEdit->clear();
        ui->user_lineEdit->setFocus();
    }
}

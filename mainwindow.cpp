#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chsdialog.h"
#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ChsDialog * dlg = new ChsDialog(this);
    QDesktopWidget * desktop = QApplication::desktop();
    dlg->move((desktop->width() - dlg->width())/2, (desktop->height() - dlg->height())/2); //设置窗口居中
    dlg->setWindowModality(Qt::ApplicationModal); //设为关键窗口
    connect(dlg, SIGNAL(reader_return(QString)), this, SLOT(change_user_to_reader(QString)));
    connect(dlg, SIGNAL(manager_return(QString)), this, SLOT(change_user_to_manager(QString)));
    dlg->show();
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::change_user_to_reader(QString str)
{
    ui->current_user->setText(str);
    ui->newbook_button->setEnabled(false);
    ui->findreader_button->setEnabled(false);
    ui->journal_button->setEnabled(false);
}

void MainWindow::change_user_to_manager(QString str)
{
    ui->current_user->setText(str);
    ui->borrow_button->setEnabled(false);
    ui->return_button->setEnabled(false);
}

void MainWindow::on_action_help_triggered()
{
    QString text = "本系统是模拟图书馆的借还/管理系统。请注意如果你的鼠标和键盘保持不动10秒钟，系统时间就会自动向前推进。";             //待补充
    QMessageBox::about(this, "帮助", text);
}

void MainWindow::on_action_exit_triggered()
{
    close();
}

void MainWindow::on_borrow_button_clicked()
{

}

void MainWindow::on_newbook_button_clicked()
{

}

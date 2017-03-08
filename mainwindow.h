#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void change_user_to_reader(QString str);

    void change_user_to_manager(QString str);

    void on_action_help_triggered();

    void on_action_exit_triggered();

    void on_borrow_button_clicked();

    void on_newbook_button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

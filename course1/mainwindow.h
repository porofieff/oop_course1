#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <change_window.h>
#include <proc_queue.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_changeParamButtom_clicked();

    void on_changeQueueButtom_clicked();

private:
    Ui::MainWindow *ui;
    Change_window *ch_par_window;
    Proc_Queue *pr_queue;
};
#endif // MAINWINDOW_H

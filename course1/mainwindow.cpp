#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ch_par_window = new Change_window;
    //ch_par_window->show();

    pr_queue = new Proc_Queue;
    //pr_queue->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_changeParamButtom_clicked()
{
    ch_par_window->show();
}


void MainWindow::on_changeQueueButtom_clicked()
{
    pr_queue->show();
}


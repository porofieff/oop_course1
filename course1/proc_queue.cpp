#include "proc_queue.h"
#include "ui_proc_queue.h"

Proc_Queue::Proc_Queue(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Proc_Queue)
{
    ui->setupUi(this);
}

Proc_Queue::~Proc_Queue()
{
    delete ui;
}

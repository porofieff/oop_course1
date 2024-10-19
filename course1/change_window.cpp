#include "change_window.h"
#include "ui_change_window.h"

Change_window::Change_window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Change_window)
{
    ui->setupUi(this);
}

Change_window::~Change_window()
{
    delete ui;
}

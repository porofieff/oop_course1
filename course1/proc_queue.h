#ifndef PROC_QUEUE_H
#define PROC_QUEUE_H

#include <QWidget>

namespace Ui {
class Proc_Queue;
}

class Proc_Queue : public QWidget
{
    Q_OBJECT

public:
    explicit Proc_Queue(QWidget *parent = nullptr);
    ~Proc_Queue();

private:
    Ui::Proc_Queue *ui;
};

#endif // PROC_QUEUE_H

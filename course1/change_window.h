#ifndef CHANGE_WINDOW_H
#define CHANGE_WINDOW_H

#include <QWidget>

namespace Ui {
class Change_window;
}

class Change_window : public QWidget
{
    Q_OBJECT

public:
    explicit Change_window(QWidget *parent = nullptr);
    ~Change_window();

private:
    Ui::Change_window *ui;
};

#endif // CHANGE_WINDOW_H

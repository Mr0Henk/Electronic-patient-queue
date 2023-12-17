#ifndef QUEUEWINDOW_H
#define QUEUEWINDOW_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class QueueWindow;
}

class QueueWindow : public QDialog
{
    Q_OBJECT
    friend class MainWindow;
public:
    explicit QueueWindow(QWidget *parent = nullptr);
    ~QueueWindow();

private:
    Ui::QueueWindow *ui;
};

#endif // QUEUEWINDOW_H

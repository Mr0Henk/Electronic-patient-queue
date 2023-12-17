#ifndef REGISTWINDOW_H
#define REGISTWINDOW_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class RegistWindow;
}

class RegistWindow : public QDialog
{
    Q_OBJECT
    friend class MainWindow;

public:
    explicit RegistWindow(QWidget *parent = nullptr);
    ~RegistWindow();

private slots:
    void on_OkButton_clicked();
    void slot();

private:
    Ui::RegistWindow *ui;
};

#endif // REGISTWINDOW_H

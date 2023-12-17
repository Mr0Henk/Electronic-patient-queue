#ifndef RECEPTIONWINDOW_H
#define RECEPTIONWINDOW_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class ReceptionWindow;
}

class ReceptionWindow : public QDialog
{
    Q_OBJECT
    friend class MainWindow;

public:
    explicit ReceptionWindow(QWidget *parent = nullptr);
    ~ReceptionWindow();

private:
    Ui::ReceptionWindow *ui;
};

#endif // RECEPTIONWINDOW_H

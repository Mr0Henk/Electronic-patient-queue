#include "receptionwindow.h"
#include "ui_receptionwindow.h"
#include "mainwindow.h"

ReceptionWindow::ReceptionWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReceptionWindow)
{
    ui->setupUi(this);
}

ReceptionWindow::~ReceptionWindow()
{
    delete ui;
}

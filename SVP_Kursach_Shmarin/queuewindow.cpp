#include "queuewindow.h"
#include "ui_queuewindow.h"
#include <QMessageBox>
#include "mainwindow.h"

QueueWindow::QueueWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QueueWindow)
{
    ui->setupUi(this);
    ui->listWidget->addItem("hallo");
  //  RegistWindow registWindowInstance;
   // for (int i = 0; i < registWindowInstance.patientsList.size(); i++)
  //  {
   //   ui->listWidget->addItem(registWindowInstance.patientsList.at(i));
   // }
}

QueueWindow::~QueueWindow()
{
    delete ui;
}

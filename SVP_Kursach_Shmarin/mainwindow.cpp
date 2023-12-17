#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "queuewindow.h"
#include "receptionwindow.h"
#include "registwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::SetCodeI(const int NewCodeI){
    CodeI = NewCodeI;
}

int MainWindow::GetCodeI() const {
    return CodeI;
}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_regist_button_clicked()
{
    RegistWindow r_window;
    r_window.setModal(true);
    r_window.exec();
}


void MainWindow::on_queue_button_clicked()
{
    QueueWindow q_window;
    q_window.setModal(true);
    q_window.exec();
}


void MainWindow::on_reception_button_clicked()
{
    ReceptionWindow rec_window;
    rec_window.setModal(true);
    rec_window.exec();
}


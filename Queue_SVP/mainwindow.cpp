#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "infowindow.h"
#include <QMessageBox>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Электронная очередь пациентов");
}

int MainWindow::getCodeI() const{
    return CodeI;
}

void MainWindow::setCodeI(const int newCodeI){
    CodeI = newCodeI;
}

void MainWindow::Add_Pacient(){
    QString Snils = ui->lineEdit->text();
    bool isNumber;
    qint64 snilsNumber = Snils.toFloat(&isNumber);

    if (isNumber && snilsNumber != 0) {
        if (Snils.length() == 11) {
            QString Pacient = "Код в очереди: " + QString::number(getCodeI()) + "\t" + " Снилс пациента: " + Snils;
            ui->QueueWidget->addItem(Pacient);
            ui->lineEdit->clear();
            QMessageBox::information(this, "Добро пожаловать!", "Код в очереди: " + QString::number(getCodeI()));
            setCodeI(getCodeI() + 1);
        } else {
            QMessageBox::warning(this, "Ай-ай!", "СНИЛС должен содержать 11 символов");
        }
    } else {
        QMessageBox::warning(this, "Ой-ой!", "Кажется, вынеправильно ввели снилс! Попробуйте ещё раз");
    }
}

void MainWindow::Exit_Program(){
    QApplication::quit();
}

void MainWindow::To_Reception(){
    if (ui->QueueWidget->selectedItems().isEmpty()) {
        delete ui->QueueWidget->takeItem(0);
    } else {
        delete ui->QueueWidget->takeItem(ui->QueueWidget->row(ui->QueueWidget->currentItem()));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addButton_clicked()
{
    Add_Pacient();
}


void MainWindow::on_receptionButton_clicked()
{
    To_Reception();
}


void MainWindow::on_add_triggered()
{
    Add_Pacient();
}


void MainWindow::on_exit_triggered()
{
    Exit_Program();
}


void MainWindow::on_info_triggered()
{
    InfoWindow info;
    info.setModal(true);
    info.exec();
}


void MainWindow::on_reseption_triggered()
{
    To_Reception();
}


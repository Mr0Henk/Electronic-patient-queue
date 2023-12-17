#include "widget.h"
#include "./ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Электронная очередь пациентов");
}

int Widget::getCodeI() const{
    return CodeI;
}

void Widget::setCodeI(const int newCodeI){
    CodeI = newCodeI;
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_addButton_clicked()
{
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


void Widget::on_receptionButton_clicked()
{
    if (ui->QueueWidget->selectedItems().isEmpty()) {
        delete ui->QueueWidget->takeItem(0);
    } else {
        delete ui->QueueWidget->takeItem(ui->QueueWidget->row(ui->QueueWidget->currentItem()));
    }
}


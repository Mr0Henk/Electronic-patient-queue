#include "registwindow.h"
#include "ui_registwindow.h"
#include <QMessageBox>
#include "mainwindow.h"

RegistWindow::RegistWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistWindow)
{
    ui->setupUi(this);
    MainWindow main_w;
}

RegistWindow::~RegistWindow()
{
    delete ui;
}

void RegistWindow::on_OkButton_clicked()
{
    QString Name = ui->lineName->text();
    QString Sname = ui->lineSecondname->text();
    QString Patr = ui->linePatronym->text();
    QString code = QString::number(main_w.GetCodeI());
    int newcode = main_w.GetCodeI()+1;
    main_w.SetCodeI(newcode);

    if (Name != "" && Sname != "" && Patr != "")
    {
        QMessageBox::information(this,"Вы встали в очередь!", " Ваш код: " + code);
        QString fio = Name+" "+Sname+" "+Patr;
        main_w.patientsList.append(fio+ " "+code);
    }
    else{
        QMessageBox::warning(this, "Ой-ой!","Попробуйте зарегестрироваться ещё раз");
    }

}


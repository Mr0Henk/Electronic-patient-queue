#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int getCodeI() const;
    void setCodeI(const int newCodeI);
    void Add_Pacient();
    void Exit_Program();
    void To_Reception();


private slots:
    void on_addButton_clicked();

    void on_receptionButton_clicked();

    void on_add_triggered();

    void on_exit_triggered();

    void on_info_triggered();

    void on_reseption_triggered();

private:
    Ui::MainWindow *ui;
    int CodeI = 1;
};
#endif // MAINWINDOW_H

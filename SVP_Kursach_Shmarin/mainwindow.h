#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QStringList patientsList;
    void SetCodeI(const int NewCodeI);
    int GetCodeI() const;
private:
    int CodeI = 1;

private slots:
    void on_regist_button_clicked();

    void on_queue_button_clicked();

    void on_reception_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    int getCodeI() const;
    void setCodeI(const int newCodeI);

private slots:
    void on_addButton_clicked();

    void on_receptionButton_clicked();

private:
    Ui::Widget *ui;
    int CodeI = 1;
};
#endif // WIDGET_H

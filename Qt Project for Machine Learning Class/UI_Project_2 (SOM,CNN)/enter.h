#ifndef ENTER_H
#define ENTER_H

#include <QDialog>


namespace Ui {
class enter;
}

class enter : public QDialog
{
    Q_OBJECT

public:
    explicit enter(QWidget *parent = 0);
    ~enter();
    int get_enter_num() {return num;};

private slots:
    void on_BP_Button_clicked();

    void on_SOM_Button_clicked();

    void on_CNN_Button_clicked();

private:
    Ui::enter *ui;
    int num;

};

#endif // ENTER_H

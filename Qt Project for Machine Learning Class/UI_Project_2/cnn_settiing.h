#ifndef CNN_SETTIING_H
#define CNN_SETTIING_H

#include <QDialog>

namespace Ui {
class cnn_settiing;
}

class cnn_settiing : public QDialog
{
    Q_OBJECT

public:
    explicit cnn_settiing(QWidget *parent = 0);
    ~cnn_settiing();
    int get_cluster() {return cluster;}

private slots:
    void on_spinBox_valueChanged(int arg1);

    void on_buttonBox_accepted();

private:
    Ui::cnn_settiing *ui;
    int cluster;
    int temp;
};

#endif // CNN_SETTIING_H

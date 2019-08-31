#ifndef BP_SETTING_H
#define BP_SETTING_H

#include <QDialog>
#include <qdebug.h>

namespace Ui {
class bp_setting;
}

class bp_setting : public QDialog
{
    Q_OBJECT

public:
    explicit bp_setting(QWidget *parent = 0);
    ~bp_setting();

    bool status;

    int max_epoch;
    double gain;
    double min_error;
    int total_layers;
    int layers[5];

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_spinBox_2_valueChanged(int arg1);

private:
    Ui::bp_setting *ui;
};

#endif // BP_SETTING_H

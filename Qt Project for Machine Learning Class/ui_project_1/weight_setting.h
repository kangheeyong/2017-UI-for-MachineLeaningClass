#ifndef WEIGHT_SETTING_H
#define WEIGHT_SETTING_H

#include <QDialog>

namespace Ui {
class Weight_Setting;
}

class Weight_Setting : public QDialog
{
    Q_OBJECT

public:
    explicit Weight_Setting(QWidget *parent = 0);
    ~Weight_Setting();
    int get_cluster();

private slots:
    void on_spinBox_valueChanged(int arg1);

private:
    Ui::Weight_Setting *ui;
    int cluster;
};

#endif // WEIGHT_SETTING_H

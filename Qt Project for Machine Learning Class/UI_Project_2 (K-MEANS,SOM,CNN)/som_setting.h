#ifndef SOM_SETTING_H
#define SOM_SETTING_H

#include <QDialog>

namespace Ui {
class som_setting;
}

class som_setting : public QDialog
{
    Q_OBJECT

public:
    explicit som_setting(QWidget *parent = 0);
    ~som_setting();
    int cluster, max_epoch;
    double gain, distance_gain, weight_min,weight_max;
    bool status;
private slots:
    void on_buttonBox_accepted();

private:
    Ui::som_setting *ui;
};

#endif // SOM_SETTING_H

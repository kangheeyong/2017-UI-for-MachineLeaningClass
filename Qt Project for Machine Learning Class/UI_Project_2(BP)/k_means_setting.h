#ifndef K_MEANS_SETTING_H
#define K_MEANS_SETTING_H

#include <QDialog>

namespace Ui {
class k_means_setting;
}

class k_means_setting : public QDialog
{
    Q_OBJECT

public:
    explicit k_means_setting(QWidget *parent = 0);
    ~k_means_setting();
    int cluster;
    double min_error, weight_min,weight_max;
    bool status;
private slots:
    void on_buttonBox_accepted();

private:
    Ui::k_means_setting *ui;
};

#endif // K_MEANS_SETTING_H

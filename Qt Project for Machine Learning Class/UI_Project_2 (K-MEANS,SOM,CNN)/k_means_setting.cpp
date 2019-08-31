#include "k_means_setting.h"
#include "ui_k_means_setting.h"

k_means_setting::k_means_setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::k_means_setting)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(2);
    ui->spinBox->setMaximum(255);

    ui->doubleSpinBox->setMinimum(0.0001);
    ui->doubleSpinBox->setMaximum(0.9);
    ui->doubleSpinBox_2->setMinimum(-100);
    ui->doubleSpinBox_2->setMaximum(100);
    ui->doubleSpinBox_3->setMinimum(-100);
    ui->doubleSpinBox_3->setMaximum(100);
    ui->spinBox->setValue(2);

    ui->doubleSpinBox->setValue(0.001);
    ui->doubleSpinBox_2->setValue(0.1);
    ui->doubleSpinBox_3->setValue(0.9);
    status = 0;
}

k_means_setting::~k_means_setting()
{
    delete ui;
}

void k_means_setting::on_buttonBox_accepted()
{
    status = 1;
    cluster = ui->spinBox->value();
    min_error = ui->doubleSpinBox->value();
    weight_min = ui->doubleSpinBox_2->value();
    weight_max = ui->doubleSpinBox_3->value();
}

#include "som_setting.h"
#include "ui_som_setting.h"

som_setting::som_setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::som_setting)
{
    ui->setupUi(this);
    cluster = -1;
    ui->spinBox->setMinimum(2);
    ui->spinBox->setMaximum(255);
    ui->spinBox_2->setMinimum(1);
    ui->spinBox_2->setMaximum(999999);
    ui->doubleSpinBox->setMinimum(0.0);
    ui->doubleSpinBox->setMaximum(1000);
    ui->doubleSpinBox_2->setMinimum(0.0);
    ui->doubleSpinBox_2->setMaximum(1000);
    ui->doubleSpinBox_3->setMinimum(-100);
    ui->doubleSpinBox_3->setMaximum(100);
    ui->doubleSpinBox_4->setMinimum(-100);
    ui->doubleSpinBox_4->setMaximum(100);
    ui->spinBox->setValue(4);
    ui->spinBox_2->setValue(500);
    ui->doubleSpinBox->setValue(0.2);
    ui->doubleSpinBox_2->setValue(0.05);
    ui->doubleSpinBox_3->setValue(0.1);
    ui->doubleSpinBox_4->setValue(0.9);
    status = 0;
}

som_setting::~som_setting()
{
    delete ui;
}

void som_setting::on_buttonBox_accepted()
{
    status = 1;
    cluster = ui->spinBox->value();
    max_epoch = ui->spinBox_2->value();
    gain = ui->doubleSpinBox->value();
    distance_gain = ui->doubleSpinBox_2->value();
    weight_min = ui->doubleSpinBox_3->value();
    weight_max = ui->doubleSpinBox_4->value();
}

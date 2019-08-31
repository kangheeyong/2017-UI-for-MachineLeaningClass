#include "weight_setting.h"
#include "ui_weight_setting.h"

Weight_Setting::Weight_Setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Weight_Setting)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(2);
    ui->spinBox->setMaximum(100);
}

Weight_Setting::~Weight_Setting()
{
    delete ui;
}
int Weight_Setting::get_cluster()
{
    return this->cluster;
}
void Weight_Setting::on_spinBox_valueChanged(int arg1)
{
    this->cluster = arg1;
}

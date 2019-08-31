#include "bp_setting.h"
#include "ui_bp_setting.h"

bp_setting::bp_setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bp_setting)
{
    ui->setupUi(this);
    status = 0;
    total_layers = 2;
    ui->spinBox_4->setDisabled(true);
    ui->spinBox_5->setDisabled(true);
    ui->spinBox_6->setDisabled(true);
}

bp_setting::~bp_setting()
{
    delete ui;
}

void bp_setting::on_buttonBox_accepted()
{
    qDebug()<<"1";
    qDebug()<<total_layers;
    status = 1;
    max_epoch = ui->spinBox->value();
    gain = ui->doubleSpinBox->value();
    min_error = ui->doubleSpinBox_2->value();
    if(total_layers == 2)
    {
        layers[0] = ui->spinBox_3->value();
        layers[1] = ui->spinBox_7->value();
    }
    else if(total_layers == 3)
    {
        layers[0] = ui->spinBox_3->value();
        layers[1] = ui->spinBox_4->value();
        layers[2] = ui->spinBox_7->value();

    }
    else if(total_layers == 4)
    {

        layers[0] = ui->spinBox_3->value();
        layers[1] = ui->spinBox_4->value();
        layers[2] = ui->spinBox_5->value();
        layers[3] = ui->spinBox_7->value();

    }
    else
    {
        layers[0] = ui->spinBox_3->value();
        layers[1] = ui->spinBox_4->value();
        layers[2] = ui->spinBox_5->value();
        layers[3] = ui->spinBox_6->value();
        layers[4] = ui->spinBox_7->value();
    }
}

void bp_setting::on_buttonBox_rejected()
{
    qDebug()<<"2";
}

void bp_setting::on_spinBox_2_valueChanged(int arg1)
{
    total_layers = arg1;
    if(arg1 == 2)
    {
        ui->spinBox_4->setDisabled(true);
        ui->spinBox_5->setDisabled(true);
        ui->spinBox_6->setDisabled(true);
    }
    else if(arg1 == 3)
    {
        ui->spinBox_4->setDisabled(false);
        ui->spinBox_5->setDisabled(true);
        ui->spinBox_6->setDisabled(true);
    }
    else if(arg1 == 4)
    {
        ui->spinBox_4->setDisabled(false);
        ui->spinBox_5->setDisabled(false);
        ui->spinBox_6->setDisabled(true);
    }
    else
    {
        ui->spinBox_4->setDisabled(false);
        ui->spinBox_5->setDisabled(false);
        ui->spinBox_6->setDisabled(false);
    }

}

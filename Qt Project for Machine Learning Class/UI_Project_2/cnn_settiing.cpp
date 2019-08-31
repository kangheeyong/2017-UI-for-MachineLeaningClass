#include "cnn_settiing.h"
#include "ui_cnn_settiing.h"

cnn_settiing::cnn_settiing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cnn_settiing)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(2);
    ui->spinBox->setMaximum(255);
    cluster = -1;
}

cnn_settiing::~cnn_settiing()
{
    delete ui;
}

void cnn_settiing::on_spinBox_valueChanged(int arg1)
{
    temp = arg1;
}

void cnn_settiing::on_buttonBox_accepted()
{
    this->cluster = temp;
}

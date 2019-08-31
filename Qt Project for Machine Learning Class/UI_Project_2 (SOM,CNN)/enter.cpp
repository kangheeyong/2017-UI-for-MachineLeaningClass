#include "enter.h"
#include "ui_enter.h"

enter::enter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::enter)
{
    ui->setupUi(this);
}

enter::~enter()
{
    delete ui;
}

void enter::on_BP_Button_clicked()
{
    num = 1;
    this->close();
}

void enter::on_SOM_Button_clicked()
{
    num = 2;
    this->close();
}

void enter::on_CNN_Button_clicked()
{
    num = 3;
    this->close();
}

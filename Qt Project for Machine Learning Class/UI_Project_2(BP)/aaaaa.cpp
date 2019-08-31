#include "aaaaa.h"
#include "ui_aaaaa.h"

aaaaa::aaaaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aaaaa)
{
    ui->setupUi(this);
}

aaaaa::~aaaaa()
{
    delete ui;
}

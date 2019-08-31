#include "save.h"
#include "ui_save.h"

Save::Save(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Save)
{
    ui->setupUi(this);
    name.clear();
}


QString Save::get_filename()
{
    return name;
}

Save::~Save()
{
    delete ui;
}

void Save::on_buttonBox_accepted()
{
    name = ui->lineEdit->text();
}

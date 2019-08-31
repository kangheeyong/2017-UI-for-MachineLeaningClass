#include "input.h"
#include "ui_input.h"
#include <QDebug>

input::input(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::input)
{
    ui->setupUi(this);

    status = 0;

    dir.cd("input_data\\");
    dir.setFilter(QDir ::Files | QDir :: Hidden | QDir ::NoSymLinks);
    ui->listWidget->clear();
    list = dir.entryInfoList();
    for(int i = 0 ; i < list.size() ; i++)
    {
        QFileInfo fileInfo = list.at(i);
        ui->listWidget->addItem(QString("%1").arg(fileInfo.fileName()));

    }
    ui->pushButton->setDisabled(true);
    ui->pushButton_2->setDisabled(true);
}

input::~input()
{
    delete ui;
}

QString input::get_file_name()
{
    if(status == 0) filename.clear();
    status = 0;
    return filename;
}

void input::on_listWidget_clicked(const QModelIndex &index)
{

    filename = QString("%1").arg(list.at(ui->listWidget->currentIndex().row()).absoluteFilePath());

    QFile file(filename);
    file.open(QIODevice :: ReadOnly);
    ui->textEdit->clear();
    ui->textEdit->append(file.readAll());
    file.close();
}



void input::on_buttonBox_accepted()
{
    status = 1;
}

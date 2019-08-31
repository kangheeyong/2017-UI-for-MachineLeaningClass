#include "lord.h"
#include "ui_lord.h"

Lord::Lord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lord)
{
    ui->setupUi(this);
    dir.cd("output_data/");

    dir.setFilter(QDir ::AllDirs | QDir ::NoDotAndDotDot);
    ui->listWidget->clear();
    list = dir.entryInfoList();
    for(int i = 0 ; i < list.size() ; i++)
    {
        QFileInfo fileInfo = list.at(i);
        ui->listWidget->addItem(QString("%1").arg(fileInfo.fileName()));

    }

    ui->pushButton->setDisabled(true);
}

Lord::~Lord()
{
    delete ui;
}
QString Lord:: get_read_path()
{
    return filename;
}
void Lord::on_listWidget_clicked(const QModelIndex &index)
{
    filename = QString("%1").arg(list.at(ui->listWidget->currentIndex().row()).absoluteFilePath());
}

void Lord::on_pushButton_clicked()
{
    filename = QString("%1").arg(list.at(ui->listWidget->currentIndex().row()).absoluteFilePath());
    qDebug()<<filename;
    dir.rmdir(filename);

    dir.cd("output_data/");

    dir.setFilter(QDir ::AllDirs | QDir ::NoDotAndDotDot);
    ui->listWidget->clear();
    list = dir.entryInfoList();
    for(int i = 0 ; i < list.size() ; i++)
    {
        QFileInfo fileInfo = list.at(i);
        ui->listWidget->addItem(QString("%1").arg(fileInfo.fileName()));

    }

}

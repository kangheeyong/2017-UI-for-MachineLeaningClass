#include "input_read.h"
#include "ui_input_read.h"

Input_Read::Input_Read(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Input_Read)
{
    ui->setupUi(this);


    dir.cd("input_data\\");

    dir.setFilter(QDir ::Files | QDir :: Hidden | QDir ::NoSymLinks);
    ui->listWidget->clear();
    list = dir.entryInfoList();
    for(int i = 0 ; i < list.size() ; i++)
    {
        QFileInfo fileInfo = list.at(i);
        ui->listWidget->addItem(QString("%1").arg(fileInfo.fileName()));

    }

}

Input_Read::~Input_Read()
{
    delete ui;
}
QString Input_Read:: get_read_path()
{
    return filename;
}
void Input_Read::on_listWidget_clicked(const QModelIndex &index)
{

    filename = QString("%1").arg(list.at(ui->listWidget->currentIndex().row()).absoluteFilePath());

    QFile file(filename);
    file.open(QIODevice :: ReadOnly);
    ui->textEdit->clear();
    ui->textEdit->append(file.readAll());
    file.close();


}

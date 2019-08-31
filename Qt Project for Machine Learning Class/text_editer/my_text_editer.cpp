#include "my_text_editer.h"
#include "ui_my_text_editer.h"

my_text_editer::my_text_editer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::my_text_editer)
{
    ui->setupUi(this);
}

my_text_editer::~my_text_editer()
{
    delete ui;
}

void my_text_editer::on_exit_clicked()
{
    this->close();
}

void my_text_editer::on_select_dir_clicked()
{
 //   dir = QFileDialog :: getExistingDirectory();
    dir.cd("input_data\\");
    qDebug()<<dir.canonicalPath();
    dir.setFilter(QDir ::Files | QDir :: Hidden | QDir ::NoSymLinks);
    ui->listWidget->clear();
    list = dir.entryInfoList();
    for(int i = 0 ; i < list.size() ; i++)
    {
        QFileInfo fileInfo = list.at(i);
        ui->listWidget->addItem(QString("%1").arg(fileInfo.fileName()));

    }
}

void my_text_editer::on_file_open_clicked()
{
    QString path, filename;
    filename = QString("%1").arg(list.at(ui->listWidget->currentIndex().row()).absoluteFilePath());

    QFile file(filename);
    file.open(QIODevice :: ReadOnly);
    ui->textEdit->clear();
    ui->textEdit->append(file.readAll());
    file.close();
    QMessageBox msgbox;
    msgbox.setText("file Opened");
    msgbox.exec();
}

void my_text_editer::on_file_save_clicked()
{
    QString path, filename;
    filename = QString("%1").arg(list.at(ui->listWidget->currentIndex().row()).absoluteFilePath());
    QFile file(filename + ".text");
    QByteArray bytearray = ui->textEdit->toPlainText().toUtf8().left(ui->textEdit->toPlainText().length()) ;
    file.open(QIODevice :: WriteOnly);
    file.write(bytearray);
    file.close();
    QMessageBox msgbox;
    msgbox.setText("file Saved");
    msgbox.exec();
}

void my_text_editer::on_listWidget_clicked(const QModelIndex &index)
{
    qDebug()<<ui->listWidget->currentIndex().row();
  //  ui->textEdit->setVisible(false);
}

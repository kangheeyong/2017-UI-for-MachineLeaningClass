#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->index = 0;
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Next_clicked()
{
    this->index = (this->index)%5;
    qDebug()<<this->index;
    switch(this->index){
        case 0 :
            ui->input_read->setVisible(false);
            ui->select_algorithm->setVisible(true);
            break;
        case 1 :
            ui->select_algorithm->setVisible(false);
            ui->weight_setting->setVisible(true);
            break;
        case 2 :
            ui->weight_setting->setVisible(false);
            ui->progress->setVisible(true);
            break;
        case 3 :
            ui->progress->setVisible(false);
            ui->result->setVisible(true);
            break;
        case 4 :
            ui->result->setVisible(false);
            ui->input_read->setVisible(true);
            break;

    }
    this->index++;

}

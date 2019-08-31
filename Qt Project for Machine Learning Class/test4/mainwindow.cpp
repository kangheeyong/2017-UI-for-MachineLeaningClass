#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#include "my_data.hpp"






MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->index = 0;
    ui->page->setVisible(true);
    ui->page_2->setVisible(false);
    ui->listWidget->addItem("aaaa");
    ui->listWidget->addItem("dddd");
    ui->listWidget->addItem("cccc");
    ui->textBrowser->setText("dfgdfgdfgf:w");
    a = 0;
}
MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_3_clicked()
{
    this->index++;
    this->index = this->index %2;

    switch(this->index)
    {
    case 0 :
        ui->page->setVisible(true);
        ui->page_2->setVisible(false);
        break;
    case 1 :
        ui->page->setVisible(false);
        ui->page_2->setVisible(true);
    }
    ui->textBrowser->setText("dfgdfgdfgfhfghgf:w");
    qDebug()<<a;

}

void MainWindow::on_listWidget_activated(const QModelIndex &index)
{

}

void hello()
{
   // a++;
}


void MainWindow::on_pushButton_2_clicked()
{
    MY_DATA a;
    int b = 50;
    ui->horizontalSlider->valueChanged(b);
    f1 = QtConcurrent :: run(hello);
 //   th1.setFuture(f1);
  //  a.fread("test.txt");
  //  qDebug()<< a(0,0);
  //  qDebug()<<a(0,1);

}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    qDebug()<<value;

}

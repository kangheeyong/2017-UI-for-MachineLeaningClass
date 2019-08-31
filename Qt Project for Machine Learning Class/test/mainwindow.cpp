#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "dialog_1.h"
#include "mainwindow2.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    qDebug()<<"next_1 click";
    this->on_page_destroyed();
}

void MainWindow::on_pushButton_2_clicked()
{
    qDebug()<<"screen_1 click";
    Dialog_1 w;
    w.setModal(true);
    w.exec();
}

void MainWindow::on_page_destroyed()
{

}

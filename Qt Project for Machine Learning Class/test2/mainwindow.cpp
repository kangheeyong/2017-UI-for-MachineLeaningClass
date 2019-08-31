#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    ui->page->setVisible(false);
    ui->page_2->setVisible(true);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->page_2->setVisible(false);
    ui->page_3->setVisible(true);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->page_3->setVisible(false);
    ui->page->setVisible(true);
    ui->progressBar->setValue(30);
}

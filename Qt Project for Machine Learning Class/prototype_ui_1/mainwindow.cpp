#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  //  start_clicked_satus = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_start_clicked()
{/*
    if(start_clicked_satus == 0)
    {
    //    ui->page->setVisible(true);
    //    ui->page_2->setVisible(false);
    //    start_clicked_satus = 1;
    }
    else
    {
    //    ui->page->setVisible(false);
     //   ui->page_2->setVisible(true);
     //   start_clicked_satus = 0;
    }
*/
}

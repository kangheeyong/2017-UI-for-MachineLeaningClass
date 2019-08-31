#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "My_Matrix.hpp"
#include "MY_MLP.hpp"

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

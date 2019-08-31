#include "mainwindow.h"
#include "ui_mainwindow.h"





MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_thread = new Tread_Test;

    chart = new QChart();
    connect(m_thread, SIGNAL(FinishCount(int)), this, SLOT(on_thread_finish(int)));
    series =new QScatterSeries();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete chart;
    delete series;
    delete m_thread;
}

void MainWindow::on_pushButton_clicked()
{
    m_thread->start();
}

void MainWindow::on_thread_finish(const int value)
{

    ui->progressBar->setValue(value);
}

void MainWindow::on_pushButton_2_clicked()
{
    m_thread->terminate();
}

void MainWindow::on_pushButton_3_clicked()
{


    for(int i = 0 ; i < 500 ; i++)
    {
        QPointF p((qreal)i,qSin(M_PI / 50 * i) * 100);
        p.ry() += qrand()%20;
        *series << p;
    }
    QPointF p((qreal)1000,50);
    *series << p;

   // series->setMarkerShape(QScatterSeries::MarkerShapeCircle);
  //  series->set



    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("Simple line chart example");

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);


    window.setCentralWidget(chartView);
    window.resize(400, 300);
    window.show();


    for(int j = 0 ; j < 1000000000; j++) ;




    //
  //  QThread :: msleep(5000);
   // window.clearMask();

}



void MainWindow::on_pushButton_4_clicked()
{

}

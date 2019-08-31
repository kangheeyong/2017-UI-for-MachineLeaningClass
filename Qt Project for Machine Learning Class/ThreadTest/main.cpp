#include "mainwindow.h"
#include <QApplication>
#include <QtCharts>
#include <QImage>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    QPixmap *image = new QPixmap ;
     QLabel *label = new QLabel ;

     image->load( "airplain.jpg", 0 ) ;


     label->setPixmap( *image ) ;
     label->show() ;

    return a.exec();
}

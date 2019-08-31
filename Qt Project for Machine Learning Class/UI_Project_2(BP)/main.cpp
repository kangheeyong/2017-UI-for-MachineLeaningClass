#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QDate d1 = QDate::currentDate();
    int year = d1.year();
    int month = d1.month();

    w.show();

    qDebug("year : %d, month %d", year,month);


    return a.exec();
}

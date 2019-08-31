#include <QCoreApplication>
#include <iostream>
#include <QFuture>
#include <QFutureWatcher>
#include <QDateTime>
#include <QtConcurrent/QtConcurrentRun>


using namespace std;

void thread1()
{
    int i = 0;

    while(1)
    {
        cout<<i<<endl;
    }
}
QFuture<void> f1;
QFutureWatcher<void> th1;

int main(int argc, char **argv)
{
  QCoreApplication app(argc,argv);

   f1 = QtConcurrent :: run(hello);

  return app.exec();
}

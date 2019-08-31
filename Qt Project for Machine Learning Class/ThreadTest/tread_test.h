#ifndef TREAD_TEST_H
#define TREAD_TEST_H

#include <QThread>


class Tread_Test : public QThread
{
    Q_OBJECT
public:
    //Tread_Test();
     Tread_Test();
private:
    void run();

signals:
    void FinishCount(const int value);
};

#endif // TREAD_TEST_H

#include "tread_test.h"

Tread_Test:: Tread_Test()
{
}

void Tread_Test::run()
{
    int high_count=0;


    while(high_count<100)
    {
        high_count++;
        QThread :: msleep(500);
        emit FinishCount(high_count);
    }


}

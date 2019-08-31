#ifndef __MY_K_MEANS_CPP__
#define __MY_K_MEANS_CPP__

#include "my_data.hpp"
#include <QThread>

class K_MEANS: public QThread{


    Q_OBJECT

private :

    void run();


public :

int cluster;
int epoch;
double MSE;
double min_error;


MY_DATA weight, origin, setting, result;
MY_DATA first_weight;
MY_DATA before_weight;
MY_DATA center,temp_weight;
MY_DATA origin_maching;


void init(int cluster);
void status();
void read_input(const char *file_name);
void read_weight(const char *file_name);
void read_setting(const char *file_name);
void write_weight(const char *file_name);
void write_setting(const char *file_name);
void write_result(const char *file_name);
void learning();
void testing();

K_MEANS();
~K_MEANS();
signals:
    void get_finished();

};




#endif
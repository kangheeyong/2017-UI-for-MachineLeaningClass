#ifndef __MY_SELF_OORGANIZING_MAP_CPP__
#define __MY_SELF_OORGANIZING_MAP_CPP__


#include "my_data.hpp"
#include <QThread>

class MY_SOM : public QThread {


    Q_OBJECT

private :

    void run();

public :

    bool read_status,learning_status;
    double MSE;
    MY_DATA weight, origin, setting;
    MY_DATA origin_maching, weight_before;
    int cluster;
    int  total;
    double gain;
    double distance_gain;
    double weight_range_min;
    double weight_range_max;
    int epoch;
    MY_DATA result;


    void init(int cluster,int total,double gain, double distance_gain, double weight_range_min, double weight_range_max);
    void status();
    void read_input(const char *file_name);
    void read_weight(const char *file_name);
    void write_weight(const char *file_name);
    void write_setting(const char *file_name);
    void write_result(const char *file_name);
    void learning();
    void testing();
    double get_percent();

    MY_SOM();
    ~MY_SOM();

signals:
    void get_percent(double value);
    void get_finished();
};



#endif

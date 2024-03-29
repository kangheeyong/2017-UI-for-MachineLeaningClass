#ifndef __MY_CENTROID_NEURAL_NETWORK_CPP__
#define __MY_CENTROID_NEURAL_NETWORK_CPP__
#define PRINT     cout


#include "my_data.hpp"
#include <QThread>

class MY_CNN : public QThread{

    Q_OBJECT
private :



public :

    bool read_status,learning_status;
    int cluster;
    int epoch;
    double MSE;
    MY_DATA weight, origin, setting;
    MY_DATA origin_maching;
    int centroid_k;
    MY_DATA variance,wcnn_weight;
    MY_DATA mean;
    MY_DATA result;

    void init(int cluster);
    void status();
    void read_input(const char *file_name);
    void read_weight(const char *file_name);
    void write_weight(const char *file_name);
    void write_setting(const char *file_name);
    void write_result(const char *file_name);
    void learning();
    void WCNN_learning();
    void testing();
    double get_percent();

    void run();

    MY_CNN();
    ~MY_CNN();

signals:
    void get_percent(double value);
    void get_finished();
};



#endif

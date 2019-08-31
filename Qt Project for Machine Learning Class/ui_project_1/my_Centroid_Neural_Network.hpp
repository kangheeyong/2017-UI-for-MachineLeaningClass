#ifndef __MY_CENTROID_NEURAL_NETWORK_CPP__
#define __MY_CENTROID_NEURAL_NETWORK_CPP__
#define PRINT     cout


#include "my_data.hpp"

class MY_CNN{

private :



public :

bool read_status,learning_status;
int cluster;
int epoch;
double MSE;

int centroid_k;

MY_DATA weight, origin, setting;
MY_DATA origin_maching;

void init(int cluster);
void status();
void read_input(const char *file_name);
void read_weight(const char *file_name);
void write_input(const char *file_name);
void write_weight(const char *file_name);
void write_setting(const char *file_name);
void write_result(const char *file_name);
void learning();
void testing();
double get_percent();

MY_CNN();
~MY_CNN();


};



#endif
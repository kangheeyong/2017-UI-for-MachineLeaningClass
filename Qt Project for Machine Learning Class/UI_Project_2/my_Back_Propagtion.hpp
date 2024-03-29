#ifndef __MY_BACK_PROPAGATION_CPP__
#define __MY_BACK_PROPAGATION_CPP__

#define F(X)        1/(1 + exp(-X))


#include "my_data.hpp"
#include <QThread>

class MY_BP : public QThread{

    Q_OBJECT

private :


public :
    MY_DATA origin,setting,result,errors,target,input;
    MY_DATA *w,*u,*delta,neurals;
    int iteration, epoch, max_epoch;
    int total_neural_layers;
    double error, target_error;
    double gain;
    int total_set;
    int input_dimension;
    int output_dimension;

    bool setting_status;
    bool weight_status;
    bool input_status;

    void gradient_descent_algorithm();
    void activation();



  MY_BP();
  ~MY_BP();
  void init();
  void status();
  void read_input(const char *file_name);
  void read_weight(const char *file_name);
  void rand_weight();
  void mkdir_learning_result(const char* file_name);
  void read_setting(const char *file_name);
  void write_weight(const char *file_name);
  void write_setting(const char *file_name);
  void write_result(const char *file_name);
  void write_error(const char *file_name);
  void learning();
  void testing();

  void run();

signals:
    void get_percent(double value);
    void get_finished();

};



#endif

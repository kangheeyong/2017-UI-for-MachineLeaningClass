#ifndef __MY_DATA_CPP__
#define __MY_DATA_CPP__

#define PRINT_PER_EPOCH   50
#define  BUFF_SIZE   1024

#include <time.h>

class MY_DATA{
private:

  double *data;
  int row;
  int column;

  clock_t start_point, end_point;

public:

  void init(); //초기화
  void init(int y);
  void init(int y, int x);
  bool print();
  void random(); //data 값의 랜덤
  void random(double min, double max);
  void suffle(); //data의 row단위로 섞는다.
  void suffle(int num); //data의 row단위로 섞는다.
  void timer(int now, int total); //data의 row단위로 섞는다.
  const int get_row();
  const int get_column();
  bool fread(const char *fname); //텍스트 읽기
  bool fwrite(const char *fname); //텍스트 쓰기
  const double& operator()(int y) const; //배열처럼 쓸수 있게 출력
  double& operator()(int y); //배열처럼 쓸 수 있게 대입
  const double& operator()(int y, int x) const; //배열처럼 쓸수 있게 출력
  double& operator()(int y, int x); //배열처럼 쓸 수 있게 대입
  MY_DATA& operator=(const MY_DATA &other); //대입연산자
  MY_DATA& operator+(const MY_DATA &other); //더하기 
  MY_DATA& operator-(const MY_DATA &other); //빼기

  MY_DATA();
  ~MY_DATA();

};



#endif

#ifndef __MY_MATRIX_CPP__
#define __MY_MATRIX_CPP__

#define MY_ALL        -1

class My_Matrix{

  private :
    friend My_Matrix operator+(const My_Matrix &T1, const My_Matrix &T2);
    friend My_Matrix operator+(const My_Matrix &T, const double num);
    friend My_Matrix operator+(const double num, const My_Matrix &T);

    friend My_Matrix operator-(const My_Matrix &T1, const My_Matrix &T2);
    friend My_Matrix operator-(const My_Matrix &T, const double num);
    friend My_Matrix operator-(const double num, const My_Matrix &T);

    friend My_Matrix operator*(const My_Matrix &T1, const My_Matrix &T2);
    friend My_Matrix operator*(const My_Matrix &T, const double num);
    friend My_Matrix operator*(const double num, const My_Matrix &T);

    friend My_Matrix mul(const My_Matrix &T1, const My_Matrix &T2);

    double *data;
    int row, column;

  protected :
  public :

    void init(int y, int x);
    void print(); 

    int get_row() const { return this->row; };
    int get_column() const { return this->column; };
    void gaussian(double average, double stdev);

    My_Matrix transpose();

    My_Matrix vector(int y, int x);

    double sum();
    const double&  operator()(int y, int x) const { return this->data[y*this->row+x]; };
    double&  operator()(int y, int x) { return this->data[y*this->row+x]; };   

    My_Matrix& operator=(const My_Matrix &other);


    My_Matrix();  
    ~My_Matrix();

};


#endif

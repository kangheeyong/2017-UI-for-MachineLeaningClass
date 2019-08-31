#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "enter.h"
#include "input.h"
#include <QDebug>
#include <QThread>
#include "my_Centroid_Neural_Network.hpp"
#include "cnn_settiing.h"
#include <QtCharts>
#include "save.h"
#include "lord.h"
#include "my_data.hpp"
#include "my_Self_Organizing_Map.hpp"
#include "som_setting.h"
#include "my_K_Means.hpp"
#include "k_means_setting.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void get_pertent(double value);
    void learning_finished();
    void tesing_finished();
    void on_inputButton_clicked();

    void on_settingButton_clicked();

    void on_learningButton_clicked();

    void on_testingButton_clicked();

    void on_pushButton_start_clicked();

    void on_NewButton_clicked();

    void on_SaveButton_clicked();

    void on_LoadButton_clicked();

    void on_error_Button_clicked();

    void on_TwoByTwo_Button_clicked();

private:
    Ui::MainWindow *ui;
    enter w_enter;
    input w_input;

    int algorithm_num;

    QString input_name, project_name;
    int cluster;

    QChart *chart;
    QChartView *chartView;
    QScatterSeries *scatter_series;
    QMainWindow TwoPlotWindow;

    bool learning_ready;
    bool testing_ready;
    bool learn_or_test;

    MY_CNN *cnn;
    MY_SOM *som;
    K_MEANS *k_means;

    int input_dimention, setting_dimeintion;
};

#endif // MAINWINDOW_H

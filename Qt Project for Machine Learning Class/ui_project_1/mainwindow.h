#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "my_Centroid_Neural_Network.hpp"
#include <QtConcurrent/QtConcurrentRun>
#include <QFileDialog>


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
    void on_pushButton_start_clicked();

    void on_inputButton_clicked();

    void on_settingButton_clicked();

    void on_learningButton_clicked();

    void on_testingButton_clicked();

    void on_NewButton_clicked();

    void on_LoadButton_clicked();

    void on_SaveButton_clicked();

private:
    Ui::MainWindow *ui;

    QDir dir;
    QFileInfoList list;
    QString input_name;
    QString project_name;
    int cluster;
    int LeaningOrTesting;


};

#endif // MAINWINDOW_H

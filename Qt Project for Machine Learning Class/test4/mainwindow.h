#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtConcurrent/QtConcurrentRun>
#include <QFutureWatcher>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
 //   void hello();

private slots:


    void on_pushButton_3_clicked();

    void on_listWidget_activated(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    int index;
    QFuture<void> f1;
    QFutureWatcher<void> th1;
    int a;

};

#endif // MAINWINDOW_H

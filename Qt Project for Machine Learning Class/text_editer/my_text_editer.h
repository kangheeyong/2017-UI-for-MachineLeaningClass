#ifndef MY_TEXT_EDITER_H
#define MY_TEXT_EDITER_H

#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
namespace Ui {
class my_text_editer;
}

class my_text_editer : public QDialog
{
    Q_OBJECT

public:
    explicit my_text_editer(QWidget *parent = 0);
    ~my_text_editer();

private slots:
    void on_exit_clicked();

    void on_select_dir_clicked();

    void on_file_open_clicked();

    void on_file_save_clicked();

    void on_listWidget_clicked(const QModelIndex &index);

private:
    Ui::my_text_editer *ui;
    QDir dir;
    QFileInfoList list;


};

#endif // MY_TEXT_EDITER_H

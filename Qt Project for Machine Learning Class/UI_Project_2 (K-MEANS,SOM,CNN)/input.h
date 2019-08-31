#ifndef INPUT_H
#define INPUT_H

#include <QDialog>
#include <QFileDialog>
#include <QDebug>
#include <QThread>

namespace Ui {
class input;
}

class input : public QDialog
{
    Q_OBJECT

public:
    explicit input(QWidget *parent = 0);
    QString get_file_name();
    ~input();

private slots:

    void on_listWidget_clicked(const QModelIndex &index);


    void on_buttonBox_accepted();

private:
    Ui::input *ui;
    QDir dir;
    QFileInfoList list;
    QString  filename;
    bool status;
};


#endif // INPUT_H

#ifndef INPUT_READ_H
#define INPUT_READ_H

#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class Input_Read;
}

class Input_Read : public QDialog
{
    Q_OBJECT

public:
    explicit Input_Read(QWidget *parent = 0);
    ~Input_Read();

    QString get_read_path();

private slots:
    void on_listWidget_clicked(const QModelIndex &index);

private:
    Ui::Input_Read *ui;
    QDir dir;
    QFileInfoList list;
    QString  filename;
};

#endif // INPUT_READ_H

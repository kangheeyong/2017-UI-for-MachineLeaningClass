#ifndef LORD_H
#define LORD_H

#include <QDialog>
#include <QFileDialog>
#include <QDebug>
namespace Ui {
class Lord;
}

class Lord : public QDialog
{
    Q_OBJECT

public:
    explicit Lord(QWidget *parent = 0);
    Lord(int n);
    ~Lord();
    QString  get_read_path();
private slots:
    void on_listWidget_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::Lord *ui;
    QDir dir;
    QFileInfoList list;
    QString  filename;
    int num;
};

#endif // LORD_H

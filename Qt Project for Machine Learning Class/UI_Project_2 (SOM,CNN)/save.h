#ifndef SAVE_H
#define SAVE_H

#include <QDialog>

namespace Ui {
class Save;
}

class Save : public QDialog
{
    Q_OBJECT

public:
    explicit Save(QWidget *parent = 0);
    QString get_filename();
    ~Save();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Save *ui;
    QString name;
};

#endif // SAVE_H

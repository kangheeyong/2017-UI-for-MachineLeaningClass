#ifndef AAAAA_H
#define AAAAA_H

#include <QDialog>

namespace Ui {
class aaaaa;
}

class aaaaa : public QDialog
{
    Q_OBJECT

public:
    explicit aaaaa(QWidget *parent = 0);
    ~aaaaa();

private:
    Ui::aaaaa *ui;
};

#endif // AAAAA_H

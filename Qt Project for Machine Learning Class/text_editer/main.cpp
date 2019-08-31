#include "my_text_editer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    my_text_editer w;
    w.show();

    return a.exec();
}

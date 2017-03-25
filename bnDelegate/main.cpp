#include "bndelegate.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bnDelegate w;
    w.show();

    return a.exec();
}

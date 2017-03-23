#include "bnfilesystem.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bnFileSystem w;
    w.show();

    return a.exec();
}

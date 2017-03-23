#ifndef BNFILESYSTEM_H
#define BNFILESYSTEM_H

#include <QDialog>

namespace Ui {
class bnFileSystem;
}

class bnFileSystem : public QDialog
{
    Q_OBJECT

public:
    explicit bnFileSystem(QWidget *parent = 0);
    ~bnFileSystem();

private:
    Ui::bnFileSystem *ui;
};

#endif // BNFILESYSTEM_H

#ifndef BNFILESYSTEM_H
#define BNFILESYSTEM_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QFileSystemModel>

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
    QFileSystemModel *dirmodel;
    QFileSystemModel *filemodel;
};

#endif // BNFILESYSTEM_H

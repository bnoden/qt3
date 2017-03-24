#include "bnfilesystem.h"
#include "ui_bnfilesystem.h"

bnFileSystem::bnFileSystem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bnFileSystem)
{
    ui->setupUi(this);

    QString sPath = "C:/";

    dirmodel = new QFileSystemModel(this);
    dirmodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    dirmodel->setRootPath(sPath);

    ui->treeView->setModel(dirmodel);

    filemodel = new QFileSystemModel(this);
    filemodel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
    filemodel->setRootPath(sPath);

    ui->listView->setModel(filemodel);

}

bnFileSystem::~bnFileSystem()
{
    delete ui;
}

void bnFileSystem::on_treeView_clicked(const QModelIndex &index)
{
    QString sPath = dirmodel->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(filemodel->setRootPath(sPath));
}

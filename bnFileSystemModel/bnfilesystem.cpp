#include "bnfilesystem.h"
#include "ui_bnfilesystem.h"

bnFileSystem::bnFileSystem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bnFileSystem)
{
    ui->setupUi(this);

    QString sPath = "C:/";

    dirmodel = new QFileSystemModel(this);
    dirmodel->setRootPath(sPath);
    ui->treeView->setModel(dirmodel);
}

bnFileSystem::~bnFileSystem()
{
    delete ui;
}

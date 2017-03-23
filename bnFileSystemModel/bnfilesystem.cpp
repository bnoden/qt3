#include "bnfilesystem.h"
#include "ui_bnfilesystem.h"

bnFileSystem::bnFileSystem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bnFileSystem)
{
    ui->setupUi(this);
}

bnFileSystem::~bnFileSystem()
{
    delete ui;
}

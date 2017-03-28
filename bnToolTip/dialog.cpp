#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->btn1->setToolTip(ui->btn1->text());
    ui->btn2->setToolTip(ui->btn2->text());
}

Dialog::~Dialog()
{
    delete ui;
}

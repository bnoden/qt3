#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QString bnGreen = "#84E387", bnRed = "#E38484";

    ui->btn1->setToolTip("<font color="+bnGreen+"><strong>"+
                         ui->btn1->text()+"</strong></font>");

    ui->btn2->setToolTip("<img src=':/img/img/note.png'>");
}

Dialog::~Dialog()
{
    delete ui;
}

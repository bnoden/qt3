#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QString bnGreen = "#28802A", bnRed = "#802828";

    ui->btn1->setText("Click ?");

    ui->btn1->setWhatsThis("<font size='4' color="+bnGreen+"><strong>"
                           "Button</strong></font><br>"
                                            "This is just a simple button.");
}

Dialog::~Dialog()
{
    delete ui;
}

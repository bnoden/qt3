#include "bndelegate.h"
#include "ui_bndelegate.h"

bnDelegate::bnDelegate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bnDelegate)
{
    const quint16 ROWS = 4, COLS = 2;

    ui->setupUi(this);

    model = new QStandardItemModel(ROWS, COLS, this);

    quint16 row = 0, col = 0, qItem = 0;
    for (row = 0; row < ROWS; ++row) {
        for (col = 0; col < COLS; ++col) {
            qItem++;
            QModelIndex index = model->index(row, col, QModelIndex());
            model->setData(index, qItem);
        }
    }

    ui->tableView->setModel(model);
}

bnDelegate::~bnDelegate()
{
    delete ui;
}

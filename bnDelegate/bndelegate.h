#ifndef BNDELEGATE_H
#define BNDELEGATE_H

#include <QDialog>
#include <QtCore>
#include <QtGui>

namespace Ui {
class bnDelegate;
}

class bnDelegate : public QDialog
{
    Q_OBJECT

public:
    explicit bnDelegate(QWidget *parent = 0);
    ~bnDelegate();

private:
    Ui::bnDelegate *ui;

    QStandardItemModel *model;
};

#endif // BNDELEGATE_H

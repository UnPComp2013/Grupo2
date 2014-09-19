#include "segunda1.h"
#include "ui_segunda1.h"

Segunda1::Segunda1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Segunda1)
{
    ui->setupUi(this);
     for(int i = 0; i < 9; i++)
    {
        ui->listWidget->addItem(QString::number(i) + "frango");
    }
}

Segunda1::~Segunda1()
{
    delete ui;
}

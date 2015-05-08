#include "segunda1.h"
#include "ui_segunda1.h"

Segunda1::Segunda1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Segunda1)


Segunda1::~Segunda1()
{
    delete ui;
}

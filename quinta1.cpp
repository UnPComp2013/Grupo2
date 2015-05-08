#include "quinta1.h"
#include "ui_quinta1.h"

quinta1::quinta1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quinta1)
{
    ui->setupUi(this);
}

quinta1::~quinta1()
{
    delete ui;
}

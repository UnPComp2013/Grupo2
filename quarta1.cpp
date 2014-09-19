#include "quarta1.h"
#include "ui_quarta1.h"

quarta1::quarta1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quarta1)
{
    ui->setupUi(this);
}

quarta1::~quarta1()
{
    delete ui;
}

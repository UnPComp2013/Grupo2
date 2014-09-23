#include "terca1.h"
#include "ui_terca1.h"

Terca1::Terca1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Terca1)
{
    ui->setupUi(this);
    ui->listWidget->addItem("tardelle");
    ui->listWidget->addItem("tardelle");
}

Terca1::~Terca1()
{
    delete ui;
}

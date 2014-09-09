#include "cardapio.h"
#include "ui_cardapio.h"
#include <segunda1.h>
#include <terca1.h>

cardapio::cardapio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cardapio)
{
    ui->setupUi(this);
}

cardapio::~cardapio()
{
    delete ui;
}

void cardapio::on_SEGUNDA_clicked()
{
   Segunda1 *segunda1 = new Segunda1(this);
   segunda1->setModal(true);
   segunda1->show();
   segunda1->exec();

   delete segunda1;
}

void cardapio::on_TERCA_clicked()
{
    Terca1 *terca1 = new Terca1(this);
    terca1->setModal(true);
    terca1->show();
    terca1->exec();
 
    delete terca1; 
}

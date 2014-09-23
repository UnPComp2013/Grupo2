#include "cardapio.h"
#include "ui_cardapio.h"
#include <segunda1.h>
#include <terca1.h>
#include <quarta1.h>
#include <quinta1.h>
#include <sexta1.h>


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

void cardapio::on_QUARTA_clicked()
{
    Quarta1 *quarta1 = new Quarta1(this);
    quarta1->setModal(true);
    quarta1->show();
    quarta1->exec();

    delete quarta1;

    }
    
    void cardapio::on_QUINTA_clicked()
{
    Quinta1 *quinta1 = new Quinta1(this);
    quinta1->setModal(true);
    quinta1->show();
    quinta1->exec();

    delete quinta1;
}

void cardapio::on_SEXTA_clicked()
{


        Sexta1 *sexta1 = new Sexta1(this);
        sexta1->setModal(true);
        sexta1->show();
        sexta1->exec();

        delete sexta1;

}

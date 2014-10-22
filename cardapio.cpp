#include "cardapio.h"
#include "ui_cardapio.h"
#include <segunda1.h>


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





    
    

void cardapio::on_SEXTA_clicked()
{


        Sexta1 *sexta1 = new Sexta1(this);
        sexta1->setModal(true);
        sexta1->show();
        sexta1->exec();

        delete sexta1;

}

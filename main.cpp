#include "cardapio.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cardapio w;
    w.show();

    return a.exec();
}

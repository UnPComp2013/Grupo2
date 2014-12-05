#include "mainwindow.h"
#include "sql.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    sql sql1;
    if(sql1.conectar())
    {
//        sql1.inserir();
        sql1.consulta();
    }

    QApplication a(argc, argv);
    MainWindow w;
    w.show();



    return a.exec();
}

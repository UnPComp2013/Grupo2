#ifndef SQL_H
#define SQL_H
#include <QtSql>
#include <QtDebug>
#include <iostream>
#include <string.h>
class sql
{
public:
   sql();
   bool conectar();
   void consulta();
   void inserir();
   QSqlDatabase db;
};
#endif 

#ifndef INTERFACE_1_H
#define INTERFACE_1_H
#include "dialog.h"

#include <QMainWindow>

namespace Ui {
class Interface_1;
}

class Interface_1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Interface_1(QWidget *parent = 0);
    ~Interface_1();

private slots:
    void on_Loginbutt_clicked();

private:
    Ui::Interface_1 *ui;
    Dialog *inter2;
};

#endif // INTERFACE_1_H

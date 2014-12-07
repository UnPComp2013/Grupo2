#ifndef PRODUTO_H
#define PRODUTO_H

#include <QWidget>

namespace Ui {
class Produto;
}

class Produto : public QWidget
{
    Q_OBJECT

public:
    explicit Produto(QWidget *parent = 0);
    ~Produto();

private:
    Ui::Produto *ui;
};

#endif // PRODUTO_H

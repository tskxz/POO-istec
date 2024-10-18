#ifndef VELHO_H
#define VELHO_H

#include "Imovel.h"

class Velho : public Imovel {
private:
    double desconto;

public:
    Velho(std::string endereco, double preco, double desconto);
    double getDesconto() const;
    void setDesconto(double desconto);
    void imprime() const override;
};

#endif

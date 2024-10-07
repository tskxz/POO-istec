#ifndef NOVO_H
#define NOVO_H

#include "Imovel.h"

class Novo : public Imovel {
private:
    double adicional;

public:
    Novo(std::string endereco, double preco, double adicional);
    double getAdicional() const;
    void setAdicional(double adicional);
    void imprime() const override;
};

#endif

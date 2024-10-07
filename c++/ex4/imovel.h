#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>

class Imovel {
protected:
    std::string endereco;
    double preco;

public:
    Imovel(std::string endereco, double preco);
    std::string getEndereco() const;
    double getPreco() const;
    virtual void imprime() const;
};

#endif

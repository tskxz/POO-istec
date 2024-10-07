#include "Imovel.h"
#include <iostream>

using namespace std;

Imovel::Imovel(string endereco, double preco) : endereco(endereco), preco(preco) {}

string Imovel::getEndereco() const {
    return endereco;
}

double Imovel::getPreco() const {
    return preco;
}

void Imovel::imprime() const {
    cout << "Endereço: " << endereco << endl;
    cout << "Preço: " << preco << " euros" << endl;
}

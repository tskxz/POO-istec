#include "Velho.h"
#include <iostream>

using namespace std;

Velho::Velho(string endereco, double preco, double desconto)
    : Imovel(endereco, preco), desconto(desconto) {}

double Velho::getDesconto() const {
    return desconto;
}

void Velho::setDesconto(double desconto) {
    this->desconto = desconto;
}

void Velho::imprime() const {
    Imovel::imprime();
    cout << "Desconto pelo imóvel velho: " << desconto << " euros" << endl;
    cout << "Preço final: " << preco - desconto << " euros" << endl;
}

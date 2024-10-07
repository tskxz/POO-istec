#include "Novo.h"
#include <iostream>

using namespace std;

Novo::Novo(string endereco, double preco, double adicional)
    : Imovel(endereco, preco), adicional(adicional) {}

double Novo::getAdicional() const {
    return adicional;
}

void Novo::setAdicional(double adicional) {
    this->adicional = adicional;
}

void Novo::imprime() const {
    Imovel::imprime();
    cout << "Adicional pelo imóvel novo: " << adicional << " euros" << endl;
    cout << "Preço final: " << preco + adicional << " euros" << endl;
}

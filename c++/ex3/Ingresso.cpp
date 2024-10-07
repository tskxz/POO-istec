#include "Ingresso.h"
#include <iostream>

using namespace std;

Ingresso::Ingresso(double valor) : valor(valor) {}

void Ingresso::imprimeValor() const {
    cout << "Valor do ingresso: " << valor << " euros" << endl;
}

double Ingresso::getValor() const {
    return valor;
}

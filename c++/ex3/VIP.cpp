#include "VIP.h"
#include <iostream>

using namespace std;

VIP::VIP(double valor, double valorAdicional) : Ingresso(valor), valorAdicional(valorAdicional) {}

double VIP::getValorVIP() const {
    return valor + valorAdicional;
}

void VIP::imprimeValor() const {
    cout << "Valor do ingresso VIP: " << getValorVIP() << " euros" << endl;
}

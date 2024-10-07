#include "CamaroteSuperior.h"
#include <iostream>

using namespace std;

CamaroteSuperior::CamaroteSuperior(double valor, double valorAdicional, double valorAdicionalSuperior)
    : VIP(valor, valorAdicional), valorAdicionalSuperior(valorAdicionalSuperior) {}

double CamaroteSuperior::getValorCamaroteSuperior() const {
    return valor + valorAdicional + valorAdicionalSuperior;
}

void CamaroteSuperior::imprimeValor() const {
    cout << "Valor do ingresso Camarote Superior: " << getValorCamaroteSuperior() << " euros" << endl;
}

#include "CamaroteInferior.h"
#include <iostream>

using namespace std;

CamaroteInferior::CamaroteInferior(double valor, double valorAdicional, string localizacao)
    : VIP(valor, valorAdicional), localizacao(localizacao) {}

string CamaroteInferior::getLocalizacao() const {
    return localizacao;
}

void CamaroteInferior::imprimeLocalizacao() const {
    cout << "Localização do ingresso: " << localizacao << endl;
}

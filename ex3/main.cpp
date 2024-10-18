#include "Normal.h"
#include "VIP.h"
#include "CamaroteInferior.h"
#include "CamaroteSuperior.h"
#include <iostream>

using namespace std;

int main() {
    // Ingresso Normal
    Normal ingressoNormal(50);
    ingressoNormal.imprimeTipo();
    ingressoNormal.imprimeValor();
    cout << endl;

    // Ingresso VIP
    VIP ingressoVIP(50, 30);
    ingressoVIP.imprimeValor();
    cout << endl;

    // Ingresso Camarote Inferior
    CamaroteInferior ingressoCamaroteInferior(50, 30, "Bloco A - Fila 3");
    ingressoCamaroteInferior.imprimeValor();
    ingressoCamaroteInferior.imprimeLocalizacao();
    cout << endl;

    // Ingresso Camarote Superior
    CamaroteSuperior ingressoCamaroteSuperior(50, 30, 20);
    ingressoCamaroteSuperior.imprimeValor();

    return 0;
}

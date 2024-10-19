#include "Novo.h"
#include "Velho.h"
#include <iostream>

using namespace std;

int main() {
    // Imóvel Novo
    Novo imovelNovo("Rua Nova, 123", 200000, 50000);
    imovelNovo.imprime();
    cout << endl;

    // Imóvel Velho
    Velho imovelVelho("Rua Antiga, 45", 150000, 30000);
    imovelVelho.imprime();
    cout << endl;

    return 0;
}

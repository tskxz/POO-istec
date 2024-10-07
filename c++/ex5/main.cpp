#include "../ex1/Tecnico.h"
#include "../ex1/Administrativo.h"
#include "../ex2/Animal/Cao.h"
#include "../ex2/Animal/Gato.h"
#include "../ex2/Pessoa/Rica.h"
#include "../ex2/Pessoa/Pobre.h"
#include "../ex2/Pessoa/Miseravel.h"
#include "../ex3/Normal.h"
#include "../ex3/VIP.h"
#include "../ex3/CamaroteSuperior.h"
#include "../ex3/CamaroteInferior.h"
#include "../ex4/Novo.h"
#include "../ex4/Velho.h"
#include <iostream>

using namespace std;

int main() {
    // Parte a: Criando Assistente Administrativo e Técnico
    Tecnico tecnico("Carlos", 1200, 123456, 500);
    Administrativo admin("Maria", 1100, 654321, "Manhã");
    cout << "Nome do Técnico: " << tecnico.getNome() << ", Matrícula: " << tecnico.getMatricula() << endl;
    cout << "Nome do Administrativo: " << admin.getNome() << ", Matrícula: " << admin.getMatricula() << endl;
    
    // Parte b: Criando cao e gato
    Cao cao("Bobby", "Pastor Alemão");
    Gato gato("Whiskers", "Persa");
    cout << cao.late() << endl;
    cout << gato.mia() << endl;
    cout << cao.caminha() << endl;
    cout << gato.caminha() << endl;

    // Parte c: Testando as classes Rica, Pobre, Miserável
    Rica rica("Sofia", 1000000);
    Pobre pobre("João", 1500);
    Miseravel miseravel("Carlos", 100);
    
    rica.fazCompras();
    pobre.trabalha();
    miseravel.mendiga();

    // Parte d: Ingresso Normal ou VIP
    int opcao;
    cout << "Digite 1 para Ingresso Normal ou 2 para VIP: ";
    cin >> opcao;
    
    if (opcao == 1) {
        Normal ingressoNormal(50);
        ingressoNormal.imprimeValor();
    } else if (opcao == 2) {
        int tipoVip;
        cout << "Digite 1 para Camarote Superior ou 2 para Camarote Inferior: ";
        cin >> tipoVip;

        if (tipoVip == 1) {
            CamaroteSuperior camaroteSup(100, 50);
            camaroteSup.imprimeValor();
        } else if (tipoVip == 2) {
            CamaroteInferior camaroteInf(100, "Setor A");
            camaroteInf.imprimeLocalizacao();
        }
    }

    // Parte e: Imóvel Novo ou Velho
    cout << "Digite 1 para Imóvel Novo ou 2 para Imóvel Velho: ";
    cin >> opcao;
    
    if (opcao == 1) {
        Novo imovelNovo("Rua Nova, 100", 300000, 50000);
        imovelNovo.imprime();
    } else if (opcao == 2) {
        Velho imovelVelho("Rua Velha, 45", 200000, 30000);
        imovelVelho.imprime();
    }

    return 0;
}

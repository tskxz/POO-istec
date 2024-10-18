#include "Pessoa.h"
#include "Rica.h"
#include "Pobre.h"
#include "Miseravel.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	Pessoa tanjil;
	Rica luis;
	luis.fazCompras();
	Pobre joao;
	joao.trabalha();
	Miseravel mendigo;
	mendigo.mendiga();
}

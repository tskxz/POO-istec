#include <iostream>
#include "Funcionario.h"
#include "Assistente.h"
#include "Tecnico.h"
#include "Administrativo.h"

#include <string>
using namespace std;

int main(){
	Funcionario func1("tanjil", 800);
	func1.exibeDados();

	Assistente ass1("ricardo", 800, 202291);
	ass1.exibeDados();

	Tecnico tec1("Luis", 900, 2022199, 100);
	tec1.exibeDados();
	
	Administrativo adm1("Diogo", 1000, 2022198, "noite", 10);
	adm1.exibeDados();
}


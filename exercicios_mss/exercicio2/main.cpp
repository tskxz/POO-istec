#include <iostream>
#include <string>

#include "Pessoa.h"
#include "Universidade.h"

int main(){
	Universidade uni1("Princeton");
	Universidade uni2("Cambridge");

	Pessoa einstein("einstein", "14/3/1879");
	Pessoa newton("newton", "4/1/1643");
	
	einstein.setUniversidade(&uni1);
	newton.setUniversidade(&uni2);

	einstein.getInformacoes();
	newton.getInformacoes();
	
}

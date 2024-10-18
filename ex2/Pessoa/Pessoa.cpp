#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

Pessoa::Pessoa(){
	string nome;
	int idade;
	
	cout << "Nome: ";
	cin >> nome;
	cout << "Idade: ";
	cin >> idade;
	
	this->nome = nome;
	this->idade = idade;

}

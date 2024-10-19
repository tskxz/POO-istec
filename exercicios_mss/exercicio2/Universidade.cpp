#include "Universidade.h"

#include <iostream>
#include <string>

using namespace std;

Universidade::Universidade(string nome){
	this->nome = nome;
}

string Universidade::getNome(){
	return this->nome;
}

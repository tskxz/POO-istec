#include "Cao.h"
#include <iostream>
#include <string>

Cao::Cao(string nome, string raca) : Animal(nome){
	this->nome = nome;
	this->raca = raca;
}

string Cao::late(){
	return "woof";
}

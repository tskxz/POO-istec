#include "Gato.h"
#include <iostream>
#include <string>

using namespace std;

Gato::Gato(string nome, string raca) : Animal(nome){
	this->nome = nome;
	this->raca = raca;
}

string Gato::mia(){
	return "miau";
}

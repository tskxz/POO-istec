#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

Animal::Animal(){
	this->nome = "nome";
	this->raca = "raca";
}

Animal::Animal(string nome){
	this->nome = nome;
}

string Animal::caminha(){
	return "A caminhar";
}

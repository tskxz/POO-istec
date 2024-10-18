#include <iostream>
#include <string>
#include "Assistente.h"

using namespace std;

Assistente::Assistente(string nome, double salario, int matricula) : Funcionario(nome, salario){
	this->matricula = matricula;
}

int Assistente::getMatricula(){
	return matricula;
}

void Assistente::setMatricula(int matricula){
	this->matricula = matricula;
}

void Assistente::exibeDados(){
	Funcionario::exibeDados();
	cout << "Matricula: " << getMatricula() << endl;
}

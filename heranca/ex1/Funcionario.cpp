#include "Funcionario.h"
#include <string>
#include <iostream>

using namespace std;

Funcionario::Funcionario(string nome, double salario){
	this->nome = nome;
	this->salario = salario;
}

void Funcionario::addAumento(double valor){
	this->salario += valor;
}

double Funcionario::getSalario(){
	return this->salario;
}

double Funcionario::ganhoAnual(){
	double salario = getSalario();
	return salario * 12;
}

void Funcionario::exibeDados(){
	cout << "Nome: " << this->nome << endl;
	cout << "Salario: " << this->salario << endl;
	cout << "Ganho Anual: " << ganhoAnual() << endl;
}

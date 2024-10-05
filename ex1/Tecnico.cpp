#include <iostream>
#include <string>
#include "Tecnico.h"

using namespace std;

Tecnico::Tecnico(string nome, double salario, int matricula, double bonus_salarial) : Assistente(nome, salario, matricula){
	this->bonus_salarial = bonus_salarial;
}

double Tecnico::getBonusSalarial(){
	return this->bonus_salarial;
}

void Tecnico::setBonusSalarial(double valor){
	this->bonus_salarial = valor;
}

double Tecnico::ganhoAnual(){
	double salario = getSalario();
	return (salario * 12);
}

double Tecnico::ganhoAnualBonusSalarial(){
	double salario = getSalario();
	return (salario * 12) + this->bonus_salarial;
}

void Tecnico::exibeDados(){
	Assistente::exibeDados();
	cout << "Bonus Salarial: " << getBonusSalarial() << endl;
	cout << "Ganho anual com bonus salarial: " << ganhoAnualBonusSalarial() << endl;
}


#include <iostream>
#include <string>
#include "Administrativo.h"

using namespace std;

Administrativo::Administrativo(string nome, double salario, int matricula, string turno, double adicional_noturno) : Assistente(nome, salario, matricula) {
	this->turno = turno;
	this->adicional_noturno = adicional_noturno;
} 

double Administrativo::getAdicionalNoturno(){
	return this->adicional_noturno;
}

void Administrativo::setAdicionalNoturno(double valor){
	this->adicional_noturno = valor;
}

string Administrativo::getTurno(){
	return this->turno;
}

void Administrativo::setTurno(string turno){
	this->turno = turno;
}

double Administrativo::ganhoAnual(){
	string turno = getTurno();
	if(turno == "noite"){ return (getSalario() * 12) + getAdicionalNoturno();} else {return getSalario() * 12;}
}

void Administrativo::exibeDados(){
	Assistente::exibeDados();
	cout << "Turno: " << getTurno() << endl;
	cout << "Adicional Noturno: " << getAdicionalNoturno() << endl;
}

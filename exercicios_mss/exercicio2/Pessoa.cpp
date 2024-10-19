#include "Pessoa.h"

#include <iostream>
#include <string>

using namespace std;

Pessoa::Pessoa(string nome, string data_nascimento){
	this->nome = nome;
	this->data_nascimento = data_nascimento;
	this->univ = nullptr; // Sem universidade para ja
}

void Pessoa::setUniversidade(Universidade* u){
	this->univ = u;
}

string Pessoa::getNome(){
	return this->nome;
}

string Pessoa::getUniversidade(){
	if(univ != nullptr){
		return univ->getNome();
	} else {
		return "Nenhuma universidade";
	}
}

string Pessoa::getDataNascimento(){
	return this->data_nascimento;
}
void Pessoa::getInformacoes(){
	cout << "Nome da pessoa: " << this->getNome() << endl;
	cout << "Data de nascimento: " << this->getDataNascimento() << endl;
	cout << "Universidade: " << this->getUniversidade() << endl;
}

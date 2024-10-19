#ifndef PESSOA_H
#define PESSOA_H

#include "Universidade.h"

using namespace std;

class Pessoa {
	protected:
		string nome;
		string data_nascimento;
		Universidade* univ;
	public:
		Pessoa(string nome, string data_nascimento);
		void setUniversidade(Universidade* u);
		string getNome();
		string getDataNascimento();
		void getInformacoes();
		string getUniversidade();
};

#endif

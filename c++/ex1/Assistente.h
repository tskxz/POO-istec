#ifndef ASSISTENTE_H
#define ASSISTENTE_H
#include "Funcionario.h"
#include <iostream>
#include <string>

using namespace std;

class Assistente : public Funcionario{
	int matricula;
	public:
		Assistente(string nome, double salario, int matricula);
		int getMatricula();
		void setMatricula(int matricula);

		void exibeDados() override;
};

#endif

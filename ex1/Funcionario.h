#ifndef FUNCIONARIO_H 
#define Funcionario_H
#include <string>

using namespace std;

class Funcionario{
	string nome;
	double salario;
	
	public:
		Funcionario(string nome, double salario);
		void addAumento(double valor);
		double ganhoAnual();
		void exibeDados();
};

#endif

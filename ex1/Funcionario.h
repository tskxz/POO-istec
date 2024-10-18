#ifndef FUNCIONARIO_H 
#define FUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario{
	protected:
	string nome;
	double salario;
	
	public:
		Funcionario(string nome, double salario);
		void addAumento(double valor);
		double getSalario();
		void setSalario();
		virtual double ganhoAnual();
		virtual void exibeDados();
};

#endif

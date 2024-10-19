#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H

#include "Assistente.h"
#include <iostream>
#include <string>

using namespace std;

class Administrativo : public Assistente {
	protected:
	string turno;
	double adicional_noturno;
	
	public:
	string getTurno();
	double getAdicionalNoturno();
	void setTurno(string turno);
	void setAdicionalNoturno(double valor);
	Administrativo(string nome, double salario, int matricula, string turno, double adicional_noturno);
	double ganhoAnual() override;
	void exibeDados() override;
};

#endif

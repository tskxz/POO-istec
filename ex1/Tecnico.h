#ifndef TECNICOS_H
#define TECNICOS_H

#include <iostream>
#include <string>
#include "Assistente.h"

using namespace std;

class Tecnico : Assistente{
	private:
		double bonus_salarial;
	public:
			Tecnico(std::string, double salario, int matricula, double bonus_salarial);
			double getBonusSalarial();
			void setBonusSalarial(double valor);
		  	double ganhoAnual() override;
			double ganhoAnualBonusSalarial();
			void exibeDados() override;
		
};

#endif

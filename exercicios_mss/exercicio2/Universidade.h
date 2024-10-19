#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

#include <iostream>
#include <string>

using namespace std;

class Universidade{
	protected:
		string nome;
	public:
		Universidade(string nome);
		string getNome();
};

#endif

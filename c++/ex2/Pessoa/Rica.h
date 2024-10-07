#ifndef RICA_H
#define RICA_H

#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

class Rica : public Pessoa {
	double dinheiro;
	public:
		Rica();
		void fazCompras();
};

#endif

#ifndef MISERAVEL_H
#define MISERAVEL_H

#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

class Miseravel : public Pessoa {
	public:
		Miseravel();
		void mendiga();
};

#endif

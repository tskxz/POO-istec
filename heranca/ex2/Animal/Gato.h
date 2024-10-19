#ifndef GATO_H
#define GATO_H

#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

class Gato : public Animal {
	public:
		Gato(string nome, string raca);
		string mia();
};

#endif

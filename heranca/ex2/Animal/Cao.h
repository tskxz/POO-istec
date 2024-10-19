#ifndef CAO_H
#define CAO_H

#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

class Cao : public Animal{
	public:
		Cao(string nome, string raca);
		string late();
};

#endif

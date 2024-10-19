#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

using namespace std;

class Animal{
	protected:
	string nome;
	string raca;
	public:
	Animal();
	Animal(string nome);
	string caminha();
};

#endif

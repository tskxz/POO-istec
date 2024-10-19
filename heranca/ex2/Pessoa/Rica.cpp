#include <iostream>
#include <string>
#include "Rica.h"

Rica::Rica() : Pessoa() {
	double dinheiro;
	cout << "DInheiro: ";
	cin >> dinheiro;
	this->dinheiro = dinheiro;
}

void Rica::fazCompras(){
	cout << "a fazer compras..." << endl;
}

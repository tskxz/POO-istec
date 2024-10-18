#include "Animal.h"
#include "Cao.h"
#include "Gato.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	Animal an1;
	cout << an1.caminha() << endl;
	Cao cao1("Eddie", "Rafeiro");
	cout << cao1.late() << endl;
	Gato gato1("Garlfield", "laranja");
	cout << gato1.mia() << endl;
}

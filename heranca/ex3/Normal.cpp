#include "Normal.h"
#include <iostream>

using namespace std;

Normal::Normal(double valor) : Ingresso(valor) {}

void Normal::imprimeTipo() const {
    cout << "Ingresso Normal" << endl;
}

#ifndef NORMAL_H
#define NORMAL_H

#include "Ingresso.h"

class Normal : public Ingresso {
public:
    Normal(double valor);
    void imprimeTipo() const;
};

#endif

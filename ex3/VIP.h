#ifndef VIP_H
#define VIP_H

#include "Ingresso.h"

class VIP : public Ingresso {
protected:
    double valorAdicional;

public:
    VIP(double valor, double valorAdicional);
    double getValorVIP() const;
    void imprimeValor() const override;
};

#endif

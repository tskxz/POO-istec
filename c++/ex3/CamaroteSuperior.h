#ifndef CAMAROTE_SUPERIOR_H
#define CAMAROTE_SUPERIOR_H

#include "VIP.h"

class CamaroteSuperior : public VIP {
private:
    double valorAdicionalSuperior;

public:
    CamaroteSuperior(double valor, double valorAdicional, double valorAdicionalSuperior);
    double getValorCamaroteSuperior() const;
    void imprimeValor() const override;
};

#endif

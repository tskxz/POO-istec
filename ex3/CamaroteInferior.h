#ifndef CAMAROTE_INFERIOR_H
#define CAMAROTE_INFERIOR_H

#include "VIP.h"
#include <string>

class CamaroteInferior : public VIP {
private:
    std::string localizacao;

public:
    CamaroteInferior(double valor, double valorAdicional, std::string localizacao);
    std::string getLocalizacao() const;
    void imprimeLocalizacao() const;
};

#endif

#ifndef INGRESSO_H
#define INGRESSO_H

class Ingresso {
protected:
    double valor;
public:
    Ingresso(double valor = 0.0);
    virtual void imprimeValor() const;
    virtual double getValor() const;
};

#endif

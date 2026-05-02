#ifndef DATOGENERICO_H
#define DATOGENERICO_H
#include "NodoBase.h"

class DatoGenerico : public NodoBase<DatoGenerico> {
private:
    int valor;

public:
    void asignarValor(int v) { valor = v; }
    
    void mostrarDato() override {
        std::cout << "[" << valor << "]";
    }
};

#endif

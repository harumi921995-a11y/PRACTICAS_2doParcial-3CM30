#ifndef INDQUICKBASE_H
#define INDQUICKBASE_H
#include "IListaIndQuick.h"

template <typename T>
class IndQuickBase : public IListaIndQuick<T> {
protected:
    T* elementos;      // Arreglo de datos reales
    T** punteros;      // Arreglo de punteros a ordenar
    int capacidad;
    int contador;

public:
    IndQuickBase(int cap) : capacidad(cap), contador(0) {
        elementos = new T[capacidad];
        punteros = new T*[capacidad];
    }
    virtual ~IndQuickBase() {
        delete[] elementos;
        delete[] punteros;
    }
};

#endif

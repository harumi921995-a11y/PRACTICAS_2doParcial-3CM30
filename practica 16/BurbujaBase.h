#ifndef BURBUJABASE_H
#define BURBUJABASE_H
#include "IListaBurbuja.h"

template <typename T>
class BurbujaBase : public IListaBurbuja<T> {
protected:
    T* elementos;
    int capacidad;
    int contador;

public:
    BurbujaBase(int cap);
    virtual ~BurbujaBase();
};

// Implementación de la base
template <typename T>
BurbujaBase<T>::BurbujaBase(int cap) : capacidad(cap), contador(0) {
    elementos = new T[capacidad];
}

template <typename T>
BurbujaBase<T>::~BurbujaBase() {
    delete[] elementos;
}

#endif

#ifndef QUICKBASE_H
#define QUICKBASE_H
#include "IListaQuick.h"

template <typename T>
class QuickBase : public IListaQuick<T> {
protected:
    T* elementos;
    int capacidad;
    int contador;

public:
    QuickBase(int cap) : capacidad(cap), contador(0) {
        elementos = new T[capacidad];
    }
    virtual ~QuickBase() {
        delete[] elementos;
    }
};

#endif

#ifndef NODOBASE_H
#define NODOBASE_H
#include "IEntidad.h"
#include <iostream>

template <typename T>
class NodoBase : public IEntidad<T> {
protected:
    T* siguiente;

public:
    NodoBase() : siguiente(NULL) {}
    
    void setSiguiente(T* sig) override { this->siguiente = sig; }
    T* getSiguiente() override { return this->siguiente; }
};

#endif

#ifndef ENTIDADBASE_H
#define ENTIDADBASE_H
#include <iostream>

template <typename T>
class EntidadBase {
protected:
    T* siguiente; 

public:
    EntidadBase() : siguiente(NULL) {}
    
    virtual void setSiguiente(T* sig) { this->siguiente = sig; }
    virtual T* getSiguiente() { return this->siguiente; }
    virtual void mostrar() = 0;
    virtual ~EntidadBase() {}
};

#endif

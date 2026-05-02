#ifndef ENTIDADBASE_H
#define ENTIDADBASE_H
#include "IEntidad.h"

template <typename T>
class EntidadBase : public IEntidad<T> {
protected:
    T* siguiente; // Puntero autorreferenciado (referencia al mismo tipo)

public:
    EntidadBase() : siguiente(NULL) {}
    
    void setSiguiente(T* sig) override {
        this->siguiente = sig;
    }

    T* getSiguiente() override {
        return this->siguiente;
    }
};

#endif

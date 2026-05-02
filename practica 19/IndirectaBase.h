#ifndef INDIRECTABASE_H
#define INDIRECTABASE_H
#include "IListaIndirecta.h"

template <typename T>
class IndirectaBase : public IListaIndirecta<T> {
protected:
    T* elementos;      // Datos originales
    T** punteros;      // Arreglo de punteros a los datos
    int capacidad;
    int contador;

public:
    IndirectaBase(int cap) : capacidad(cap), contador(0) {
        elementos = new T[capacidad];
        punteros = new T*[capacidad];
    }
    virtual ~IndirectaBase() {
        delete[] elementos;
        delete[] punteros;
    }
};

#endif

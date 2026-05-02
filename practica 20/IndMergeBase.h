#ifndef INDMERGEBASE_H
#define INDMERGEBASE_H
#include "IListaIndMerge.h"

template <typename T>
class IndMergeBase : public IListaIndMerge<T> {
protected:
    T* elementos;      // Datos reales
    T** punteros;      // Punteros que vamos a ordenar
    int capacidad;
    int contador;

public:
    IndMergeBase(int cap) : capacidad(cap), contador(0) {
        elementos = new T[capacidad];
        punteros = new T*[capacidad];
    }
    virtual ~IndMergeBase() {
        delete[] elementos;
        delete[] punteros;
    }
};

#endif

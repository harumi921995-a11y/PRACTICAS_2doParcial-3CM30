#ifndef MERGEBASE_H
#define MERGEBASE_H
#include "IListaMerge.h"

template <typename T>
class MergeBase : public IListaMerge<T> {
protected:
    T* elementos;
    int capacidad;
    int contador;

public:
    MergeBase(int cap) : capacidad(cap), contador(0) {
        elementos = new T[capacidad];
    }
    virtual ~MergeBase() {
        delete[] elementos;
    }
};

#endif

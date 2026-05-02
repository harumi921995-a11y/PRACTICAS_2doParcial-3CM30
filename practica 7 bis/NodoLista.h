#ifndef NODOLISTA_H
#define NODOLISTA_H
#include <iostream>

template <typename T>
class NodoLista {
public:
    T dato;
    NodoLista<T>* siguiente;

    NodoLista(T v) : dato(v), siguiente(NULL) {}
};
#endif

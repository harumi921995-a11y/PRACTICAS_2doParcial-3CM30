#ifndef NODOCOLA_H
#define NODOCOLA_H
#include <iostream>

template <typename T>
class NodoCola {
public:
    T dato;
    NodoCola<T>* siguiente;

    NodoCola(T v) : dato(v), siguiente(NULL) {}
};
#endif

#ifndef PILAESTATICA_H
#define PILAESTATICA_H
#include <iostream>
#define MAX 5

template <typename T>
class PilaEstatica {
private:
    T datos[MAX];
    int tope;

public:
    PilaEstatica() : tope(-1) {}

    void push(T elemento) {
        if (tope < MAX - 1) {
            datos[++tope] = elemento;
            std::cout << "Dato agregado.\n";
        } else {
            std::cout << "Pila llena (Overflow).\n";
        }
    }

    void pop() {
        if (tope >= 0) {
            std::cout << "Eliminando: " << datos[tope--] << "\n";
        } else {
            std::cout << "Pila vacia (Underflow).\n";
        }
    }

    void mostrar() {
        for (int i = tope; i >= 0; i--) {
            std::cout << "[" << datos[i] << "]\n";
        }
    }
};
#endif

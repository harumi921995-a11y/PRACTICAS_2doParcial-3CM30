#ifndef COLAESTATICA_H
#define COLAESTATICA_H
#include <iostream>

#define MAX 5

template <typename T>
class ColaEstatica {
private:
    T datos[MAX];
    int frente;
    int final;
    int contador;

public:
    ColaEstatica() : frente(0), final(-1), contador(0) {}

    void encolar(T elemento) {
        if (contador < MAX) {
            final = (final + 1) % MAX; // Movimiento circular
            datos[final] = elemento;
            contador++;
            std::cout << "Elemento encolado.\n";
        } else {
            std::cout << "Error: Cola llena (Overflow).\n";
        }
    }

    void desencolar() {
        if (contador > 0) {
            std::cout << "Desencolando elemento...\n";
            frente = (frente + 1) % MAX;
            contador--;
        } else {
            std::cout << "Error: Cola vacia (Underflow).\n";
        }
    }

    void mostrar() {
        if (contador == 0) {
            std::cout << "Cola vacia.\n";
            return;
        }
        int aux = frente;
        for (int i = 0; i < contador; i++) {
            std::cout << "[" << datos[aux] << "] ";
            aux = (aux + 1) % MAX;
        }
        std::cout << std::endl;
    }
};
#endif

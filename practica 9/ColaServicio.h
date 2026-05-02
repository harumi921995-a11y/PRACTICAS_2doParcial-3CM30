#ifndef COLASERVICIO_H
#define COLASERVICIO_H
#include <queue>   // Librería oficial de C++ para Colas
#include <iostream>

template <typename T>
class ColaServicio {
private:
    std::queue<T> contenedor; 

public:
    void encolar(T dato) {
        contenedor.push(dato);
        std::cout << "Elemento formado en la cola.\n";
    }

    void desencolar() {
        if (!contenedor.empty()) {
            std::cout << "Atendiendo al primero de la fila...\n";
            contenedor.pop();
        } else {
            std::cout << "La cola esta vacia, no hay nadie a quien atender.\n";
        }
    }

    T& obtenerFrente() {
        return contenedor.front();
    }

    bool estaVacia() {
        return contenedor.empty();
    }
    
    int tamano() {
        return contenedor.size();
    }
};
#endif

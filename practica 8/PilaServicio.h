#ifndef PILASERVICIO_H
#define PILASERVICIO_H
#include <stack>
#include <iostream>

template <typename T>
class PilaServicio {
private:
    std::stack<T> contenedor; // Esta es la librería del IDE

public:
    void agregar(T dato) {
        contenedor.push(dato);
        std::cout << "Elemento agregado a la pila.\n";
    }

    void eliminar() {
        if (!contenedor.empty()) {
            contenedor.pop();
            std::cout << "Elemento eliminado (Tope).\n";
        } else {
            std::cout << "La pila esta vacia.\n";
        }
    }

    void mostrarTope() {
        if (!contenedor.empty()) {
            std::cout << "Elemento en el tope: ";
            // Si T es Persona, necesita manejar su propio metodo de mostrado
            // Para fines practicos, en el main lo gestionaremos
        }
    }

    T& obtenerTope() {
        return contenedor.top();
    }

    bool estaVacia() {
        return contenedor.empty();
    }
};
#endif

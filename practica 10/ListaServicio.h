#ifndef LISTASERVICIO_H
#define LISTASERVICIO_H
#include <list>
#include <iostream>

template <typename T>
class ListaServicio {
private:
    std::list<T> contenedor; 

public:
    void insertarFinal(T dato) {
        contenedor.push_back(dato);
        std::cout << "Elemento agregado al final.\n";
    }

    void insertarInicio(T dato) {
        contenedor.push_front(dato);
        std::cout << "Elemento agregado al inicio.\n";
    }

    // Retornamos la lista para que el main la recorra
    std::list<T>& getContenedor() {
        return contenedor;
    }
};
#endif

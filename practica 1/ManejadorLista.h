#ifndef MANEJADORLISTA_H
#define MANEJADORLISTA_H
#include <iostream>

template <typename T>
class ManejadorLista {
private:
    T* inicio;

public:
    ManejadorLista() : inicio(NULL) {}

    void insertarAlInicio() {
        T* nuevo = new T();
        nuevo->solicitarDatos();
        
        // Manejo indirecto: el nuevo apunta al que antes era el primero
        nuevo->setSiguiente(inicio);
        inicio = nuevo;
    }

    void mostrarLista() {
        T* temp = inicio;
        std::cout << "\n--- Contenido de la Lista (Manejo Indirecto) ---\n";
        while (temp != NULL) {
            temp->mostrar();
            std::cout << " -> ";
            temp = temp->getSiguiente();
        }
        std::cout << "NULL\n";
    }

    ~ManejadorLista() {
        while (inicio != NULL) {
            T* temp = inicio;
            inicio = inicio->getSiguiente();
            delete temp;
        }
    }
};

#endif

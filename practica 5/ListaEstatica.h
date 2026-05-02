#ifndef LISTAESTATICA_H
#define LISTAESTATICA_H
#include <iostream>

#define MAX 10

template <typename T>
class ListaEstatica {
private:
    T datos[MAX];
    int tamano;

public:
    ListaEstatica() : tamano(0) {}

    void insertar(T elemento, int pos) {
        if (tamano >= MAX) {
            std::cout << "Error: Lista llena.\n";
            return;
        }
        if (pos < 0 || pos > tamano) {
            std::cout << "Error: Posicion invalida.\n";
            return;
        }
        // Desplazar elementos a la derecha para abrir espacio
        for (int i = tamano; i > pos; i--) {
            datos[i] = datos[i - 1];
        }
        datos[pos] = elemento;
        tamano++;
        std::cout << "Insertado en posicion " << pos << ".\n";
    }

    void eliminar(int pos) {
        if (pos < 0 || pos >= tamano) {
            std::cout << "Error: Posicion inexistente.\n";
            return;
        }
        // Desplazar elementos a la izquierda para cerrar el hueco
        for (int i = pos; i < tamano - 1; i++) {
            datos[i] = datos[i + 1];
        }
        tamano--;
        std::cout << "Elemento eliminado.\n";
    }

    void mostrar() {
        if (tamano == 0) {
            std::cout << "Lista vacia.\n";
            return;
        }
        for (int i = 0; i < tamano; i++) {
            std::cout << "[" << i << "]: " << datos[i] << "  ";
        }
        std::cout << "\n";
    }
};
#endif

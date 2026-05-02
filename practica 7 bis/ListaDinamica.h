#ifndef LISTADINAMICA_H
#define LISTADINAMICA_H
#include "NodoLista.h"

template <typename T>
class ListaDinamica {
private:
    NodoLista<T>* inicio;

public:
    ListaDinamica() : inicio(NULL) {}

    void insertarInicio(T valor) {
        NodoLista<T>* nuevo = new NodoLista<T>(valor);
        nuevo->siguiente = inicio;
        inicio = nuevo;
    }

    void mostrar() {
        NodoLista<T>* aux = inicio;
        while (aux != NULL) {
            std::cout << "[" << aux->dato << "] -> ";
            aux = aux->siguiente;
        }
        std::cout << "NULL\n";
    }
};
#endif

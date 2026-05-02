#ifndef COLADINAMICA_H
#define COLADINAMICA_H
#include "NodoCola.h"

template <typename T>
class ColaDinamica {
private:
    NodoCola<T>* frente;
    NodoCola<T>* final;

public:
    ColaDinamica() : frente(NULL), final(NULL) {}

    void encolar(T valor) {
        NodoCola<T>* nuevo = new NodoCola<T>(valor);
        if (frente == NULL) {
            frente = nuevo;
        } else {
            final->siguiente = nuevo;
        }
        final = nuevo;
    }

    void desencolar() {
        if (frente == NULL) return;
        NodoCola<T>* temp = frente;
        frente = frente->siguiente;
        if (frente == NULL) final = NULL;
        delete temp;
    }

    void mostrar() {
        NodoCola<T>* aux = frente;
        while (aux != NULL) {
            std::cout << "[" << aux->dato << "] -> ";
            aux = aux->siguiente;
        }
        std::cout << "NULL\n";
    }
};
#endif

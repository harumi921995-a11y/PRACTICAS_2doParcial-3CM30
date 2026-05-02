#ifndef COLAADT_H
#define COLAADT_H
#include <iostream>

template <typename T>
class ColaADT {
private:
    T* frente;
    T* final;

public:
    ColaADT() : frente(NULL), final(NULL) {}

    // Operación: Enqueue (Encolar)
    void encolar(int valor) {
        T* nuevo = new T();
        nuevo->asignarValor(valor);
        nuevo->setSiguiente(NULL);

        if (frente == NULL) {
            frente = nuevo;
        } else {
            final->setSiguiente(nuevo);
        }
        final = nuevo;
    }

    // Operación: Dequeue (Desencolar)
    void desencolar() {
        if (frente == NULL) return;
        
        T* temp = frente;
        frente = frente->getSiguiente();
        
        if (frente == NULL) final = NULL;
        
        delete temp;
    }

    void imprimir() {
        T* aux = frente;
        while (aux != NULL) {
            aux->mostrarDato();
            std::cout << " -> ";
            aux = aux->getSiguiente();
        }
        std::cout << "NULL" << std::endl;
    }
};

#endif

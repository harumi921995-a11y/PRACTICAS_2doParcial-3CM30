#ifndef PILADINAMICA_H
#define PILADINAMICA_H
#include <iostream>

template <typename T>
class PilaDinamica {
private:
    T* tope;

public:
    PilaDinamica() : tope(NULL) {}

    // Operacion Push (Apilar)
    void push(T* nuevo) {
        nuevo->setSiguiente(tope);
        tope = nuevo;
        std::cout << "Elemento apilado.\n";
    }

    // Operacion Pop (Desapilar)
    void pop() {
        if (tope == NULL) {
            std::cout << "Pila vacia.\n";
            return;
        }
        T* temp = tope;
        tope = tope->getSiguiente();
        std::cout << "Desapilando: ";
        temp->mostrar();
        std::cout << "\n";
        delete temp;
    }

    void mostrarPila() {
        T* aux = tope;
        while (aux != NULL) {
            aux->mostrar();
            std::cout << "\n  |\n";
            aux = aux->getSiguiente();
        }
        std::cout << "[BASE]\n";
    }
};
#endif

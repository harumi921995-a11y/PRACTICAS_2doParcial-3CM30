#include <iostream>
#include "PilaDinamica.h"
#include "ModelosPila.h"

int main() {
    int op, subOp;
    std::cout << "--- PRACTICA 6: PILA DINAMICA (PUNTEROS) ---\n";
    std::cout << "1. Usar Enteros (Dato Base)\n2. Usar Personas (POO)\nOpcion: ";
    std::cin >> op;

    if (op == 1) {
        PilaDinamica<NodoInt> pila;
        do {
            std::cout << "\n1. Push\n2. Pop\n3. Mostrar\n4. Salir: ";
            std::cin >> subOp;
            if (subOp == 1) {
                NodoInt* n = new NodoInt();
                std::cout << "Valor: "; std::cin >> n->valor;
                pila.push(n);
            }
            if (subOp == 2) pila.pop();
            if (subOp == 3) pila.mostrarPila();
        } while (subOp != 4);
    } else {
        PilaDinamica<NodoPersona> pilaP;
        do {
            std::cout << "\n1. Push\n2. Pop\n3. Mostrar\n4. Salir: ";
            std::cin >> subOp;
            if (subOp == 1) {
                NodoPersona* n = new NodoPersona();
                std::cout << "Nombre: "; std::cin >> n->nombre;
                pilaP.push(n);
            }
            if (subOp == 2) pilaP.pop();
            if (subOp == 3) pilaP.mostrarPila();
        } while (subOp != 4);
    }
    return 0;
}

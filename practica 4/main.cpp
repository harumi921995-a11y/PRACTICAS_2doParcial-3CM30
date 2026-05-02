#include <iostream>
#include "ColaEstatica.h"
#include "EntidadPersona.h"

int main() {
    int op, subOp;
    std::cout << "--- PRACTICA 4: COLA ESTATICA ---\n";
    std::cout << "1. Usar Enteros (Dato Base)\n2. Usar Personas (POO)\nOpcion: ";
    std::cin >> op;

    if (op == 1) {
        ColaEstatica<int> colaInt;
        do {
            std::cout << "\n1. Encolar\n2. Desencolar\n3. Mostrar\n4. Salir\n:";
            std::cin >> subOp;
            if (subOp == 1) { int v; std::cin >> v; colaInt.encolar(v); }
            if (subOp == 2) colaInt.desencolar();
            if (subOp == 3) colaInt.mostrar();
        } while (subOp != 4);
    } else {
        ColaEstatica<Persona> colaPer;
        do {
            std::cout << "\n1. Encolar\n2. Desencolar\n3. Mostrar\n4. Salir\n:";
            std::cin >> subOp;
            if (subOp == 1) { Persona p; std::cin >> p.nombre; colaPer.encolar(p); }
            if (subOp == 2) colaPer.desencolar();
            if (subOp == 3) colaPer.mostrar();
        } while (subOp != 4);
    }
    return 0;
}

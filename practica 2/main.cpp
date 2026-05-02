#include <iostream>
#include "DatoGenerico.h"
#include "ColaADT.h"

int main() {
    ColaADT<DatoGenerico> miCola;
    int op, val;

    do {
        std::cout << "\n--- ADT COLA ---\n1. Encolar\n2. Desencolar\n3. Mostrar\n4. Salir\nOpcion: ";
        std::cin >> op;

        if (op == 1) {
            std::cout << "Ingrese valor entero: ";
            std::cin >> val;
            miCola.encolar(val);
        } else if (op == 2) {
            miCola.desencolar();
        } else if (op == 3) {
            miCola.imprimir();
        }
    } while (op != 4);

    return 0;
}

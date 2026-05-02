#include <iostream>
#include "PilaEstatica.h"

int main() {
    int op;
    std::cout << "PRACTICA 3: PILA ESTATICA\n1. Usar INT (Dato Base)\n2. Usar CHAR (Dato Base)\nOpcion: ";
    std::cin >> op;

    if (op == 1) {
        PilaEstatica<int> pila;
        pila.push(10); pila.push(20);
        pila.mostrar();
        pila.pop();
        pila.mostrar();
    } else {
        PilaEstatica<char> pila;
        pila.push('A'); pila.push('B');
        pila.mostrar();
        pila.pop();
    }
    return 0;
}

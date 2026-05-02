#include <iostream>
#include "ListaDinamica.h"

int main() {
    std::cout << "--- PRACTICA 7 BIS: LISTA DINAMICA ---\n";
    ListaDinamica<int> lista; // Dato Base
    lista.insertarInicio(30);
    lista.insertarInicio(20);
    lista.mostrar();
    return 0;
}

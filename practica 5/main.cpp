#include <iostream>
#include "ListaEstatica.h"
#include "EntidadPersona.h"

int main() {
    int op, subOp, p;
    std::cout << "--- PRACTICA 5: LISTA ESTATICA ---\n";
    std::cout << "1. Usar Enteros (Dato Base)\n2. Usar Personas (POO)\nOpcion: ";
    std::cin >> op;

    if (op == 1) {
        ListaEstatica<int> listaInt;
        do {
            std::cout << "\n1. Insertar\n2. Eliminar\n3. Mostrar\n4. Salir\nAccion: ";
            std::cin >> subOp;
            if (subOp == 1) {
                int v; std::cout << "Valor y Posicion: "; std::cin >> v >> p;
                listaInt.insertar(v, p);
            }
            if (subOp == 2) { std::cout << "Posicion: "; std::cin >> p; listaInt.eliminar(p); }
            if (subOp == 3) listaInt.mostrar();
        } while (subOp != 4);
    } else {
        ListaEstatica<Persona> listaPer;
        do {
            std::cout << "\n1. Insertar\n2. Eliminar\n3. Mostrar\n4. Salir\nAccion: ";
            std::cin >> subOp;
            if (subOp == 1) {
                Persona per; std::cout << "Nombre y Posicion: "; std::cin >> per.nombre >> p;
                listaPer.insertar(per, p);
            }
            if (subOp == 2) { std::cout << "Posicion: "; std::cin >> p; listaPer.eliminar(p); }
            if (subOp == 3) listaPer.mostrar();
        } while (subOp != 4);
    }
    return 0;
}

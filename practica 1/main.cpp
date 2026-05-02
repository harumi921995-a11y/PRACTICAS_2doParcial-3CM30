#include <iostream>
#include "Modelos.h"
#include "ManejadorLista.h"

int main() {
    int opcion, subOp;
    
    std::cout << "--- PRACTICA 1: PUNTEROS AUTORREFERENCIADOS ---\n";
    std::cout << "1. Gestionar Personas\n2. Gestionar Autos\nOpcion: ";
    std::cin >> opcion;

    if (opcion == 1) {
        ManejadorLista<Persona> listaP;
        do {
            std::cout << "\n1. Agregar Persona\n2. Mostrar Lista\n3. Salir\nSub-Opcion: ";
            std::cin >> subOp;
            if (subOp == 1) listaP.insertarAlInicio();
            if (subOp == 2) listaP.mostrarLista();
        } while (subOp != 3);
    } 
    else if (opcion == 2) {
        ManejadorLista<Auto> listaA;
        do {
            std::cout << "\n1. Agregar Auto\n2. Mostrar Lista\n3. Salir\nSub-Opcion: ";
            std::cin >> subOp;
            if (subOp == 1) listaA.insertarAlInicio();
            if (subOp == 2) listaA.mostrarLista();
        } while (subOp != 3);
    }

    return 0;
}

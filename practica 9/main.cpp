#include <iostream>
#include "ColaServicio.h"
#include "Persona.h"

void mostrarMenu() {
    std::cout << "\n--- PRACTICA 9: COLA (LIBRERIA DEL IDE) ---\n";
    std::cout << "1. Usar Enteros (Dato Base)\n";
    std::cout << "2. Usar Personas (Nuevo Tipo de Dato)\n";
    std::cout << "3. Salir\n";
    std::cout << "Seleccione: ";
}

int main() {
    int op;
    do {
        mostrarMenu();
        std::cin >> op;

        if (op == 1) {
            ColaServicio<int> colaInt;
            colaInt.encolar(100);
            colaInt.encolar(200);
            std::cout << "En el frente esta: " << colaInt.obtenerFrente() << "\n";
            colaInt.desencolar();
        } 
        else if (op == 2) {
            ColaServicio<Persona> colaPersona;
            std::string n; int e;
            std::cout << "Ingrese nombre del cliente: "; std::cin >> n;
            std::cout << "Ingrese edad: "; std::cin >> e;
            
            colaPersona.encolar(Persona(n, e));
            std::cout << "Siguiente cliente: ";
            colaPersona.obtenerFrente().mostrar();
            std::cout << "\n";
        }
    } while (op != 3);

    return 0;
}

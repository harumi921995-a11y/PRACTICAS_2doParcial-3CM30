#include <iostream>
#include "PilaServicio.h"
#include "Persona.h"

void menu() {
    std::cout << "\n--- PRACTICA 8: PILA (LIBRERIA DEL IDE) ---\n";
    std::cout << "1. Usar Enteros (Dato Base)\n";
    std::cout << "2. Usar Personas (Nuevo Tipo de Dato)\n";
    std::cout << "3. Salir\n";
    std::cout << "Seleccione una opcion: ";
}

int main() {
    int op;
    do {
        menu();
        std::cin >> op;

        if (op == 1) {
            PilaServicio<int> pilaInt;
            pilaInt.agregar(10);
            pilaInt.agregar(20);
            std::cout << "Tope actual: " << pilaInt.obtenerTope() << "\n";
            pilaInt.eliminar();
        } 
        else if (op == 2) {
            PilaServicio<Persona> pilaPersona;
            std::string nom; int ed;
            std::cout << "Ingrese nombre: "; std::cin >> nom;
            std::cout << "Ingrese edad: "; std::cin >> ed;
            
            pilaPersona.agregar(Persona(nom, ed));
            std::cout << "En el tope esta: ";
            pilaPersona.obtenerTope().mostrar();
            std::cout << "\n";
        }
    } while (op != 3);

    return 0;
}

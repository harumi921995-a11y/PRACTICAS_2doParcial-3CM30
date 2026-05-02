#include <iostream>
#include "BurbujaImp.h"
#include "EntidadPersona.h"

int main() {
    int opcion, n;
    
    std::cout << "--- PRACTICA 16: BURBUJA INTERACTIVA (SOLID) ---\n";
    std::cout << "1. Enteros\n2. Caracteres\n3. Personas (Nuevo Tipo de Dato - POO)\n";
    std::cout << "Seleccione tipo de dato: ";
    std::cin >> opcion;
    
    std::cout << "Cuantos elementos quiere ingresar?: ";
    std::cin >> n;

    if (opcion == 1) {
        IListaBurbuja<int>* lista = new BurbujaImp<int>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    } 
    else if (opcion == 2) {
        IListaBurbuja<char>* lista = new BurbujaImp<char>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    }
    else if (opcion == 3) {
        IListaBurbuja<Persona>* lista = new BurbujaImp<Persona>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    }

    return 0;
}

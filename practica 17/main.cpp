#include <iostream>
#include "MergeSortImp.h"
#include "EntidadVehiculo.h"

int main() {
    int op, n;
    std::cout << "--- PRACTICA 17: MERGE SORT INTERACTIVO ---\n";
    std::cout << "1. Enteros\n2. Caracteres\n3. Vehiculos (POO)\nOpcion: ";
    std::cin >> op;
    std::cout << "Cantidad de elementos: ";
    std::cin >> n;

    if (op == 1) {
        IListaMerge<int>* lista = new MergeSortImp<int>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    } 
    else if (op == 2) {
        IListaMerge<char>* lista = new MergeSortImp<char>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    }
    else if (op == 3) {
        IListaMerge<Vehiculo>* lista = new MergeSortImp<Vehiculo>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    }

    return 0;
}

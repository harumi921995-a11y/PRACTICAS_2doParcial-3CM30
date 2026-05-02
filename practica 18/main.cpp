#include <iostream>
#include "QuickSortImp.h"
#include "EntidadLibro.h"

int main() {
    int op, n;
    std::cout << "--- PRACTICA 18: QUICK SORT INTERACTIVO ---\n";
    std::cout << "1. Enteros\n2. Caracteres\n3. Libros (POO)\nOpcion: ";
    std::cin >> op;
    std::cout << "Cantidad de elementos: ";
    std::cin >> n;

    if (op == 1) {
        IListaQuick<int>* lista = new QuickSortImp<int>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    } 
    else if (op == 2) {
        IListaQuick<char>* lista = new QuickSortImp<char>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    }
    else if (op == 3) {
        IListaQuick<Libro>* lista = new QuickSortImp<Libro>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    }

    return 0;
}

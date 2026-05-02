#include <iostream>
#include "IndQuickSortImp.h"
#include "EntidadPelicula.h"

int main() {
    int op, n;
    std::cout << "--- PRACTICA 21: QUICK SORT INDIRECTO ---\n";
    std::cout << "1. Enteros\n2. Caracteres\n3. Peliculas (POO)\nOpcion: ";
    std::cin >> op;
    std::cout << "Cantidad de elementos: ";
    std::cin >> n;

    if (op == 1) {
        IListaIndQuick<int>* lista = new IndQuickSortImp<int>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    } 
    else if (op == 2) {
        IListaIndQuick<char>* lista = new IndQuickSortImp<char>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    }
    else if (op == 3) {
        IListaIndQuick<Pelicula>* lista = new IndQuickSortImp<Pelicula>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    }

    return 0;
}

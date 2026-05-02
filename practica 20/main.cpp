#include <iostream>
#include "IndMergeImp.h"
#include "EntidadCelular.h"

int main() {
    int op, n;
    std::cout << "--- PRACTICA 20: MERGE SORT INDIRECTO ---\n";
    std::cout << "1. Enteros\n2. Caracteres\n3. Celulares (POO)\nOpcion: ";
    std::cin >> op;
    std::cout << "Cantidad de elementos: ";
    std::cin >> n;

    if (op == 1) {
        IListaIndMerge<int>* lista = new IndMergeImp<int>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    } 
    else if (op == 2) {
        IListaIndMerge<char>* lista = new IndMergeImp<char>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    }
    else if (op == 3) {
        IListaIndMerge<Celular>* lista = new IndMergeImp<Celular>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    }

    return 0;
}

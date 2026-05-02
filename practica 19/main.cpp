#include <iostream>
#include "IndirectaImp.h"
#include "EntidadMascota.h"

int main() {
    int op, n;
    std::cout << "--- PRACTICA 19: BURBUJA INDIRECTA ---\n";
    std::cout << "1. Enteros\n2. Caracteres\n3. Mascotas (POO)\nOpcion: ";
    std::cin >> op;
    std::cout << "Cantidad de elementos: ";
    std::cin >> n;

    if (op == 1) {
        IListaIndirecta<int>* lista = new IndirectaImp<int>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    } 
    else if (op == 2) {
        IListaIndirecta<char>* lista = new IndirectaImp<char>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    }
    else if (op == 3) {
        IListaIndirecta<Mascota>* lista = new IndirectaImp<Mascota>(n);
        lista->solicitarDatos();
        lista->ordenar();
        lista->mostrar();
        delete lista;
    }

    return 0;
}

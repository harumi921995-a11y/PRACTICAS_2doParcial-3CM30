#include <iostream>
#include <string>
#include "ListaServicio.h"
#include "Persona.h"

int main() {
    int op;
    std::cout << "1. Enteros (Dato Base)\n2. Personas (POO)\nOpcion: ";
    std::cin >> op;

    if (op == 1) {
        ListaServicio<int> listaInt;
        listaInt.insertarFinal(10);
        listaInt.insertarFinal(20);

        std::cout << "Contenido: ";
        // Forma antigua de recorrer listas (Iteradores)
        std::list<int>::iterator it; 
        for (it = listaInt.getContenedor().begin(); it != listaInt.getContenedor().end(); ++it) {
            std::cout << "[" << *it << "] "; // Aqui NO usamos .mostrar() porque es un int
        }
    } 
    else if (op == 2) {
        ListaServicio<Persona> listaPer;
        Persona p1("Juan", 20);
        listaPer.insertarFinal(p1);

        std::cout << "Contenido:\n";
        std::list<Persona>::iterator itP;
        for (itP = listaPer.getContenedor().begin(); itP != listaPer.getContenedor().end(); ++itP) {
            itP->mostrar(); // Aqui SI usamos .mostrar() porque es Persona
            std::cout << "\n";
        }
    }

    return 0;
}

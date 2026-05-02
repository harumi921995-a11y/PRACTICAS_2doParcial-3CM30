#ifndef MODELOSPILA_H
#define MODELOSPILA_H
#include "EntidadBase.h"
#include <string>

// Caso A: Dato Base (Entero)
class NodoInt : public EntidadBase<NodoInt> {
public:
    int valor;
    void mostrar() override { std::cout << valor; }
};

// Caso B: Nuevo Dato (POO - Persona)
class NodoPersona : public EntidadBase<NodoPersona> {
public:
    std::string nombre;
    void mostrar() override { std::cout << nombre; }
};

#endif

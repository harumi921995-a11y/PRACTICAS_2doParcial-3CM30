#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>

class Persona {
private:
    std::string nombre;
    int edad;

public:
    Persona() : nombre(""), edad(0) {}
    Persona(std::string n, int e) : nombre(n), edad(e) {}

    void mostrar() const {
        std::cout << "Nombre: " << nombre << " | Edad: " << edad;
    }
};
#endif

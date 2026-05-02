#ifndef ENTIDADPERSONA_H
#define ENTIDADPERSONA_H
#include <string>
#include <iostream>

class Persona {
public:
    int edad;
    std::string nombre;

    // Sobrecarga de >> para que solicitarDatos() funcione con el objeto
    friend std::istream& operator>>(std::istream& is, Persona& p) {
        std::cout << "(Nombre): "; is >> p.nombre;
        std::cout << "(Edad): "; is >> p.edad;
        return is;
    }

    // Sobrecarga de > para el algoritmo de ordenamiento
    bool operator>(const Persona& otra) const {
        return this->edad > otra.edad;
    }

    // Sobrecarga de << para mostrar()
    friend std::ostream& operator<<(std::ostream& os, const Persona& p) {
        os << p.nombre << " (" << p.edad << ")";
        return os;
    }
};

#endif

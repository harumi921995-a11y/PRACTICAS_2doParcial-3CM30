#ifndef ENTIDADPELICULA_H
#define ENTIDADPELICULA_H
#include <string>
#include <iostream>

class Pelicula {
public:
    int anio;
    std::string titulo;

    friend std::istream& operator>>(std::istream& is, Pelicula& p) {
        std::cout << "(Titulo): "; is >> p.titulo;
        std::cout << "(Anio): "; is >> p.anio;
        return is;
    }

    bool operator>(const Pelicula& otra) const {
        return this->anio > otra.anio;
    }

    friend std::ostream& operator<<(std::ostream& os, const Pelicula& p) {
        os << p.titulo << " (" << p.anio << ")";
        return os;
    }
};

#endif

#ifndef ENTIDADLIBRO_H
#define ENTIDADLIBRO_H
#include <string>
#include <iostream>

class Libro {
public:
    int id;
    std::string titulo;

    friend std::istream& operator>>(std::istream& is, Libro& l) {
        std::cout << "(Titulo): "; is >> l.titulo;
        std::cout << "(ID/Codigo): "; is >> l.id;
        return is;
    }

    // Sobrecarga para que el algoritmo decida el orden por ID
    bool operator>(const Libro& otro) const {
        return this->id > otro.id;
    }

    friend std::ostream& operator<<(std::ostream& os, const Libro& l) {
        os << l.id << ":" << l.titulo;
        return os;
    }
};

#endif

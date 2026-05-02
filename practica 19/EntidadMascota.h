#ifndef ENTIDADMASCOTA_H
#define ENTIDADMASCOTA_H
#include <string>
#include <iostream>

class Mascota {
public:
    int chip;
    std::string nombre;

    friend std::istream& operator>>(std::istream& is, Mascota& m) {
        std::cout << "(Nombre): "; is >> m.nombre;
        std::cout << "(No. Chip): "; is >> m.chip;
        return is;
    }

    bool operator>(const Mascota& otra) const {
        return this->chip > otra.chip;
    }

    friend std::ostream& operator<<(std::ostream& os, const Mascota& m) {
        os << m.nombre << "(#" << m.chip << ")";
        return os;
    }
};

#endif

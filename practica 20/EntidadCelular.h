#ifndef ENTIDADCELULAR_H
#define ENTIDADCELULAR_H
#include <string>
#include <iostream>

class Celular {
public:
    int imei;
    std::string modelo;

    friend std::istream& operator>>(std::istream& is, Celular& c) {
        std::cout << "(Modelo): "; is >> c.modelo;
        std::cout << "(IMEI): "; is >> c.imei;
        return is;
    }

    bool operator>(const Celular& otro) const {
        return this->imei > otro.imei;
    }

    friend std::ostream& operator<<(std::ostream& os, const Celular& c) {
        os << c.modelo << "(#" << c.imei << ")";
        return os;
    }
};

#endif

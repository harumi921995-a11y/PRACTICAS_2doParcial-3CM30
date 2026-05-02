#ifndef ENTIDADVEHICULO_H
#define ENTIDADVEHICULO_H
#include <string>
#include <iostream>

class Vehiculo {
public:
    int id;
    std::string marca;

    friend std::istream& operator>>(std::istream& is, Vehiculo& v) {
        std::cout << "(Marca): "; is >> v.marca;
        std::cout << "(ID/Placa): "; is >> v.id;
        return is;
    }

    bool operator>(const Vehiculo& otra) const {
        return this->id > otra.id;
    }

    friend std::ostream& operator<<(std::ostream& os, const Vehiculo& v) {
        os << v.marca << ":" << v.id;
        return os;
    }
};

#endif

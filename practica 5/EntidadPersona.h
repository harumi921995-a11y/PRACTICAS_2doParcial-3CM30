#ifndef ENTIDADPERSONA_H
#define ENTIDADPERSONA_H
#include <iostream>
#include <string>

class Persona {
public:
    std::string nombre;
    
    // Sobrecarga para que la lista pueda imprimir el objeto directamente
    friend std::ostream& operator<<(std::ostream& os, const Persona& p) {
        os << p.nombre;
        return os;
    }
};
#endif

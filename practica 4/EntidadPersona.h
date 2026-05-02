#ifndef ENTIDADPERSONA_H
#define ENTIDADPERSONA_H
#include <iostream>
#include <string>

class Persona {
public:
    std::string nombre;
    
    // Sobrecarga para facilitar la impresion en el arreglo
    friend std::ostream& operator<<(std::ostream& os, const Persona& p) {
        os << p.nombre;
        return os;
    }
};
#endif

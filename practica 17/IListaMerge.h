#ifndef ILISTAMERGE_H
#define ILISTAMERGE_H

template <typename T>
class IListaMerge {
public:
    virtual void solicitarDatos() = 0;
    virtual void ordenar() = 0; 
    virtual void mostrar() = 0;
    virtual ~IListaMerge() {}
};

#endif

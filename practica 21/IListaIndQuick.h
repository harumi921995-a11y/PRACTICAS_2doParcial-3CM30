#ifndef ILISTAINDQUICK_H
#define ILISTAINDQUICK_H

template <typename T>
class IListaIndQuick {
public:
    virtual void solicitarDatos() = 0;
    virtual void ordenar() = 0; // Quick Sort Indirecto
    virtual void mostrar() = 0;
    virtual ~IListaIndQuick() {}
};

#endif

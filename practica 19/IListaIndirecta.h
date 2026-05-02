#ifndef ILISTAINDIRECTA_H
#define ILISTAINDIRECTA_H

template <typename T>
class IListaIndirecta {
public:
    virtual void solicitarDatos() = 0;
    virtual void ordenar() = 0; // Burbuja Indirecto
    virtual void mostrar() = 0;
    virtual ~IListaIndirecta() {}
};

#endif

#ifndef ILISTAQUICK_H
#define ILISTAQUICK_H

template <typename T>
class IListaQuick {
public:
    virtual void solicitarDatos() = 0;
    virtual void ordenar() = 0; 
    virtual void mostrar() = 0;
    virtual ~IListaQuick() {}
};

#endif

#ifndef ILISTABURBUJA_H
#define ILISTABURBUJA_H

template <typename T>
class IListaBurbuja {
public:
    virtual void solicitarDatos() = 0; // El programa pide qué dato quiere
    virtual void ordenar() = 0;       // Burbuja Iterativo
    virtual void mostrar() = 0;
    virtual ~IListaBurbuja() {}
};

#endif

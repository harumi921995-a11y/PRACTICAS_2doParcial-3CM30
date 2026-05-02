#ifndef ILISTINDMERGE_H
#define ILISTINDMERGE_H

template <typename T>
class IListaIndMerge {
public:
    virtual void solicitarDatos() = 0;
    virtual void ordenar() = 0; // Merge Sort Indirecto
    virtual void mostrar() = 0;
    virtual ~IListaIndMerge() {}
};

#endif

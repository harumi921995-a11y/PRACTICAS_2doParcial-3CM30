#ifndef IENTIDAD_H
#define IENTIDAD_H

template <typename T>
class IEntidad {
public:
    virtual void solicitarDatos() = 0;
    virtual void mostrar() = 0;
    virtual void setSiguiente(T* sig) = 0;
    virtual T* getSiguiente() = 0;
    virtual ~IEntidad() {}
};

#endif

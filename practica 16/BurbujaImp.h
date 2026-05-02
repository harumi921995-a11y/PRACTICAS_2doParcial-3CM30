#ifndef BURBUJAIMP_H
#define BURBUJAIMP_H
#include "BurbujaBase.h"

template <typename T>
class BurbujaImp : public BurbujaBase<T> {
public:
    BurbujaImp(int cap);
    void solicitarDatos() override;
    void ordenar() override;
    void mostrar() override;
};

#include "BurbujaImp.cpp" // Necesario para que el compilador vea los templates
#endif

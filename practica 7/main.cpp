#include <iostream>
#include "ColaDinamica.h"

int main() {
    ColaDinamica<int> miCola; // Aquí manejas el Dato Base
    miCola.encolar(10);
    miCola.encolar(20);
    miCola.mostrar();
    miCola.desencolar();
    miCola.mostrar();
    return 0;
}

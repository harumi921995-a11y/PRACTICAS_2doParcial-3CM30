#ifndef INDQUICKSORTIMP_H
#define INDQUICKSORTIMP_H
#include "IndQuickBase.h"
#include <iostream>
#include <algorithm>

template <typename T>
class IndQuickSortImp : public IndQuickBase<T> {
public:
    IndQuickSortImp(int cap) : IndQuickBase<T>(cap) {}

    void solicitarDatos() override {
        for (int i = 0; i < this->capacidad; i++) {
            T dato;
            std::cout << "Elemento [" << i + 1 << "]. Ingrese dato: ";
            std::cin >> dato;
            this->elementos[i] = dato;
            this->punteros[i] = &this->elementos[i];
            this->contador++;
        }
    }

    void ordenar() override {
        if (this->contador < 2) return;

        int* pila = new int[this->contador];
        int tope = -1;

        pila[++tope] = 0;
        pila[++tope] = this->contador - 1;

        while (tope >= 0) {
            int fin = pila[tope--];
            int inicio = pila[tope--];

            int p = particion(inicio, fin);

            if (p - 1 > inicio) {
                pila[++tope] = inicio;
                pila[++tope] = p - 1;
            }
            if (p + 1 < fin) {
                pila[++tope] = p + 1;
                pila[++tope] = fin;
            }
        }
        delete[] pila;
    }

    int particion(int bajo, int alto) {
        // El pivote es el contenido del puntero en la posicion 'alto'
        T pivote = *this->punteros[alto];
        int i = (bajo - 1);

        for (int j = bajo; j <= alto - 1; j++) {
            // Compara valores, pero intercambia punteros
            if (!(*this->punteros[j] > pivote)) {
                i++;
                std::swap(this->punteros[i], this->punteros[j]);
            }
        }
        std::swap(this->punteros[i + 1], this->punteros[alto]);
        return (i + 1);
    }

    void mostrar() override {
        std::cout << "\nOrden Indirecto (Quick Sort): ";
        for (int i = 0; i < this->contador; i++) {
            std::cout << "[" << *this->punteros[i] << "] ";
        }
        std::cout << "\n(Verificacion) Datos en memoria original: ";
        for (int i = 0; i < this->contador; i++) {
            std::cout << "[" << this->elementos[i] << "] ";
        }
        std::cout << std::endl;
    }
};

#endif

#ifndef QUICKSORTIMP_H
#define QUICKSORTIMP_H
#include "QuickBase.h"
#include <iostream>
#include <algorithm>

template <typename T>
class QuickSortImp : public QuickBase<T> {
public:
    QuickSortImp(int cap) : QuickBase<T>(cap) {}

    void solicitarDatos() override {
        for (int i = 0; i < this->capacidad; i++) {
            T dato;
            std::cout << "Elemento [" << i + 1 << "]. Ingrese el dato: ";
            std::cin >> dato;
            this->elementos[this->contador++] = dato;
        }
    }

    void ordenar() override {
        if (this->contador < 2) return;

        // Pila manual para manejar los rangos de las particiones (Iterativo)
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

    void mostrar() override {
        std::cout << "\nLista Ordenada con QuickSort: ";
        for (int i = 0; i < this->contador; i++) {
            std::cout << "[" << this->elementos[i] << "] ";
        }
        std::cout << std::endl;
    }

private:
    int particion(int bajo, int alto) {
        T pivote = this->elementos[alto];
        int i = (bajo - 1);

        for (int j = bajo; j <= alto - 1; j++) {
            // Compara usando el operador sobrecargado >
            if (!(this->elementos[j] > pivote)) {
                i++;
                std::swap(this->elementos[i], this->elementos[j]);
            }
        }
        std::swap(this->elementos[i + 1], this->elementos[alto]);
        return (i + 1);
    }
};

#endif

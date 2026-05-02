#ifndef MERGESORTIMP_H
#define MERGESORTIMP_H
#include "MergeBase.h"
#include <iostream>
#include <algorithm>

template <typename T>
class MergeSortImp : public MergeBase<T> {
public:
    MergeSortImp(int cap) : MergeBase<T>(cap) {}

    void solicitarDatos() override {
        for (int i = 0; i < this->capacidad; i++) {
            T dato;
            std::cout << "Elemento [" << i + 1 << "]. Ingrese el dato: ";
            std::cin >> dato;
            this->elementos[this->contador++] = dato;
        }
    }

    void ordenar() override {
        int n = this->contador;
        for (int tam = 1; tam <= n - 1; tam = 2 * tam) {
            for (int izq = 0; izq < n - 1; izq += 2 * tam) {
                int medio = std::min(izq + tam - 1, n - 1);
                int der = std::min(izq + 2 * tam - 1, n - 1);
                fusionar(izq, medio, der);
            }
        }
    }

    void fusionar(int izq, int m, int der) {
        int n1 = m - izq + 1;
        int n2 = der - m;
        T* L = new T[n1];
        T* R = new T[n2];

        for (int i = 0; i < n1; i++) L[i] = this->elementos[izq + i];
        for (int j = 0; j < n2; j++) R[j] = this->elementos[m + 1 + j];

        int i = 0, j = 0, k = izq;
        while (i < n1 && j < n2) {
            if (!(L[i] > R[j])) this->elementos[k++] = L[i++];
            else this->elementos[k++] = R[j++];
        }
        while (i < n1) this->elementos[k++] = L[i++];
        while (j < n2) this->elementos[k++] = R[j++];

        delete[] L; delete[] R;
    }

    void mostrar() override {
        std::cout << "\nLista Mezclada y Ordenada: ";
        for (int i = 0; i < this->contador; i++) {
            std::cout << "[" << this->elementos[i] << "] ";
        }
        std::cout << std::endl;
    }
};

#endif

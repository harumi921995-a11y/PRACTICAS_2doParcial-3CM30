#ifndef INDIRECTAIMP_H
#define INDIRECTAIMP_H
#include "IndirectaBase.h"
#include <iostream>

template <typename T>
class IndirectaImp : public IndirectaBase<T> {
public:
    IndirectaImp(int cap) : IndirectaBase<T>(cap) {}

    void solicitarDatos() override {
        for (int i = 0; i < this->capacidad; i++) {
            T dato;
            std::cout << "Elemento [" << i + 1 << "]. Ingrese dato: ";
            std::cin >> dato;
            this->elementos[i] = dato;
            this->punteros[i] = &this->elementos[i]; // El puntero apunta al dato
            this->contador++;
        }
    }

    void ordenar() override {
        int n = this->contador;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                // Comparamos el VALOR al que apunta el puntero
                if (*this->punteros[j] > *this->punteros[j + 1]) {
                    // Intercambiamos solo el PUNTERO, no el dato real
                    T* temp = this->punteros[j];
                    this->punteros[j] = this->punteros[j + 1];
                    this->punteros[j + 1] = temp;
                }
            }
        }
    }

    void mostrar() override {
        std::cout << "\nDatos ordenados (Via Punteros): ";
        for (int i = 0; i < this->contador; i++) {
            std::cout << "[" << *this->punteros[i] << "] ";
        }
        
        std::cout << "\nDatos originales (Sin cambios): ";
        for (int i = 0; i < this->contador; i++) {
            std::cout << "[" << this->elementos[i] << "] ";
        }
        std::cout << std::endl;
    }
};

#endif

#include <iostream>

template <typename T>
BurbujaImp<T>::BurbujaImp(int cap) : BurbujaBase<T>(cap) {}

template <typename T>
void BurbujaImp<T>::solicitarDatos() {
    for (int i = 0; i < this->capacidad; i++) {
        T dato;
        std::cout << "Elemento [" << i + 1 << " de " << this->capacidad << "]. "
                  << "Ingrese el dato que desea guardar: ";
        std::cin >> dato;
        this->elementos[this->contador++] = dato;
    }
}

template <typename T>
void BurbujaImp<T>::ordenar() {
    int n = this->contador;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (this->elementos[j] > this->elementos[j + 1]) {
                T temp = this->elementos[j];
                this->elementos[j] = this->elementos[j + 1];
                this->elementos[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void BurbujaImp<T>::mostrar() {
    std::cout << "\nDatos ordenados: ";
    for (int i = 0; i < this->contador; i++) {
        std::cout << "[" << this->elementos[i] << "] ";
    }
    std::cout << std::endl;
}

#ifndef MODELOS_H
#define MODELOS_H
#include "EntidadBase.h"
#include <iostream>
#include <string>

// --- Tipo de Dato: Auto ---
class Auto : public EntidadBase<Auto> {
public:
    float precio;
    int anio;

    void solicitarDatos() override {
        std::cout << "Precio del auto: "; std::cin >> precio;
        std::cout << "Anio del auto: "; std::cin >> anio;
    }

    void mostrar() override {
        std::cout << "[Auto | Precio: $" << precio << ", Anio: " << anio << "]";
    }
};

// --- Tipo de Dato: Persona ---
class Persona : public EntidadBase<Persona> {
public:
    std::string nombre, ap, am, genero;
    int edad;

    void solicitarDatos() override {
        std::cout << "Nombre: "; std::cin >> nombre;
        std::cout << "Apellido Paterno: "; std::cin >> ap;
        std::cout << "Apellido Materno: "; std::cin >> am;
        std::cout << "Genero: "; std::cin >> genero;
        std::cout << "Edad: "; std::cin >> edad;
    }

    void mostrar() override {
        std::cout << "[Persona | " << nombre << " " << ap << ", " << edad << " anos]";
    }
};

#endif

#include "Producto.h" //César Pascual De la Torre A01751521
#include <string>

Producto::Producto(std::string modelo, float precio)
    : modelo(modelo), precio(precio) {}

std::string Producto::getModelo() const {
    return modelo;
}

float Producto::getPrecio() const {
    return precio;
}
#include "Tienda.h" //César Pascual De la Torre A01751521
#include "Producto.h"
#include <iostream>
#include <string>
#include <vector>

Tienda::Tienda() {
    inventario.push_back(Producto("Samsung", 15000));
    inventario.push_back(Producto("LG", 12000));
    inventario.push_back(Producto("Philips", 10000));
}

std::vector<Producto> Tienda::mostrarInventario() {
    std::cout << std::endl << "Inventario de televisores:" << std::endl;
    for (const auto& producto : inventario) {
        std::cout << producto.getModelo() << " a tan solo " << producto.getPrecio() << "$ " << std::endl;
    }
    return inventario; 
}

void Tienda::validarPago(float pago, std::string tarjetac) {
    std::cout << std::endl << "Pago total de " << pago << "$ con la tarjeta: " << tarjetac << std::endl;
}

void Tienda::realizarEntrega(std::string direccion) {
    std::cout << "Su compra se entregará pronto a su dirección: " << direccion << ". ¡Muchas gracias por su compra!" << std::endl << std::endl;
}

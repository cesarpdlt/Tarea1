#include "Cliente.h" //César Pascual De la Torre A01751521
#include <string>
#include <iostream>
#include <string>
#include "Producto.h"

Cliente::Cliente(std::string nombre, std::string tarjetaCredito, std::string direccion)
    : nombre(nombre), direccion(direccion), tarjetaCredito(tarjetaCredito) { 
}
    void Cliente::comprar(Producto tv) {
    std::cout << std::endl << "Usted esta por comprar una televisión modelo " << tv.getModelo() << " a " << tv.getPrecio() << "$" << std::endl;
}

    std::string Cliente::getTarjetaCredito() const {
    return tarjetaCredito;
}

    std::string Cliente::getDireccion() const {
    return direccion;
}
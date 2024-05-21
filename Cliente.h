#ifndef CLIENTE_H //César Pascual De la Torre A01751521
#define CLIENTE_H

#include <string>
#include "Producto.h"

class Cliente{
    private:

    
    std::string nombre;
    std::string direccion;
    std::string tarjetaCredito;

    public:
    
    Cliente(std::string nombre, std::string tarjetaCredito, std::string direccion);
    void comprar(Producto tv);
    std::string getTarjetaCredito() const; 
    std::string getDireccion() const; 
};

#endif
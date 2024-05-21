#ifndef TIENDA_H //César Pascual De la Torre A01751521
#define TIENDA_H

#include <string>
#include <vector>
#include "Producto.h"

class Tienda{
    private:

   std::vector<Producto> inventario;

    public:
    
    Tienda();
    std::vector<Producto> mostrarInventario();
    void validarPago(float pago, std::string tarjetac);
    void realizarEntrega(std::string direccion);


};

#endif
#include <iostream> //César Pascual De la Torre A01751521
#include "Cliente.h"
#include "Tienda.h"
#include "Producto.h"

int main() {
    Cliente cliente("César", "4189 xxxx xxxx xxxx", "Calle Gladiolas, 239");

    Tienda tienda;
    
    std::vector<Producto> inventario = tienda.mostrarInventario();

    if (!inventario.empty()) {
        Producto tvComprada = inventario[0]; 
        cliente.comprar(tvComprada);
        tienda.validarPago(tvComprada.getPrecio(), cliente.getTarjetaCredito()); 
        tienda.realizarEntrega(cliente.getDireccion()); 
        
    }

    return 0;
}

#ifndef PRODUCTO_H //César Pascual De la Torre A01751521
#define PRODUCTO_H

#include <string>

class Producto{
    private:

    std::string modelo;
    float precio; 
    
    public:
    
    Producto(std::string modelo, float precio);
    std::string getModelo() const;
    float getPrecio() const;
};

#endif
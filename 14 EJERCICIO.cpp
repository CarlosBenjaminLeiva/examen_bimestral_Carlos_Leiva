# DESCRIPCION DEL PROBLEMA

Realice un programa que realice un descuento del 3% de una compra si el total es mayor a Q5000

# SOLUCION DEL PROBLEMA


#include <iostream> 
#include <stdlib.h> 
#include <stdio.h> 
using namespace std;

int main() {
    float totalCompra;
    float descuento = 0.03f;

    std::cout << "Ingrese el total de la compra: $";
    std::cin >> totalCompra;

    if (totalCompra > 5000.0f) {
    
        float montoDescuento = totalCompra * descuento;
        float totalConDescuento = totalCompra - montoDescuento;

        cout << "Se aplicó un descuento del 3%." << endl;
        cout << "Monto del descuento: $" << montoDescuento << endl;
        cout << "Total con descuento: $" << totalConDescuento << endl;
    } else {
        cout << "No se aplicó ningún descuento. El total es: $" << totalCompra << endl;
    }

    return 0;
}

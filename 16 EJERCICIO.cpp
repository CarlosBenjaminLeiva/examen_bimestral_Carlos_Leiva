# DESCRIPCION DEL PROBLEMA

Los clientes de un hospital tiennen una credencial en la que ademas de otra informacion tiene otra categoria que depende de los ingresos economicos del nucleo familiar del; pariente teniendo en cuenta la categoria el hospital les hace un descuento cuando tiene que pagar su cuenta en base a la siguiente tabla

categoria   descuento
   1           35% 
   2           22%
   3           16%
   4            5%

# SOLUCION DEL PROBLEMA

#include <iostream>

int main() {
    int categoria;
    double cuenta, descuento, total;

    
    cout << "Ingrese la categoría del cliente (1-4): ";
    cin >> categoria;

    
    if (categoria < 1 || categoria > 4) {
        cout << "Categoría no válida. Debe ser un valor entre 1 y 4." << endl;
        return 1; // Salir del programa con código de error
    }

    
    cout << "Ingrese el monto de la cuenta: $";
    cin >> cuenta;

    
    switch (categoria) {
        case 1:
            descuento = 0.35 * cuenta;
            break;
        case 2:
            descuento = 0.22 * cuenta;
            break;
        case 3:
            descuento = 0.16 * cuenta;
            break;
        case 4:
            descuento = 0.05 * cuenta;
            break;
    }

    
    total = cuenta - descuento;

    // Mostrar el descuento y el total a pagar
    cout << "Descuento aplicado: $" << descuento << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}

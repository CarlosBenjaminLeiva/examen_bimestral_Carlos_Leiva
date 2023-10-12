# DESCRIPCION DEL PROBLEMA

Realice un programa que permita calcular x cantidad de pies a km tomando en cuenta lo siguiente

1km=3280.84 pies 

# SOLUCION DEL PROBLEMA

#include <iostream> 
#include <stdlib.h> 
#include <stdio.h> 
 using namespace std;

int main() {
    const int piesPorKilometro = 328084; 
    int cantidadPies;

    cout << "Ingrese la cantidad de pies a convertir a kilómetros: ";
    cin >> cantidadPies;

    
    int cantidadKilometros = cantidadPies / piesPorKilometro;
    int piesRestantes = cantidadPies % piesPorKilometro;

    cout << cantidadPies << " pies son equivalentes a " << cantidadKilometros << " kilómetros y " << piesRestantes << " pies." << std::endl;

    return 0;
}

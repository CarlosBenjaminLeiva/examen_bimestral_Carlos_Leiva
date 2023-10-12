# DESCRIPCION DEL PROBLEMA

Realice un programa con if que permita detterminar la edad mayor de dos hermanos y que muestre la edad mayor en pantalla.

# SOLUCION DEL PROBLEMA


#include <iostream> 
#include <stdlib.h> 
#include <stdio.h> 
using namespace std;

int main() {
    int edad_hermano1, edad_hermano2;

    
    cout << "Ingrese la edad del primer hermano: ";
    cin >> edad_hermano1;

    
    cout << "Ingrese la edad del segundo hermano: ";
    cin >> edad_hermano2;

    
    if (edad_hermano1 > edad_hermano2) {
        cout << "El primer hermano es mayor y tiene " << edad_hermano1 << " años." << endl;
    } else if (edad_hermano2 > edad_hermano1) {
        cout << "El segundo hermano es mayor y tiene " << edad_hermano2 << " años." << endl;
    } else {
        cout << "Ambos hermanos tienen la misma edad, tienen " << edad_hermano1 << " años." << endl;
    }

    return 0;
}

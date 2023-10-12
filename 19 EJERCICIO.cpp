# DESCRIPCION DEL PROBLEMA

Realice un programa que permita mostrar el resultado de una potencia de base N y exponente Y utilizando ciclo while

# SOLUCION DEL PROBLEMA

#include <iostream> 
#include <stdlib.h> 
#include <stdio.h> 
 
using namespace std; 

int main() {
    int base, exponente;
    int resultado = 1; 

    
    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    
    while (exponente > 0) {
        resultado *= base;
        exponente--;
    }

    // Mostrar el resultado
    cout << "El resultado de " << base << " elevado a la " << exponente << " es: " << resultado << endl;

    return 0;
}

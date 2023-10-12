# DESCRIPCION DEL PROBLEMA
Realice un programa que permita la suma de numeros pares e impares entre 1 Y N con ciclo while


# SOLUCION DEL PROBLEMA


#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
    int numero;
    int sumaPares = 0;
    int sumaImpares = 0;

    
    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "El número debe ser un entero positivo." << endl;
        return 1; 
    }

    int i = 1; 

    while (i <= numero) {
        if (i % 2 == 0) {
            s
            sumaPares += i;
        } else {
            
            sumaImpares += i;
        }
        i++;
    }

   
    cout << "La suma de números pares entre 1 y " << numero << " es: " << sumaPares << endl;
    cout << "La suma de números impares entre 1 y " << numero << " es: " << sumaImpares << endl;

    return 0;
}

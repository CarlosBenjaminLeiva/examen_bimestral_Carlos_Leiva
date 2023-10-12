# DESCRIPCION DEL PRBLEMA

Construya un programa que permita realizar operaciones arimetricas elementales segun la siguiente tabla

CLAVE       OPERACION
  +           suma
  -           resta
  *           multiplicacion
  /           division
  %           modulo

  # SOLUCION DEL PROBLEMA


#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
    char operador;
    double num1, num2, resultado;

    cout << "Ingrese el operador (+, -, *, /, %): ";
    cin >> operador;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            cout << "La suma es: " << resultado << std::endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "La resta es: " << resultado << std::endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "La multiplicación es: " << resultado << endl;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "La división es: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;
            }
            break;
        case '%':
            if (num2 != 0) {
                resultado = static_cast<int>(num1) % static_cast<int>(num2);
                cout << "El módulo es: " << resultado << endl;
            } else {
                cout << "Error: No se puede calcular el módulo con cero." << endl;
            }
            break;
        default:
            cout << "Operador no válido." << endl;
            break;
    }

    return 0;
}


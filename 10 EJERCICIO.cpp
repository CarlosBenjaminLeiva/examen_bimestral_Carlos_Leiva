# DESCRIPCION DEL RPOBLEMA

realiza un programa que permita calcular la velocidad de un vehículo tomando en cuenta la siguiente fórmula

velocidad=distancia/tiempo

# SOLUCION DEL PROBLEMA


#include <iostream> 
#include <stdlib.h> 
#include <stdio.h> 
S
int main() {
    int distancia;
    int tiempo;

    std::cout << "Ingrese la distancia recorrida (en metros): ";
    std::cin >> distancia;

    std::cout << "Ingrese el tiempo empleado (en segundos): ";
    std::cin >> tiempo;

    // Calculamos la velocidad utilizando enteros
    int velocidad = distancia / tiempo;

    std::cout << "La velocidad del vehículo es: " << velocidad << " metros por segundo" << std::endl;

    return 0;
}

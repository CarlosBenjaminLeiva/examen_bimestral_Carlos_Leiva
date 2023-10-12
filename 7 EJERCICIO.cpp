# DESCRIPCION DEL PROBLEMA  
 
Realice un programa que permita calcular el promedio de x notas utilizando ciclo ford  
 
# SOLUCION DEL PROBLEMA  
 
#include <iostream> 
#include <stdlib.h> 
#include <stdio.h> 
 
using namespace std;  
 
int main() { 
    int numNotas; 
    float sumaNotas = 0.0; 
    cout<<"Ingrese la cantidad de notas: "; 
    cin>>numNotas; 
 
    if (numNotas <= 0) { 
        cout<<"Ingrese un número válido de notas."<<endl; 
        return 1; 
    } 
 
    for (int i = 0; i < numNotas; ++i) { 
        cout<<"Ingrese la nota #" << (i + 1) << ": "; 
        cin>>nota; 
        sumaNotas += nota; 
    } 
 
    float promedio = sumaNotas / numNotas; 
    cout<<"El promedio de las " << numNotas << " notas es: " << promedio <<endl; 
 
    return 0; 
}
# DESCRIPCION DEL PROGRAMA 
 
Realice un programa que permita hacer la convercion de grados centigrados a gradps farenheit tomando en cuenta la siguiente formula  
 
(F=(9/5))*centigrados+32 
 
# SOLUCION DEL PROGRAMA  
 
#include <iostream> 
#include <stdlib.h> 
#include <stdio.h> 
 
using namespace std; 
 
int main () { 
    int C, conv; 
    cout<<"Ingrese los grados centrigrados"; 
    cin>>C; 
 
    conv=((C*9/5))+32; 
    cout<<"los grados equivalen a"<<conv<<endl; 
}
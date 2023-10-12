# DESCRIPCION DEL PROBLEMA


# SOLUCION DEL PROBLEMA


#include <iostream> 
#include <stdlib.h> 
#include <stdio.h>
using namespace std;

int main() {
    int num_pacientes = 0;
    int costo_total = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Año " << i << ":\n";
        
        cout << "Ingrese el número de pacientes: ";
        cin >> num_pacientes;

        for (int j = 1; j <= num_pacientes; j++) {
            int edad, tipo_enfermedad, costo_diario = 0;

            cout << "Edad del paciente " << j << ": ";
            cin >> edad;

            cout << "Tipo de enfermedad (1, 2, 3, o 4): ";
            cin >> tipo_enfermedad;

            switch (tipo_enfermedad) {
                case 1:
                    costo_diario = 250;
                    break;
                case 2:
                    costo_diario = 300;
                    break;
                case 3:
                    costo_diario = 125;
                    break;
                case 4:
                    costo_diario = 100;
                    break;
                default:
                    cout << "Tipo de enfermedad no válido. Se asume costo diario 0.\n";
                    break;
            }

            if (edad >= 14 && edad <= 22) {
                costo_diario += costo_diario * 0.1;
            }

            costo_total += costo_diario;
        }
    }

    cout << "El costo promedio de internación por paciente durante los últimos 10 años es de Q." << costo_total / 10 << ".\n";

    return 0;
}

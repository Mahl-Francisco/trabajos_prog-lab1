#include<iostream>
using namespace std;
#include<math.h>

main() {
    int semana1;
    int semana2;
    int semana3;
    int semana4;
    int promedio;
    int porcentaje1;
    int porcentaje2;
    int porcentaje3;
    int porcentaje4;
    int total;
/*PROGRAMA*/
    cout << "Ingrese la recaudacion de cada semana del mes en orden y separadas por un espacio. ";
    cin >> semana1;
    cin >> semana2;
    cin >> semana3;
    cin >> semana4;
    total = semana1 + semana2 + semana3 + semana4;
    promedio = total / 4;
    porcentaje1 = semana1 * 100 / total;
    porcentaje2 = semana2 * 100 / total;
    porcentaje3 = semana3 * 100 / total;
    porcentaje4 = semana4 * 100 / total;
    cout << "Recaudacion promedio por semana: $" << promedio << "." << endl << "Parte de cada semana: 1er semana " << semana1 << "%." << endl << "2da semana " << semana2 << "%." << endl << "3er semana " << semana3 << "%." << endl << "4ta semana " << semana4 << "%.";

return 0;
}

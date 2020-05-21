#include<iostream>
using namespace std;
#include<math.h>

main() {
    int asientos_disponibles;
    int pasajes_ocupados;
    int p_ocupacion;
    int p_desocupacion;
    cout << "Ingrese la cantidad de asientos disponibles del avion. ";
    cin >> asientos_disponibles;
    cout << "Ingrese la cantidad de pasajes ocupados. ";
    cin >> pasajes_ocupados;
    p_ocupacion = pasajes_ocupados * 100 / asientos_disponibles;
    p_desocupacion = 100 - p_ocupacion;
    cout << "El avion esta ocupado en un " << p_ocupacion << "% y desocupado en un " << p_desocupacion << "%.";


return 0;
}

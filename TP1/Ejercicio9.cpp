#include<iostream>
using namespace std;
#include<math.h>

int main() {
    int ingreso;
    int minutos;
    int horas;
/*PROGRAMA*/
    cout << "Ingrese la cantidad de minutos. ";
    cin >> ingreso;
    minutos = ingreso % 60;
    horas = (ingreso - minutos) / 60;
    cout << "Equivale a " << horas << " horas con " << minutos << " minutos.";

return 0;
}

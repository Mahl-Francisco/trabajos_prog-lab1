#include<iostream>
using namespace std;
#include<math.h>

main() {
    int ingreso;
    int dias;
    int horas;
    int minutos;
    /*PROGRAMA*/
    cout << "Ingrese una cantidad de minutos. ";
    cin >> ingreso;
    minutos = ingreso % 60;
    horas = (ingreso - minutos) / 60;
    ingreso = horas % 24;
    dias = (horas - ingreso) / 24;
    horas = horas - dias * 24;
    cout << "La equivalencia es de " << dias << " dias, " << horas << " horas y " << minutos << " minutos.";

return 0;
}

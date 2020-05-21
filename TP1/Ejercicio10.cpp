#include<iostream>
using namespace std;
#include<math.h>

int main(){
    int ingreso;
    int horas;
    int dias;
    /*PROGRAMA*/
    cout << "Ingrese la cantidad de horas. ";
    cin >> ingreso;
    horas = ingreso % 24;
    dias = (ingreso - horas) / 24;
    cout << "La equivalencia es de " << dias << " dias y " << horas << " horas.";

return 0;
}

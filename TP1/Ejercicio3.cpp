#include<iostream>
using namespace std;
#include<math.h>

int main() {
    int autos_vendidos;
    int sueldo_total;
    cout << "Ingrese la cantidad de autos venidos por el vendedor." <<endl;
    cin >> autos_vendidos;
    sueldo_total = (autos_vendidos * 2000) + 15000;
    cout << "El sueldo total a pagar al vendedor es de $" << sueldo_total << "." ;

return 0;
}

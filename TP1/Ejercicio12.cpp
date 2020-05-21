#include<iostream>
using namespace std;
#include<math.h>

main () {
    int ingreso;
    int cajas;
    int sueltos;
    int precio;
/*PROGRAMA*/
    cout << "Ingrese la cantidad de huevos deseada: ";
    cin >> ingreso;
    sueltos = ingreso % 12;
    cajas = (ingreso - sueltos) / 12;
    precio = cajas * 100 + sueltos * 12;
    cout << "La compra es de " << cajas << " cajas y " << sueltos << " huevos sueltos." << endl << "El precio total a pagar es de $" << precio << ".";

return 0;
}

#include<iostream>
using namespace std;
#include<math.h>

main() {
    int venta;
    int descuento;
    int total;
/*PROGRAMA*/
    cout << "Ingrese el valor de la venta. ";
    cin >> venta;
    cout << "Ingrese el descuento aplicado a la venta. ";
    cin >> descuento;
    total = venta - (descuento * venta / 100);
    cout << "El precio total a abonar es de $" << total << ".";

return 0;
}

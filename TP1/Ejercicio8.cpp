#include<iostream>
using namespace std;
#include<math.h>

main() {
    int venta_sin_desc;
    int venta_desc;
    int desc;
    /*PROGRAMA*/
    cout << "Ingrese el valor de la venta. $";
    cin >> venta_sin_desc;
    cout << "Ingrese el valor de la venta con el descuento aplicado. $";
    cin >> venta_desc;
    desc = 100 - (venta_desc * 100 / venta_sin_desc);
    cout << "El descuento aplicado a la venta es del " << desc << "%.";

return 0;
}

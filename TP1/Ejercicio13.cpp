#include<iostream>
using namespace std;
#include<math.h>

main() {
    int ingreso;
    int mil;
    int quinientos;
    int doscientos;
    int cien;
/*PROGRAMA*/
    cout << "Ingrese la cantidad de dinero deseada: $";
    cin >> ingreso;
    mil = (ingreso - ingreso % 1000) / 1000;
    ingreso -= mil * 1000;
    quinientos = (ingreso - ingreso % 500) / 500;
    ingreso -= quinientos * 500;
    doscientos = (ingreso - ingreso % 200) / 200;
    ingreso -= doscientos * 200;
    cien = (ingreso - ingreso % 100) / 100;
    ingreso -= cien * 100;
    cout << "Entrega: -" << mil << " billetes de $1000." << endl << "-" << quinientos << " billetes de $500." << endl << "-" << doscientos << " billetes de $200." << endl << "-" << cien << " billetes de $100." << endl;
    if (ingreso > 0) {
        cout << "Lo sentimos. La maquina no posee dinero para entregar los $" << ingreso << " restantes.";
    }


return 0;
}

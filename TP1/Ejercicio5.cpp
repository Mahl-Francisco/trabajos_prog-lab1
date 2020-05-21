#include<iostream>
using namespace std;
#include<math.h>

main() {
    int A;
    int B;
    int C;
    int T;
    int Ventas_A;
    int Ventas_B;
    int Ventas_C;
    cout << "Ingrese las cantidades vendidas de los alfajores marca A, B y C separadas por un espacio.";
    cin >> A;
    cin >> B;
    cin >> C;
    T = A + B + C;
    Ventas_A = A * 100 / T;
    Ventas_B = B * 100 / T;
    Ventas_C = C * 100 / T;
    cout << "Ventas: A = " << Ventas_A << "% del total." << endl << "B = " << Ventas_B << "% del total." << endl << "C = " << Ventas_C << "% del total.";

return 0;
}

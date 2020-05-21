#include<iostream>
using namespace std;

main() {
    int num;
    string res;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    if (num == 0) {
    res = "El numero es cero.";
    }
    else {
        if (num < 0){
            res = "El numero es negativo.";
            }
        else {
            res = "El numero positivo.";
        }
    }
    cout << res;

return 0;
}

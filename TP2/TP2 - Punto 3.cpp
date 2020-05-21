#include<iostream>
using namespace std;
#include<math.h>

main() {
    int num;
    cout << "Ingrese un numero entero." << endl;
    cin >> num;
    if (num % 2 == 0){
        cout << "El numero ingresado es par.";
    }
    else {
        cout << "El numero ingresado es impar.";
    }

return 0;
}

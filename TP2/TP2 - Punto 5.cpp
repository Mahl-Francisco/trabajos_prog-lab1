#include<iostream>
using namespace std;
#include<math.h>

main() {
    int importe , pfinal;
    cout << "Ingrese el importe de la venta: $";
    cin >> importe;
    if(importe<100){
        pfinal=importe*0.95;
    }
    else{
        if(importe<=500){
            pfinal=importe*0.90;
        }
        else{
            pfinal=importe*0.85;
        }
    }
    cout << "El precio final a pagar es $" << pfinal << ".";

return 0;
}

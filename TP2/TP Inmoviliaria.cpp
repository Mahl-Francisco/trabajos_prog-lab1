#include<iostream>
using namespace std;
#include<math.h>

main() {
    int m2 , vu , vt , c;
    string p , done;
    cout << "Ingrese la cantidad de metros cuatrados deseados: "; cin >> m2;
    cout << "Ingrese el precio de cada metro cuadrado: $"; cin >> vu; vt=vu*m2;
    cout << "Ingrese el tipo de pago. Tarjeta de credito o efectivo: "; cin >> p;
    if(p=="Tarjeta"||p=="tarjeta"||p=="Tarjeta de credito"||p=="tarjeta de credito"||p=="TARJETA"||p=="TARJETA DE CREDITO"){vt+=vt*0.08;}
    else{
        if(p=="Efectivo"||p=="efectivo"||p=="EFECTIVO"){vt-=vt*0.1;}
        else{cout << "Revise la ortografia e intentelo de nuevo."; done="end";}
    }
    c=vt*0.2;
    if(done!="end"){cout << "El precio total a abonar por los " << m2 << " metros cuadrados es de " << vt << ". La primera cuota tiene el monto de $" << c << ".";}

return 0;
}

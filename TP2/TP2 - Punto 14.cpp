#include<iostream>
using namespace std;
#include<math.h>

main() {
    int d , m , a , da , ma , aa , e;
    cout << "Ingrese la fecha de nacimiento utilizando numeros." << endl << "Dia: "; cin >> d;
    cout << "Mes: "; cin >> m;
    cout << "Ano: "; cin >> a;
    cout << "Ingrese la fecha actual utilizando numeros." << endl << "Dia: "; cin >> da;
    cout << "Mes: "; cin >> ma;
    cout << "Ano: "; cin >> aa; e=aa-a;
    if(ma<m){e--;}
    else{
        if(da<d){e--;}
    }
    cout << "La edad actual de la persona es de " << e << " anos.";

return 0;
}

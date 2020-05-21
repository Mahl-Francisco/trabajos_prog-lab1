#include<iostream>
using namespace std;
#include<math.h>

main() {
    int a;
    cout << "Ingrese el ano que desea saber si es bisiesto: "; cin >> a;
    if(a%400==0){cout << "El ano " << a << " es bisiesto.";}
    else{
        if(a%4==0&&a%100!=0){cout << "El ano " << a << " es bisiesto.";}
        else{cout << "El ano " << a << " no es bisiesto.";}
    }

return 0;
}

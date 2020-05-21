#include<iostream>
using namespace std;
#include<math.h>

main() {
    int p , n , c , m , i; p=n=c=0;
    cout << "Ingrese diez numeros separados por un espacio. El programa informara cuantos son positivos, cuantos negativos y cuantos son cero.";
    for(i=0; i<10; i++){
        cin >> m; if(m!=0){if(m>0){p++;} else{n++;}}else{c++;}
    }
    cout << "Entre los numeros ingresados, hay " << p << " positivos, " << n << " negativos y " << c << " ceros.";

return 0;
}

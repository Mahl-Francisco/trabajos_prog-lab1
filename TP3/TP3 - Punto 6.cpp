#include<iostream>
using namespace std;
#include<math.h>

main() {
    int n , p , m , i;
    cout << "Ingrese la cantidad de valores a tener en cuenta: "; cin >> n; p=0;
    cout << "A continuacion, ingrese aquellos valores separados por un espacio." << endl;
    for(i=0; i<n; i++){cin >> m; if(m>0){p++;}}
    cout << "Entre los valores ingresados, hay " << p << " numeros positivos.";

return 0;
}

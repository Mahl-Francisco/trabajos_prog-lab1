#include<iostream>
using namespace std;

main() {
    int n , m , p , i;
    cout << "Ingrese diez numeros separados por un espacio. El programa informara cual es el numero mayor y su posicion." << endl;
    for(i=0; i<10; i++){cin >> n; if(i!=0){
        if(n>m){m=n; p=i+1;}
        }
        else{m=n; p=i+1;}
    }
    cout << "El mayor numero es " << m << " en la posicion " << p << ".";

return 0;
}

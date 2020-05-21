#include<iostream>
using namespace std;

main() {
    int m , n , i;
    cout << "Ingrese diez numeros en renglones diferentes. El programa informara el mayor numero ingresado."; cin >> m;
    for(i=0; i<10; i++){cin >> n; if(n>m){m=n;}}
    cout << "De los numeros ingresados, el mayor es " << m << ".";

return 0;
}

#include<iostream>
using namespace std;

main() {
    int n , i , r , c; c=r=0;
    cout << "Ingrese un numero. El programa mostrara todos su divisores pares. "; cin >> n;
    cout << "Los divisores pares del numero son: ";
    for(i=0;i<n;i++){
        if(r!=0){cout << ", ";}
        if(n%(i+1)==0&&(i+1)%2==0){cout << i+1; r=1; c++;} else{r=0;}
    }
    if(c==0){cout << "Ninguno";} cout << ".";

return 0;
}

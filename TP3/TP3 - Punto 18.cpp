#include<iostream>
using namespace std;

main() {
    int n , c , i; c=0;
    cout << "Ingrese un numero. El programa mostrara cuantos divisores tiene. "; cin >> n;
    for(i=0;i<n;i++){
        if(n%(i+1)==0){c++;}
    }
    if(n==0){cout << "El cero es divisible por todo.";} else{cout << "El numero ingresado tiene " << c << " divisores.";}

return 0;
}

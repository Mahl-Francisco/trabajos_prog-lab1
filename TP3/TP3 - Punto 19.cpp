#include<iostream>
using namespace std;

main() {
    int n , c , i; c=0;
    cout << "Ingrese un numero. El programa informara si es primo o no. "; cin >> n;
    for(i=0;i<n;i++){
        if(n%(i+1)==0){c++;}
    }
    if(c==2){cout << "Es numero primo.";} else{cout << "No es numero primo.";}

return 0;
}

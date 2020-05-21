#include<iostream>
using namespace std;

main() {
    int i , c , n;
    cout << "Ingrese un numero y se mostraran los valores entre 1 y este: "; cin >> n;
    if(n>0){c=0; for(i=0; i<n; i++){c++; cout << c << endl;}}
    else{c=n-1; for(c; c!=1; c){c++; cout << c << endl;}}

return 0;
}

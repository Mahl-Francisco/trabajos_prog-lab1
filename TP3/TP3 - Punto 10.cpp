#include<iostream>
using namespace std;

main() {
    int n , mi , ma , i;
    cout << "Ingrese diez numeros separados por un espacio. El programa informara cuales son el mayor y el menor." << endl;
    for(i=0; i<10; i++){
        cin >> n; if(i!=0){
            if(n<mi){mi=n;} else{if(n>ma){ma=n;}}
        }
        else{ma=n; mi=n;}
    }
    cout << "El numero menor es " << mi << " y el mayor es " << ma << ".";

return 0;
}

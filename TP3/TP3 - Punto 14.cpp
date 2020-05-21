#include<iostream>
using namespace std;

main() {
    int n , na , d , i; d=-1;
    cout << "Ingrese ocho numeros separados por un espacio. El programa indicara si estan ordenados de manera creciente o no." << endl;
    for(i=0;i<8;i++){
        cin >> n; if(d>=0){
        if(n<na){d++;}
        }
        else{d++;}
        na=n;
    }
    if(d==0){cout << "Conjunto ordenado.";} else{cout << "Conjunto no ordenado.";}

return 0;
}

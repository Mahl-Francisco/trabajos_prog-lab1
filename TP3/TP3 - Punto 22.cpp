#include<iostream>
using namespace std;

main() {
    int n , na , q , i; na=q=0;
    cout << "Ingrese diez numeros separados por un espacio. El programa informara cuantas duplas de impares consecutivos hay." << endl;
    for(i=0;i<10;i++){
        cin >> n; if(n%2!=0&&na%2!=0){q++;} na=n;
    }
    cout << "Hay " << q << " duplas de numeros impares consecutivos.";

return 0;
}

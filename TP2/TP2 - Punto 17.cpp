#include<iostream>
using namespace std;

main() {
    int n1 , n2 , n3 , n4;
    cout << "Ingrese cuatro numeros enteros separados por un espacio." << endl;
    cin >> n1 >> n2 >> n3 >> n4;
    if(n1<=n2&&n2<=n3&&n3<=n4){cout << "Conjunto ordenado.";}
    else{cout << "Conjunto desordenado.";}

return 0;
}

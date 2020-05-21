#include<iostream>
using namespace std;

main() {
    int n1 , n2 , n3;
    cout << "Ingrese tres numeros enteros separados por un espacio." << endl;
    cin >> n1 >> n2 >> n3;
    if(n1!=n2&&n2!=n3&&n1!=n3){
        cout << "Los tres numeros son distintos entre si.";
    }

return 0;
}

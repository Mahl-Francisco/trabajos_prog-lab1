#include<iostream>
using namespace std;

main() {
    int n1 , n2 , n3 , M;
    cout << "Ingrese tres numeros separados por un espacio." << endl;
    cin >> n1 >> n2 >> n3;
    if(n1>n2){M=n1;}
    else{M=n2;}
    if(M<n3){M=n3;}
    cout << "El mayor de los numeros ingresados es " << M << ".";

return 0;
}

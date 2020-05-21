#include<iostream>
using namespace std;

main() {
    int n1 , n2 , n3 , n4 , n5 , M;
    cout << "Ingrese cinco numeros separados por un espacio." << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    if(n1>n2){M=n1;}
    else{M=n2;}
    if(M<n3){M=n3;}
    if(M<n4){M=n4;}
    if(M<n5){M=n5;}
    cout << "El mayor de los numeros ingresados es " << M << ".";

return 0;
}

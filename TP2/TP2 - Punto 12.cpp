#include<iostream>
using namespace std;

main() {
    int n1 , n2 , n3 , m1 , m2 , m3;
    cout << "Ingrese tres numeros separados por un espacio." << endl;
    cin >> n1 >> n2 >> n3;
    if(n1>n2){m1=n2; m2=n1;}
    else{m1=n1; m2=n2;}
    if(n3>m2){m3=n3;}
    else{
        m3=m2;
        if(n3>m1){m2=n3;}
        else{m2=m1; m1=n3;}
    }
    cout << "Los numeros ingresados, ordenados de menor a mayor, son " << m1 << ", " << m2 << " y " << m3 << ".";

return 0;
}

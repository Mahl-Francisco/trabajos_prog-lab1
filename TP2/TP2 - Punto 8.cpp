#include<iostream>
using namespace std;

main() {
    int l1 , l2 , l3;
    string tt;
    cout << "Ingrese la longitud de cada lado del triangulo." << endl << "Lado 1: ";
    cin >> l1;
    cout << "Lado 2: ";
    cin >> l2;
    cout << "Lado 3: ";
    cin >> l3;
    if(l1==l2&&l2==l3){
        tt="equilatero.";
    }
    else{
        if(l1==l2||l2==l3||l1==l3){
            tt="isosceles.";
        }
        else{
            tt="escaleno.";
        }
    }
    cout << "El triangulo es " << tt;

return 0;
}

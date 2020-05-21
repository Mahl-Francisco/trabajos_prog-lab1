#include<iostream>
using namespace std;

main() {
    int n1 , n2 , n3 , n4 , n5 , p;
    string P;
    cout << "Ingrese cinco numeros separados por un espacio." << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5; p=0;
    if(n1>0){p++;}
    if(n2>0){p++;}
    if(n3>0){p++;}
    if(n4>0){p++;}
    if(n5>0){p++;}
    switch (p){
    case 1:
        P="uno es positivo.";
        break;
    case 2:
        P="dos son positivos.";
        break;
    case 3:
        P="tres son positivos.";
        break;
    case 4:
        P="cuatro son positivos.";
        break;
    case 5:
        P="cinco son positivos.";
        break;
    case 0:
        P="ninguno es positivo.";
    }
    cout << "De los cinco numeros ingresados, " << P;

return 0;
}

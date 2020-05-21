#include<iostream>
using namespace std;

main() {
    int n1 , n2 , n3 , e , m;
    string fail;
    cout << "Ingrese tres numeros separados por un espacio." << endl;
    cin >> n1 >> n2 >> n3; e=0;
    if(n1>n2&&n1<n3 || n1<n2&&n1>n3){e++; m=n1;}
    if(e==0){
    if(n2>n1&&n2<n3 || n2<n1&&n2>n3){e++; m=n2;}
    }
    if(e==0){
    if(n3>n2&&n3<n1 || n3<n2&&n3>n1){m=n3;}
    }
    if(n1==n2&&n2==n3){cout << "Los tres numeros son iguales."; fail="true";}
    if(fail!="true"){cout << "De los tres numeros ingresados, el del medio es " << m << ".";}

return 0;
}

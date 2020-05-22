#include<iostream>
using namespace std;

main() {
    int n , na , c=0; string orden="true";
    cout<<"Digite una lista de numeros. Para finalizarla, ingrese un cero. El programa informara si estan ordenados de forma creciente o no."<<endl;
    do{
        cin>>n; if(c!=0){
            if(n<na&&n!=0){orden="false";}
        } else{c++;}
        na=n;
    }while(n!=0);
    if(orden=="true"){cout<<"Los numeros estan ordenados de forma creciente.";}
    else{cout<<"Los numeros no estan ordenados de forma creciente.";}

return 0;
}

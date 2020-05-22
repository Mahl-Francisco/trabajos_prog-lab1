#include<iostream>
using namespace std;

main() {
    int n , i=1;
    do{
        cout<<"Ingrese un numero POSITIVO. El programa contara desde 1 hasta el numero ingresado. "; cin>>n; cout<<endl;
    }while(n<1);
    while(i<=n){
        if(i!=1){cout<<", ";}
        cout<<i; i++;
    }
    cout<<".";

return 0;
}

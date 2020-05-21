#include<iostream>
using namespace std;

main() {
    int n , r , i; r=0;
    cout << "Ingrese un numero entero. El programa mostrara todos sus divisores. "; cin >> n;
    if(n==0){cout << "Sos gracioso, pelotudito? Pusiste un cero, el cero es divisible por todo.";} else{
    cout << "Los divisores del numero son: ";
    for(i=0;i<n;i++){
        if(r==1){cout << ", ";}
        if(n%(i+1)==0){cout << i+1; r=1;} else{r=0;}
    }
    cout << ".";
    }
return 0;
}

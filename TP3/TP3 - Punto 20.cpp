#include<iostream>
using namespace std;

main() {
    int n , p , i; p=0;
    cout << "Ingrese un numero entero. El programa informara si es un numero perfecto o no. "; cin >> n;
    if(n==0){cout << n << " no es un numero perfecto.";} else{
        for(i=0;i<n;i++){
            if(n%(i+1)==0&&i+1!=n){p+=i+1;}
        }
        if(p==n){cout << n << " es un numero perfecto.";} else{cout << n << " no es un numero perfecto.";}
    }

return 0;
}

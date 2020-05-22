#include<iostream>
using namespace std;

main() {
    int n , m , M , c=0;
    cout<<"Digite una lista de numeros. Para finalizarla, ingrese un cero. El programa informara el mayor y el segundo mayor."<<endl;
    do{
        cin>>n; if(n!=0){if(c!=0){
            if(n>M){m=M; M=n;}
            else{if(n>m){m=n;}}
        } else{M=m=n; c++;}
        }
    }while(n!=0);
    cout<<"El numero mayor es "<<M<<" y el segundo mayor es "<<m<<".";

return 0;
}

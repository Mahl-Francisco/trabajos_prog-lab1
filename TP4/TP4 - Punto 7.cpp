#include<iostream>
using namespace std;
#include<math.h>

main() {
    int i , m , c=0;
    cout<<"Ingrese una lista de numeros. Para finalizarla, ingrese un cero. El programa informara el numero mayor."<<endl;
    do{
        cin>>i; if(i!=0){
            if(c==0){m=i; c=1;} else{
                if(i>m){m=i;}
            }
            }
    }while(i!=0);
    if(c==0){cout<<"No se ha ingresado ningun numero.";}
    else{cout<<"El numero mayor de la lista es "<<m<<".";}

return 0;
}

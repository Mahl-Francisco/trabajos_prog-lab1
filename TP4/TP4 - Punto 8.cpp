#include<iostream>
using namespace std;
#include<math.h>

main() {
    int i , m , pm , c=0 , p=1;
    cout<<"Ingrese una lista de numeros. Para finalizarla, ingrese un cero. El programa informara el numero mayor."<<endl;
    do{
        cin>>i; if(i!=0){
            if(c==0){m=i; pm=p; c=1;} else{
                if(i>m){m=i;pm=p;}
            }
            p++;
            }
    }while(i!=0);
    if(c==0){cout<<"No se ha ingresado ningun numero.";}
    else{cout<<"El numero mayor de la lista es "<<m<<" en la posicion "<<pm<<".";}

return 0;
}

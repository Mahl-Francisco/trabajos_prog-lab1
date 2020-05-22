#include<iostream>
using namespace std;
#include<math.h>

main() {
    int n , mayor , menor , c=0;
    cout<<"Ingrese una lista de numeros. Para finalizarla, ingrese un cero. El programa informara el mayor y el menor."<<endl;
    do{
        cin>>n; if(n!=0){
            if(c==0){mayor=menor=n; c=1;} else{
                if(n>mayor){mayor=n;} else{
                    if(n<menor){menor=n;}
                }
            }
            }
    }while(n!=0);
    if(c==0){cout<<"No se ha ingresado ningun numero.";}
    else{cout<<"El numero mayor de la lista es "<<mayor<<" y el menor es "<<menor<<".";}

return 0;
}

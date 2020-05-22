#include<iostream>
using namespace std;
#include<math.h>

main() {
    int n , man , mip , cp=0 , cn=0;
    cout<<"Ingrese una lista de numeros. Para finalizarla, ingrese un cero. El programa informara el maximo de los negativos y el minimo de los postivos."<<endl;
    do{
        cin>>n; if(n!=0){ if(n>0){
            if(cp==0){mip=n; cp=1;} else{
                if(n<mip){mip=n;}
            }
        } else{
            if(cn==0){man=n; cn=1;} else{
                if(n>man){man=n;}
            }
        }
            }
    }while(n!=0);
    if(cp==0&&cn==0){cout<<"No se ha ingresado ningun numero.";}
    if(cp==1&&cn==0){cout<<"El minimo positivo es "<<mip<<". No se ha ingresado ningun numero negativo.";}
    if(cp==0&&cn==1){cout<<"El maximo negativo es "<<man<<". No se ha ingresado ningun numero positivo.";}
    if(cp==1&&cn==1){cout<<"El minimo positivo es "<<mip<<" y el maximo negativo es "<<man<<".";}

return 0;
}

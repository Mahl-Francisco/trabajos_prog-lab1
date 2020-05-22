#include<iostream>
using namespace std;

main() {
    int n , na , m , ma , c=0; string v;
    cout<<"Ingrese una lista de numeros. Para finalizarla, ingrese dos veces seguidas el mismo numero. El programa informara el numero maximo de la lista."<<endl;
    do{
        na=n; cin>>n; if(c!=0){
            if(n!=na){
                if(n>m){ma=m; m=n; v="true";}
                else{v="false";}
            } else{
                if(v=="true"){m=ma;}
            }
        } else{m=n; v="true";}
        c++;
    }while(n!=na);
    if(c==2){cout<<"No se ha ingresado ningun numero.";}
    else{cout<<"El numero mayor es "<<m<<".";}

return 0;
}

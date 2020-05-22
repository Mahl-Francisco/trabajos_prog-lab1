#include<iostream>
using namespace std;

int main (){
    int n , b , d , pa=0 , mm=0 , m[99] , p=-1 , primos[99];
    string orden="true";
    cout<< "Este programa informara, de los numeros ingresados, si los primos estan ordenados de menor a mayor o no. Ingrese un cero para finalizar los la lista."<<endl<<endl;
    cout<< "Ingrese un numero: "; cin>>n;
    while(n!=0){
        /*DETECCIÓN DE REPETIDOS*/
        for(int i=0;i<mm;i++){
            if(m[i]==n){cout<< "El numero "<<n<< " ya ha sido ingresado. Por favor, reemplacelo: "; cin>>n; i=-1;}
        } m[mm]=n; mm++; if(mm>99){cout<<endl<<endl<< "ADVERTENCIA: Ha superado el limite de 99 numeros. El programa podria presentar fallas."<<endl<<endl;}
        /*DETECCIÓN DE PRIMOS*/
        d=0; if(n>0){
            b=2; while(b<n){
                if(n%b==0){d++;} b++;
            }
        } else{
            b=-2; while(b>n){
                if(n%b==0){d++;} b--;
            }
        }
        /*COMPARACIÓN DE PRIMOS*/
        if(d==0&&n!=1&&n!=-1&&n!=0){
            if(pa!=0){
                if(n<pa){orden="false";}
            } pa=n; p++; primos[p]=n;
        }
        /*NUEVO NUMERO*/ cout<<endl<< "Ingrese un numero: "; cin>>n;
    }
    if(pa==0){cout<<endl<< "No se ha ingresado nungun numero primo."<<endl;} else{
        if(orden=="true"){cout<<endl<< "Los numeros primos estan ordenados de menor a mayor. (";} else{cout<<endl<< "Los numeros primos no estan ordenados de menor a mayor. (";}
        cout<<primos[0]; for(int i=1;i<=p;i++){cout<<", "<<primos[i];} cout<<")"<<endl;
    }

return 0;
}

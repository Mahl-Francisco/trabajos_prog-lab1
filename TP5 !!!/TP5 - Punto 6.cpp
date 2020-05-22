#include<iostream>
using namespace std;
#include<stdlib.h>

int main(){
    int n , na , b , d , p , v , mp , u , au , c;
    string igualdad="true";
    cout<< "Ingrese una lista de numeros para cada grupo. Para finalizar cada lista, ingrese un cero. El programa mostrara, de cada grupo, la cantidad de numeros primos presentes, el minimo numero par y los dos ultimos numeros positivos.";
    for(int i=1;i<=10;i++){
        cout<<endl<<endl<< "GRUPO "<<i<< ": "; cin>>n; na=n-1; au=u=c=v=p=0;
        while(n>=na){
            c++; if(n!=na&&c>=2){igualdad="false";}
        /*BÚSQUEDA DE PRIMOs*/
            d=0; if(n>0){
                for(b=1;b<=n;b++){
                    if(n%b==0){d++;}
                }
            } else{
                for(b=-1;b>=n;b--){
                    if(n%b==0){d++;}
                }
            }
            if(d==2){p++;}
        /*BÚSQUEDA DE MÍNIMO PAR*/
            if(n%2==0&&n!=0){
                if(n<mp||v==0){mp=n; v++;}
            }
        /*BÚSQUEDA DE LOS DOS ÚLTIMOS POSITIVOS*/
            if(n>0){au=u; u=n;}
        /*NUEVO NÚMERO*/
            na=n; cin>>n;
        }
        if(igualdad=="true"){cout<<endl<<"Todos los numeros de la lista son iguales. Intentelo de nuevo."; i--;}
        else{
            cout<<endl<<"La cantidad de numeros primos en este grupo es "<<p<< "."<<endl;
            if(v!=0){cout<< "El minimo par ingresado es "<<mp<< "."<<endl;} else{cout<< "No se ha ingresado ningun numero par."<<endl;}
            if(u==0){cout<< "No se han ingresado numeros positivos.";} else{
                if(au==0){cout<< "El unico numero positivo ingresado es "<<u<<".";}
                else{cout<< "El ultimo numero positivo es "<<u<< " y el anteultimo es "<<au<< ".";}
            }
        }
    }
cout<<endl;
return 0;
}

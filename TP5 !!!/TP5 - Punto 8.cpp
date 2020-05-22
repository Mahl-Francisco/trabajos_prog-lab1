#include<iostream>
using namespace std;

int main(){
    /*GENERALES*/int n , na , i , d , b , pos;
    int pc , grupos_pc , confirmar_g; string primo_consecutivo;
    int MAYOR , s_mayor , posM , posm;
    int primo_mayor , grupo_pm , pos_pm;
    cout<< "Ingrese una lista de numeros en cada grupo. Para finalizar un grupo, ingrese un cero. Para finalizar el programa, ingrese dos ceros al final de cualquier grupo."<<endl<< "Al final del programa, se informara cuantos grupos tienen un conjunto de cuatro o mas numeros primos consecutivos y cual es el mayor numero primo, junto con su grupo y su posicion en este."<<endl<< "Por cada grupo, se informaran los dos numeros negativos mayores y su posicion dentro del grupo.";
    primo_mayor=grupos_pc=i=0; na=n=-1; while(n!=0||na!=0){
        i++; cout<<endl<<endl<< "GRUPO "<<i<<": "; na=n; cin>>n; pos=MAYOR=confirmar_g=0; pc=1; primo_consecutivo="false";
        while(n!=0){
            /*CONTADOR DE PRIMOS CONSECUTIVOS*/
            pos++; d=0; for(b=1;b<=n;b++){
                if(n%b==0){d++;}
            } if(d==2){
                if(primo_consecutivo=="true"){pc++;}
                primo_consecutivo="true";
            } else{primo_consecutivo="false"; pc=1;}
                /*PRIMO MAYOR*/if(n>primo_mayor||primo_mayor==0){primo_mayor=n; grupo_pm=i; pos_pm=pos;}
            if(pc>=4&&confirmar_g==0){grupos_pc++; confirmar_g++;}
            /*BUSCADOR DE NEGATIVOS MAYORES*/
            if(n<0){
                if(n>MAYOR||MAYOR==0){s_mayor=MAYOR; posm=posM; MAYOR=n; posM=pos;} else{
                    if(n>s_mayor||s_mayor==0){s_mayor=n; posm=pos;}
                }
            }
            /*NUEVO INGRESO*/ na=n; cin>>n;
        }
        if(MAYOR!=0){cout<<endl<< "El mayor numero negativo es "<<MAYOR<< " en la posicion "<<posM<< ". ";
        if(s_mayor!=0){cout<<endl<< "El segundo mayor es "<<s_mayor<< " en la posicion "<<posm<< ".";}}
        else{cout<< "No se han ingresado numeros negativos.";} cout<<endl;
    }
    cout<<endl<<endl<< "El total de grupos con cuatro o mas numeros primos consecutivos es "<<grupos_pc<<".";
    if(primo_mayor!=0){
        cout<<endl<< "El mayor numero primo es "<<primo_mayor<< " en el grupo "<<grupo_pm<< ", posicion "<<pos_pm<<".";
    } else{cout<<endl<<"No se ha ingresado nungun numero primo.";}

cout<<endl;
return 0;
}

#include<iostream>
using namespace std;

int main (){
    int n , mi , mp , ci , cp , nt , nn , np , pn , pp , pt=0;
    cout << "En este programa debera ingresar diez grupos de numeros separados entre si por un cero. El programa mostrara, por cada grupo, los mayores numeros pares e impares y el porcentaje de numeros positivos y negativos. Al final informara la cantidad de numeros positivos totales.";
    for(int i=1;i<=10;i++){
        cout << endl << endl << "GRUPO " << i << ": ";
        nn=np=nt=cp=ci=0; cin >> n;
        while (n!=0){
            nt++; if(n%2==0){
                if(cp!=0){
                    if(n>mp){mp=n;}
                } else{mp=n; cp++;}
            } else{
                if(ci!=0){
                    if(n>mi){mi=n;}
                } else{mi=n; ci++;}
            }
            if(n>0){pt++; np++;} else{nn++;}
            cin >> n;
        }
    /*MUESTRA MP Y MI*/
        cout << endl;
        if(cp==0){cout << "No se ha ingresado ningun numero par. ";} else{cout << "El maximo numero par es " << mp << ". ";}
        if(ci==0){cout << "No se ha ingresado ningun numero impar. ";} else{cout << "El maximo numero impar es " << mi << ". ";}
    /*PORCENTAJES*/
        if(nt!=0){
        pp=np*100/nt; pn=nn*100/nt;
        cout << endl << "El porcentaje de numeros postivos es " << pp << "% y el de numeros negativos es " << pn << "%.";
        }
    }
    cout << endl << endl << "La cantidad total de numeros positivos entre todos los grupos es " << pt << "." << endl;

return 0;
}

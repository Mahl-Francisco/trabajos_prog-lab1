#include<iostream>
using namespace std;

int main (){
    int n , nt , impp , porcentaje_impp , porcentaje_mayor , grupo_mayor , uprimo , puprimo , d , b , na , grupos_ordenados=0;
    string orden , igualdad;
    cout << "Ingrese una lista de diez grupos de numeros separados entre si por un cero. El programa informara el grupo con mayor porcentaje de numeros impares positivos, cuantos grupos estan ordenados de mayor a menor y, por cada grupo, el ultimo numero primo y su posicion en la lista.";
    for(int i=1;i<=10;i++){
        cout << endl << endl << "GRUPO " << i << ": "; cin >> n; cout << endl;
        porcentaje_impp=uprimo=impp=nt=0; orden=igualdad="true";
        while (n!=0){
            nt++; if(n%2!=0&&n>0){impp++;}
            d=0; if(n>0){
                b=2; while(b<n){
                    if(n%b==0){d++;} b++;
                }
            }
            else{
                b=-2; while(b>n){
                    if(n%b==0){d++;} b--;
                }
            }
            if(d==0&&n!=1&&n!=-1&&n!=0){uprimo=n; puprimo=nt;}
            if(nt!=1){
                if(n!=na){
                    igualdad="false"; if(n>na){orden="false";}
                }
            } else{na=n;}
            porcentaje_impp=impp*100/nt;
            cin >> n;
        }
        if(i!=1){
            if(porcentaje_impp>porcentaje_mayor){grupo_mayor=i; porcentaje_mayor=porcentaje_impp;}
        } else{grupo_mayor=i; porcentaje_mayor=porcentaje_impp;}
        if(uprimo!=0){
            cout<< "El ultimo numero primo ingresado es "<<uprimo<< " en la posicion " << puprimo<< ".";
        } else{cout<<"No se han ingresado numeros primos.";}
        if(orden=="true"&&igualdad=="false"){grupos_ordenados++;}
    }
    cout<<endl<<endl<< "El grupo con mayor porcentaje de numeros impares positivos es el grupo "<<grupo_mayor<< ". La cantidad de grupos ordenados de mayor a menor es "<<grupos_ordenados<<"." << endl;

return 0;
}

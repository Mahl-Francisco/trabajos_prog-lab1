#include<iostream>
using namespace std;

int main (){
    int n , pv , tv , qv , promedio_M , G_promedio_M , m , pm , gm , me=0 , TT=0;
    cout<< "Ingrese diez grupos de numeros. Para finalizar cada uno, ingrese un cero. El programa mostrara el promedio de valores de cada grupo, el valor minimo de todos los ingresados, junto con su grupo y posicion dentro de este, y el mayor de los promedios.";
    for(int i=1;i<=10;i++){
        cout<<endl<<endl<<"GRUPO "<<i<<": "; cin>>n; qv=tv=0;
        while(n!=0){
            TT+=n; tv+=n; qv++; if(me!=0){
                if(n<m){m=n; pm=qv; gm=i;}
            } else{m=n; pm=qv; gm=i; me++;}
            cin>>n;
        }
        if(qv!=0){pv=tv/qv;} else{pv=0;}
        cout<<endl<< "Promedio de valores: "<<pv;
        if(i!=1){
            if(pv>promedio_M){promedio_M=pv; G_promedio_M=i;}
        } else{promedio_M=pv; G_promedio_M=i;}
    }
    if(TT!=0){
    cout<<endl<<endl<< "El valor minimo es "<<m<< " en el grupo "<<gm<< ", posicion "<<pm<<"."<<endl<< "El promedio de valores mayor de los grupos es "<<promedio_M<< " del grupo "<<G_promedio_M<<"."<<endl;
    } else{cout<<endl<<endl<< "No se ha ingresado ningun numero."<<endl;}
return 0;
}

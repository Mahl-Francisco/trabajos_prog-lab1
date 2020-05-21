#include<iostream>
using namespace std;

main() {
    int n , par , upar , pri , upri , d , caso , i , ipri; par=pri=0;
    cout << "Ingrese siete numeros separados por un espacio. El programa informara el primer numero par, el ultimo numero primo y sus ubicaciones en la lista." << endl;
    for(i=0;i<7;i++){
        cin >> n; if(n%2==0&&n!=0){
            if(par==0){par=n; upar=i+1;}
        }
        else{
            d=0; for(ipri=0;ipri<n;ipri++){
                if(n%(ipri+1)==0){d++;}
            }
            if(d<=2){pri=n;upri=i+1;}
        }
    }
    if(par==pri){caso=0;} else{
        if(par!=0&&pri==0){caso=1;} else{
            if(par==0&&pri!=0){caso=2;} else{caso=3;}
        }
    }
    switch(caso){
    case 0:
        cout << "No se ha ingresado ningun numero primo ni nigun numero par."; break;
    case 1:
        cout << "El primer numero par es " << par << " en la ubicacion " << upar << ". No se ha ingresado nigun numero primo."; break;
    case 2:
        cout << "El ultimo numero primo es " << pri << " en la ubicacion " << upri << ". No se ha ingresado nigun numero par."; break;
    case 3:
        cout << "El primer numero par es " << par << " en la ubicacion " << upar << ". El ultimo numero primo es " << pri << " en la ubicacion " << upri << ".";
    }

return 0;
}

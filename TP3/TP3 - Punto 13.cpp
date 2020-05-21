#include<iostream>
using namespace std;

main() {
    int n , c , imp1 , impf , i; imp1=impf=c=0;
    cout << "Ingrese siete numeros separados por un espacio. El programa mostrara el primer y el ultimo impar." << endl;
    for(i=0;i<7;i++){
        cin >> n; if(n%2==1){
            if(c==0){imp1=n; c++;} else{impf=n;}
        }
    }
    if(imp1==0){cout << "No se ha ingresado ningun numero impar.";} else{
        if(impf==0){cout << "El unico numero impar es " << imp1 << ".";} else{cout << "El primer numero impar es " << imp1 << " y el ultimo es " << impf << ".";}
    }

return 0;
}

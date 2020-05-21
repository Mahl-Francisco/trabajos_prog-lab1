#include<iostream>
using namespace std;

main() {
    int n , c , imp1 , imp2 , i; imp1=imp2=c=0;
    cout << "Ingrese siete numeros separados por un espacio. El programa mostrara el primer y segundo impar." << endl;
    for(i=0; i<7; i++){
        cin >> n; if(n%2==1&&c<2){
        if(c==0){imp1=n;} else{imp2=n;} c++;
        }
    }
    if(imp1==0){cout << "No se ha ingresado ningun numero impar.";} else{
        if(imp2==0){cout << "El unico numero impar es " << imp1 << ".";} else{cout << "El primer numero impar es " << imp1 << " y el segundo es " << imp2 << ".";}
    }

return 0;
}

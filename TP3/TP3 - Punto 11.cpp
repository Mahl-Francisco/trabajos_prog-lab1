#include<iostream>
using namespace std;

main() {
    int man , mip , n , cp , cn , i , caso; man=mip=cp=cn=0;
    cout << "Ingrese diez numeros separados por un espacio. El programa mostrara el maximo negativo y el minimo positivo." << endl; man=mip=0;
    for(i=0; i<10; i++){
        cin >> n; if(n!=0){if(n>0){
            if(n<mip||mip==0){mip=n;}
        }
        else{
        if(n>man||man==0){man=n;}
        }}
    }
    if(man!=0){cn++;} if(mip!=0){cp++;}
    if(cn==0&cp==0){caso=0;} else{
        if(cn==1&cp==0){caso=1;} else{
            if(cn==0&cp==1){caso=2;} else{caso=3;}
        }
    }
    switch(caso){
    case 0:
        cout << "Sos gracioso, capo? Todos los numeros ingresados son cero."; break;
    case 1:
        cout << "El maximo negativo es " << man << ". No se ha ingresado ningun numero positivo."; break;
    case 2:
        cout << "El minimo positivo es " << mip << ". No se ha ingresado ningun numero negativo."; break;
    case 3:
        cout << "El maximo negativo es " << man << " y el minimo positivo es " << mip << "."; break;
    }
return 0;
}

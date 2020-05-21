#include<iostream>
using namespace std;

main() {
    int n1 , n2 , n3 , n4 , a , r , p;
    string f;
    cout << "Ingrese las cuatro notas del alumno separadas por un espacio." << endl;
    cin >> n1 >> n2 >> n3 >> n4; a=0; r=0; p=0;
    if(n1<4){r++;}
    else{
        if(n1<7){a++;}
        else{p++;}
    }
    if(n2<4){r++;}
    else{
        if(n2<7){a++;}
        else{p++;}
    }
    if(n3<4){r++;}
    else{
        if(n3<7){a++;}
        else{p++;}
    }
    if(n4<4){r++;}
    else{
        if(n4<7){a++;}
        else{p++;}
    }
    if(a>=3||p>=3){f="Rinde examen final.";}
    else{f="Recupera parciales.";}
    if(p==4){f="Promociona la materia.";}
    if(r==4){f="Recursa la materia.";}
    cout << f;

return 0;
}

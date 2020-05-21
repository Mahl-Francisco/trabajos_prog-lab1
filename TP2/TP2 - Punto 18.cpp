#include<iostream>
using namespace std;
#include<math.h>

main() {
    int c , p , f;
    cout << "Ingrese el consumo de kilovatios del cliente: "; cin >> c; cout; f=0;
    if(c<=100){p=c*10; f++;}
    else{c-=100; p=1000;}
    if(f==0){
        if(c<=100){p+=c*12; f++;}
        else{c-=100; p+=1200;}
    }
    if(f==0){p+=c*15;}
    cout << "El precio total a pagar por el consumo es de $" << p << ".";

return 0;
}

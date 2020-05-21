#include<iostream>
using namespace std;

main() {
    int n1 , n2 , me , ma;
    cout << "Ingrese dos numeros separados por un espacio y el programa mostrara los numeros desde el menor hasta el mayor: "; cin >> n1 >> n2;
    if(n1>n2){ma=n1; me=n2-1;} else{ma=n2; me=n1-1;}
    for(me; me!=ma; me){me++; cout << me << endl;}

return 0;
}

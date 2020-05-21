#include<iostream>
using namespace std;
#include<math.h>

main() {
    int n1 , n2 , dif;
    cout << "Ingrese dos numeros separados por un espacio." << endl;
    cin  >> n1 >> n2;
    if(n1>n2){
        dif=n1-n2;
    }
    else{
        dif=n2-n1;
    }
    cout << "La diferencia entre los numeros ingresados es de " << dif << ".";

return 0;
}

#include<iostream>
using namespace std;
#include<math.h>

main() {
    int n1 , n2;
    cout << "Ingrese dos numeros separados por un espacio." << endl;
    cin >> n1 >> n2;
    if (n1 % n2 == 0){
        cout << n1 << " es multiplo de " << n2 << ".";
    }
    else {
        cout << n1 << " no es multiplo de " << n2 << ".";
    }

return 0;
}

#include<iostream>
using namespace std;

main() {
    int n , m1 , m2 , c , i; c=0;
    cout << "Ingrese cinco numeros separados por un espacio. El programa mostrara los dos mayores." << endl;
    for(i=0;i<5;i++){
        cin >> n; if(c!=0){
            if(n>=m1){m2=m1; m1=n;} else{
                if(n>=m2){m2=n;}
            }
        }
        else{m1=m2=n; c++;}
    }
    cout << "Los dos numeros mayores son " << m1 << " y " << m2 << ".";

return 0;
}

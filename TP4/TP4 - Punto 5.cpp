#include<iostream>
using namespace std;
#include<math.h>

main() {
    int n1 , n2 , p , f , pp;
    cout<<"Ingrese dos numeros. El programa contara desde el menor hasta el mayor. "; cin>>n1>>n2;
    if(n1<n2){p=n1; f=n2;} else{p=n2; f=n1;} pp=p;
    while(p<=f){
        if(p!=pp){cout<<", ";}
        cout<<p; p++;
    }
    cout<<".";

return 0;
}

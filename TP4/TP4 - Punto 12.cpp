#include<iostream>
using namespace std;
#include<math.h>

main() {
    int n , i1 , ui , c=i1=ui=0;
    cout<<"Digite una lista de numeros. Para finalizarla, ingrese un cero. El programa informara el primer y el ultimo numero impar."<<endl;
    do{
        cin>>n; if(n%2!=0){
            if(c==0){i1=n;} else{ui=n;} c++;
        }
    }while(n!=0);
    if(c==0){cout<<"No se ha ingresado ningun numero impar.";}
    if(c==1){cout<<"El unico numero impar ingresado es "<<i1<<".";}
    if(c>=2&&i1==ui){cout<<"El primer y el ultimo numero impar ingresado es "<<i1<<".";} else{
    if(c>=2){cout<<"El primer numero impar es "<<i1<<" y el ultimo es "<<ui<<".";}}

return 0;
}

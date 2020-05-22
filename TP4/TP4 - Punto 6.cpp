#include<iostream>
using namespace std;
#include<math.h>

main() {
    int i , caso , n=0 , p=0;
    cout<<"Ingrese una lista de numeros. Para finalizarla, ingrese un cero. El programa informara cuantos negativos y positivos hay."<<endl;
    do{
        cin>>i; if(i!=0){if(i>0){p++;} else{n++;}}
    }while(i!=0);
    /*CASO0:SS||CASO1:PS||CASO2:SP||CASO3:PP*/
    if(p==1&&n==1){caso=0;}
    if(p!=1&&n==1){caso=1;}
    if(p==1&&n!=1){caso=2;}
    if(p!=1&&n!=1){caso=3;}
    /*FIN DE LOS CASOS*/
    switch(caso){
    case 0: cout<<"En la lista hay "<<p<<" numero positivo y "<<n<<" numero negativo."; break;
    case 1: cout<<"En la lista hay "<<p<<" numeros positivos y "<<n<<" numero negativo."; break;
    case 2: cout<<"En la lista hay "<<p<<" numero positivo y "<<n<<" numeros negativos."; break;
    case 3: cout<<"En la lista hay "<<p<<" numeros positivos y "<<n<<" numeros negativos."; break;
    }

return 0;
}

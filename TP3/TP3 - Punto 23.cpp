#include<iostream>
using namespace std;

main() {
    int precio , comp , n , pu , c , k1 , k2 , k3 , puk1 , puk2 , puk3 , sp1 , sp2 , sp3 , p1 , p2 , p3 , pk , cp , q1 , q2 , q3 , i; q1=q2=q3=sp1=sp2=sp3=puk1=puk2=puk3=0;
    for(i=0;i<10;i++){
        cout<<endl<<"Venta "<<i+1<<":"<<endl<<"Ingrese el numero del articulo: "; cin>>n;
        /*SICLO PRECIO U.*/
        for(precio=0;precio==0;precio){
        cout<<"Ingrese el precio unitario del articulo: $"; cin>>pu;
        if(pu<0){cout<<"El precio unitario no puede ser un valor negativo. Intentelo otra vez."<<endl;} else{precio=1;}
        }
        /*FIN. SICLO PRECIO U.*/
        /*SICLO DE SWITCH*/
        for(comp=0;comp==0;comp){
            cout<<"Ingrese la clase de articulo: "; cin>>c;
            switch(c){
            case 1:
                if(pu>puk1){puk1=pu; k1=n;}
                sp1+=pu; q1++; comp=1; break;
            case 2:
                if(pu>puk2){puk2=pu; k2=n;}
                sp2+=pu; q2++; comp=1; break;
            case 3:
                if(pu>puk3){puk3=pu; k3=n;}
                sp3+=pu; q3++; comp=1; break;
            default:
                cout<<"Clase de articulo no valida. Intentelo de nuevo."<<endl;
            }
        }
        /*FIN. SICLO DE SWITCH*/
    }
    if(q1==0){p1=0;} else{p1=sp1/q1;}
    if(q2==0){p2=0;} else{p2=sp2/q2;}
    if(q3==0){p3=0;} else{p3=sp3/q3;}
    if(p1>p2){pk=p1; cp=1;} else{pk=p2; cp=2;}
    if(p3>pk){cp=3;}
    /*MUESTRA FINAL*/
    cout<<endl<<"El articulo mas caro de la clase 1 es "<<k1<<", el de la clase 2 es "<<k2<<" y el de la clase 3 es "<<k3<<"."<<endl<<"La clase articulo con el mayor precio promedio es "<<cp<<".";

return 0;
}

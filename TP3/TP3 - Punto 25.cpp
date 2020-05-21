#include<iostream>
using namespace std;

main() {
    int n , s , q , mq1 , mq2 , mq3 , nq1 , nq2 , nq3 , qs1 , qs2 , qs3 , sm , qsm , i; nq1=nq2=nq3=qs1=qs2=qs3=mq1=mq2=mq3=0; /*EXTRAS*/ int conirm , caso;
    for(i=0;i<20;i++){
        /*N° OPERARIO 1-20*/
        for(conirm=0;conirm==0;){
        cout<<"Ingrese el numero del operario: "; cin>>n;
        if(n<1||n>20){cout<<"Numero de operario no valido."<<endl<<endl;} else{conirm=1;}
        /*FIN. N° OPERARIO*/
        }
        /*SECTOR 1-3*/
        for(conirm=0;conirm==0;){
            cout<<"Ingrese el sector del operario: "; cin>>s;
            if(s<1||s>3){cout<<"Ha ingresado un sector inexistente. Intentelo de nuevo."<<endl<<endl;} else{conirm=1;}
        /*FIN SECTOR*/
        }
        /*Q. DEFECTUOSAS*/
        for(conirm=0;conirm==0;){
            cout<<"Ingrese la cantidad de piezas defectuosas que produjo: "; cin>>q;
            if(s<0||q<0){cout<<"Ha ingresado un valor negativo. Intentelo de nuevo."<<endl<<endl;} else{conirm=1; cout<<endl;}
        /*FIN Q. DEFECTUOSAS*/
        }
    switch(s){
    case 1:
        if(q>mq1){mq1=q; nq1=n;} qs1+=q; break;
    case 2:
        if(q>mq2){mq2=q; nq2=n;} qs2+=q; break;
    case 3:
        if(q>mq3){mq3=q; nq3=n;} qs3+=q; break;
    }
    }
    if(qs1>qs2){sm=1;qsm=qs1;} else{sm=2; qsm=qs2;}
    if(qs3>qsm){sm=3;}
    /*SALIDA - CASO0:000 | CASO1:100 | CASO2:010 | CASO3:001 | CASO4:110 | CASO5:101 | CASO6:011 | CASO7:111*/
    if(nq1==0&&nq2==0&&nq3==0){caso=0;}
    if(nq1!=0&&nq2==0&&nq3==0){caso=1;}
    if(nq1==0&&nq2!=0&&nq3==0){caso=2;}
    if(nq1==0&&nq2==0&&nq3!=0){caso=3;}
    if(nq1!=0&&nq2!=0&&nq3==0){caso=4;}
    if(nq1!=0&&nq2==0&&nq3!=0){caso=5;}
    if(nq1==0&&nq2!=0&&nq3!=0){caso=6;}
    if(nq1!=0&&nq2!=0&&nq3!=0){caso=7;}

    switch(caso){
    case 0: cout<<"No han habido piezas defectuosas en ningun sector."; break;
    case 1: cout<<"El operario con mas piezas defectuosas en el sector 1 es el numero "<<nq1<<". No han habido piezas defectuosas en los demas sectores."; break;
    case 2: cout<<"El operario con mas piezas defectuosas en el sector 2 es el numero "<<nq2<<". No han habido piezas defectuosas en los demas sectores."; break;
    case 3: cout<<"El operario con mas piezas defectuosas en el sector 3 es el numero "<<nq3<<". No han habido piezas defectuosas en los demas sectores."; break;
    case 4: cout<<"En el sector 3 no han habido piezas defectuosas. Los operarios con mas piezas defectuosas en los sectores 1 y 2 respectivamente son los numero "<<nq1<<" y "<<nq2<<"."; break;
    case 5: cout<<"En el sector 2 no han habido piezas defectuosas. Los operarios con mas piezas defectuosas en los sectores 1 y 3 respectivamente son los numero "<<nq1<<" y "<<nq3<<"."; break;
    case 6: cout<<"En el sector 1 no han habido piezas defectuosas. Los operarios con mas piezas defectuosas en los sectores 2 y 3 respectivamente son los numero "<<nq2<<" y "<<nq3<<"."; break;
    case 7: cout<<"El operario con mas piezas defectuosas del sector 1 es el numero "<<nq1<<", en el sector 2 es el numero "<<nq2<<" y en el sector 3 es el numero "<<nq3<<".";
    }

return 0;
}

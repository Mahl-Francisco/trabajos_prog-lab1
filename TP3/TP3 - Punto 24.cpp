#include<iostream>
using namespace std;

main() {
    int n , s , a , ms , ems , aems , ap , r , ar , par , i; ar=r=ms=0; /*VARIABLES DE CICLOS*/ int sa;
    for(i=0;i<30;i++){
        cout<<endl<<"Ingrese el numero del empleado: "; cin>>n;
        /*CICLO SA.*/
        for(sa=0;sa==0;sa){
            cout<<"Ingrese el sueldo del empleado: "; cin>>s;
            cout<<"Ingrese los anos de antiguedad del empleado: "; cin>>a;
            if(s<0||a<0){cout<<"El sueldo y la antiguedad no pueden ser valores negativos. Intentelo otra vez."<<endl;} else{sa=1;}
        /*FIN. CICLO SA.*/
        }
        if(s>ms){ms=s; ems=n; aems=a;}
        if(s>20000){ar+=a; r++;}
    }
    if(r==0){par=0;} else{par=ar/r;}
    /*MUESTRA FINAL*/
    cout<<endl<<"El empleado con mayor salario es el numero "<<ems<<", su antiguedad es de "<<aems<<" anos."<<endl;
    if(r!=0){cout<<"El promedio de antiguedad de empleados con un salario mayor a los 20000 es de "<<par<<" anos.";} else{cout<<"No hay empleados con salario mayor a $20000.";}

return 0;
}

#include<iostream>
using namespace std;

int main(){
    int e , p , c , i=1 , cc , s; e=c=0;
    int cm , cq , q , v=0;

    cout<< "Ingrese el peso de cada encomienda. El programa las ordenara en camiones con una capacidad maxima de 200kg y lo informara."<<endl<< "NINGUNA encomienda puede superar los 200kg."<<endl<<endl;
    e++; cout<< "Peso encomienda "<<e<<": "; cin>>p;
    while(p>200){
        cout<<endl<< "ERROR: El peso de cada encomienda no debe superar los 200kg."<<endl<<"Desea omitir esta encomienda o reingresar su peso?"<<endl<< "Digite CERO (0) para omitir la encomienda o UNO (1) para reingresar su peso. ";
        cin>>s; cout<<endl; if(s==0){i++; e++; cout<< "Peso encomienda "<<e<<": "; cin>>p;} else{cout<<"Peso encomienda "<<e<<": "; cin>>p;}
    }
    while(p>0){
        c++; cc=0;
        while(p>0&&p+cc<=200){
            cc+=p; cout<<"Capacidad del camion al "<<cc*100/200<<"%."<<endl;
            if(cc!=200){
                e++; cout<<endl<< "Peso encomienda "<<e<<": "; cin>>p;
                while(p>200){
                    cout<<endl<< "ERROR: El peso de cada encomienda no debe superar los 200kg."<<endl<<"Desea omitir esta encomienda o reingresar su peso?"<<endl<< "Digite CERO (0) para omitir la encomienda o UNO (1) para reingresar su peso. ";
                    cin>>s; cout<<endl; if(s==0){i++; e++; cout<< "Peso encomienda "<<e<<": "; cin>>p;} else{cout<<"Peso encomienda "<<e<<": "; cin>>p;}
                }
                if(cc+p>200){cout<< "ERROR: El peso supera la maxima capacidad del camion. Esta encomienda no puede ser cargada."; e--; cc+=p;}
            } else{cc+=p;}
        }
        cout<<endl<<endl<< "CAMION "<<c<<": Transporta encomiendas";
        q=0; for(i;i<=e;i++){cout<<" - "<<i; q++;} cc-=p; cout<<endl<<"Peso total cargado: "<<cc<<"kg.";
        if(v==0||q>cq){cm=c; cq=q; v++;}
        cout<<endl<<endl; e++; cout<<endl<< "Peso encomienda "<<e<<": "; cin>>p;
        while(p>200){
            cout<<endl<< "ERROR: El peso de cada encomienda no debe superar los 200kg."<<endl<<"Desea omitir esta encomienda o reingresar su peso?"<<endl<< "Digite CERO (0) para omitir la encomienda o UNO (1) para reingresar su peso. ";
            cin>>s; cout<<endl; if(s==0){i++; e++; cout<< "Peso encomienda "<<e<<": "; cin>>p;} else{cout<<"Peso encomienda "<<e<<": "; cin>>p;}
        }
    }
    cout<<endl<< "El camion que mas encomiendas transporta es el camion "<<cm<< " con "<<cq<< " encomiendas.";

cout<<endl;
return 0;
}

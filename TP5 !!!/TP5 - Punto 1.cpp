#include<iostream>
using namespace std;

int main(){
    int n , b , d , p=0 , i;
    cout<<"Ingrese una lista de diez numeros. El programa informara cuantos son primos."<<endl;
    for(i=0;i<10;i++){
        cin>>n; d=0;
        if(n>0){b=2;
        while(b<n){
            if(n%b==0){d++;} b++;
        }}
        else{b=-2;
            while(b>n){
            if(n%b==0){d++;} b--;
        }}
        if(d==0&&n!=1&&n!=-1&&n!=0){p++;}
    }
    cout<<endl<<"Entre los numeros ingresados, hay "<<p<<" numeros primos.";
}

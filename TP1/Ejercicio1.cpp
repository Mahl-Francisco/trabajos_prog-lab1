#ifndef EJERCICIO1_H_INCLUDED
#define EJERCICIO1_H_INCLUDED
/*Ejercicio 1 del TP1*/
#include<iostream>
using namespace std;
#include<math.h>

#endif // EJERCICIO1_H_INCLUDED

int main (){
    int horas;
    int pagoph;
    int sueldo;
    cout << "Ingrese la cantidad de horas trabajadas y el valor de cada hora trabajada. ";
    cin >> horas;
    cin >> pagoph;
    sueldo = horas * pagoph;
    cout << "El sueldo total es " << sueldo;
    return 0;
}

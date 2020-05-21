#include<iostream>
using namespace std;

int main() {
int n1;
int n2;
int intercambio;
cout << "Ingrese dos numeros separados por un espacio.";
cin >> n1;
cin >> n2;
intercambio = n1;
n1 = n2;
n2 = intercambio;
cout << n1 << " y " << n2;

return 0;
}

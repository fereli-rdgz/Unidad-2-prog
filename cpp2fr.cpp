#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
int A,B;
float RES;
cout << "Hola! Este programa 1.7 Escribe el resultado de la expresion";
cout << "Por favor ingrese el valor de A: " << "\n";
cin >> A;
cout << "por favor ingrese el valor de B: " << "\n";
cin >> B;
RES=((A+B)*(A+B))/3.0;
printf ("\n El resultado de la expresion es %5.4f \n", RES);
cout << "EL RESULTADO DE LA EXPRESION ES " << RES << "\n";
return 0;
}


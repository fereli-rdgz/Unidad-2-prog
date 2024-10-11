#include "iostream"
#include <stdio.h>
using namespace std;
int main ()
{
	float Altura,Base;
	float SUPERFICIE, PERIMETRO;
	cout << "Hola! este programa 1.10 calcula la superficie y el perimetro de un rectangulo" << "\n";
	cout << "Por favor ingrese el valor de la base" << "\n";
	cin >> Base;
	cout << "Por favor ingrese el valor de la altura" << "\n";
	cin >> Altura;
	SUPERFICIE= Base*Altura;
	PERIMETRO= 2*(Base+Altura);
	printf ("\n La superficie del rectangulo es %5.2f \n", SUPERFICIE);
	printf ("\n El perimetro del rectangulo es %5.2f \n",PERIMETRO);
	return 0;
}

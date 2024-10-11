#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
	int MAT;
	float PRO,CAL1, CAL2,CAL3,CAL4,CAL5;
	cout << "Hola! Este programa1.8 Promedia calificaciones" << "\n";
	cout << "Por favor ingrese la matricula del alumno: " << "\n";
	cin >> MAT;
	cout << "por favor ingrese la primera calificacion: " <<"\n";
	cin >> CAL1;
	cout << "por favor ingrese la segunda calificacion: " <<"\n";
	cin >> CAL2;
	cout << "por favor ingrese la tercera calificacion: " <<"\n";
	cin >> CAL3;
	cout << "por favor ingrese la cuarta calificacion: " <<"\n";
	cin >> CAL4;
	cout << "por favor ingrese la quinta calificacion: " <<"\n";
	cin >> CAL5;
	PRO=(CAL1+CAL2+CAL3+CAL4+CAL5)/5.0;
	printf ("\v El promedio del alumno con matricula %d es %5.2f \n",MAT,PRO);
	cout << "\n El promedio del alumno con matricula " << MAT << " es "<<PRO <<"\n";

	return 0;
}

#include "iostream"
#include "iostream"
using namespace std;
int main()
{
	string NOMBRE;
	float PESOLIBRAS, LONGITUDENPIES;
	float PESOENKILOS, LONGITUDENMETROS;
	cout<< "Hola! Este programa calcula el peso en kilos y longitud en metros de algun dinosaurio"<<"\n";
	cout<< "Escribe el nombre del dinosaurio "<<"\n";
	cin >> NOMBRE;
	cout<<"Escribe el peso del dinosaurio en libras "<<"\n";
	cin >>PESOLIBRAS;
	cout<< "Escribe la longitud del dinosaurio en pies "<<"\n";
	cin>>LONGITUDENPIES;
	PESOENKILOS=PESOLIBRAS*1000;
	LONGITUDENMETROS=LONGITUDENPIES*0.3047;
	cout<<"El peso en kilos del dinosaurio "<<NOMBRE<< " es "<<PESOENKILOS<<" y la longitud en metros es "<<LONGITUDENMETROS<<"\n";
	return 0;
	}

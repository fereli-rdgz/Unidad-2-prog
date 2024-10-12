#include "iostream"
using namespace std;
int main()
{
	float GALONES,TOTAL;
	const float GALON=3.785, PRECIOLITRO=8.20;
	cout<< "Escribe la cantidad de galones comprados"<<"\n";
	cin>>GALONES;
	TOTAL=GALONES*GALON*PRECIOLITRO;
	cout<<"Hay que cobrar al cliente por "<<GALONES<<" galones "<<"debe pagar "<<TOTAL<<" pesos"<"\n";
	return 0;
}

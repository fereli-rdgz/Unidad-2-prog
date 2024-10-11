#include "iostream"
using namespace std;
int main()
{
float PRECIOPRODUCTO, DEVOLUCION;
float PAGO;
cout<< "Hola! Este programa calcula el cambio del pago de un articulo" << "\n";
cout<< " Escribe el costo del articulo "<<"\n";
cin >> PRECIOPRODUCTO;
cout << "Escribe cuanto fue el pago del articulo "<<"\n";
cin>>PAGO;
DEVOLUCION=PAGO-PRECIOPRODUCTO;
cout<< " El cambio del cliente es de "<<DEVOLUCION; " MXN";
return 0;
}

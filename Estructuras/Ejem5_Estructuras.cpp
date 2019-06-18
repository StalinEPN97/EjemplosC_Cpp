#include <cstdlib>
#include <iostream>
using namespace std;
struct Cliente
{
	char nombre[20];
	int numUnidades;
	float precio;
	char estado;
}cliente0 ={"Stalin Collahuazo", 11, 12.45,'M'};

int main()
{
	Cliente cliente1={"Javier Erazo", 12, 11.11, 'P'};
	Cliente cliente2 ={"Stalin Vargas", 9, 10.38, 'A'};
	Cliente cliente3, cliente4;
	Cliente listadocliente [100];
	cliente4 = cliente3 = cliente2 = cliente1;
	
	cout<< "Los datos del cliente0 es " << cliente0.nombre << "," <<cliente0.numUnidades << "," <<cliente0.precio <<"," << cliente0.estado <<endl;
	cout<< "Los datos del cliente1 es " << cliente1.nombre << "," <<cliente1.numUnidades << "," <<cliente1.precio <<"," << cliente1.estado <<endl;
	cout<< "Los datos del cliente2 es " << cliente2.nombre << "," <<cliente2.numUnidades << "," <<cliente2.precio <<"," << cliente2.estado <<endl;
	int unidades= cliente0.numUnidades;
	cout << "las unidades son " << unidades <<endl ;
	system ("pause");
	return 0;
}

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
	return 0;
}

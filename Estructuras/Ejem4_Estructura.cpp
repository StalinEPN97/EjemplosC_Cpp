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
	
	cout<< "sizeof(char)=" << sizeof(char) <<endl;
	cout<< "sizeof(int)=" << sizeof(int) <<endl;
	cout<< "sizeof(float)=" << sizeof(float) <<endl;
	cout<< "sizeof(Cliente)=" << sizeof(Cliente) <<endl;
	return 0;
}

#include <cstdlib>
#include <iostream>
#include <string.h>
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
	Cliente cliente3;
	Cliente listadocliente [100];
	//cliente4 = cliente3 = cliente2 = cliente1;
	
	cout<< "Los datos del cliente0 es " << cliente0.nombre << "," <<cliente0.numUnidades << "," <<cliente0.precio <<"," << cliente0.estado <<endl;
	cout<< "Los datos del cliente1 es " << cliente1.nombre << "," <<cliente1.numUnidades << "," <<cliente1.precio <<"," << cliente1.estado <<endl;
	cout<< "Los datos del cliente2 es " << cliente2.nombre << "," <<cliente2.numUnidades << "," <<cliente2.precio <<"," << cliente2.estado <<endl;
	int unidades= cliente0.numUnidades;
	cout << "las unidades son " << unidades <<endl ;
	strcpy(cliente3.nombre,"Dalys Navarrete");
	cliente3.numUnidades=15;
	cliente3.precio=6.78;
	cliente3.estado='P';
	cout<< "Los datos del cliente3 es " << cliente3.nombre << "," <<cliente3.numUnidades << "," <<cliente3.precio <<"," << cliente3.estado <<endl;
	
	//Asignacion con punteros y mallons
	Cliente *cliente4; //Cliente *cliente4 = (Cliente*)malloc(sizeof(Cliente));
	cliente4 = (Cliente*)malloc(sizeof(Cliente));
	strcpy(cliente4->nombre , "Kelly Espinosa"); //Para copia de cadenas
	cliente4->numUnidades =10;
	cliente4->precio = 14.56;
	cliente4->estado ='P'; //Estado (M=Moroso, A=Atrasado, P=Pagado)
	cout<< "Los datos del cliente4 es " << cliente4->nombre << "," <<cliente4->numUnidades << "," <<cliente4->precio <<"," << cliente4->estado <<endl;
	free (cliente4);
	//Asignacion con punteros y NEW(Lenguaje c++)
	Cliente *cliente5 = new Cliente;
	strcpy(cliente5->nombre , "David Rivadeneira");
	cliente5->numUnidades = 30;
	cliente5->precio = 8.40;
	cliente5->estado ='M';
	cout<< "Los datos del cliente5 es " << cliente5->nombre << "," <<cliente5->numUnidades << "," <<cliente5->precio <<"," << cliente5->estado <<endl;
	delete cliente5;
	
	Cliente cliente6;
	cout <<"Cliente: ";
	cin.getline(cliente6.nombre, 20);
	cout <<"Unidad: ";
	cin >> cliente6.numUnidades;
	cout <<"Precio: ";
	cin>> cliente6.precio;
	cout <<"Estado: ";
	cin>> cliente6.estado;
	cout<< "Los datos del cliente6 es " << cliente6.nombre << "," <<cliente6.numUnidades << "," <<cliente6.precio <<"," << cliente6.estado <<endl;
	
	system ("pause");
	return 0;
}

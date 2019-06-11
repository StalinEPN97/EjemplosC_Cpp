//INVERTIR CADENA
#include <iostream>
#include <string.h>
#define ESPACIO  ' '
using namespace std;

int main()
{
	int contador=0;
	//string cadena ="Escuela Politecnica Nacional"; //3 PALABRAS
	char cadena [] = "1726062720"; //3 PALABRAS
	//char cadena [] = " Escuela EPN"; //3 PALABRAS
	//int tamanio = cadena.lenght();
	int tamanio = sizeof (cadena);
	char cadena2 [tamanio]; 
	char *cadena3;//con puntero cn nueva direccion de memoria
	//arreglos para copiar
	//cadena3 = &cadena2;   accion dinamica de memoria
	strcpy (cadena2, cadena);
	
	cout << tamanio << endl;
	for(int i=0; i<=tamanio+1; i+=)
	{
		cout << cadena2 [i];
		
	}

	return 0;
}

//INVERTIR CADENA
#include <iostream>
#include <string.h>
#define ESPACIO  ' '
using namespace std;

int main4()
{
	int contador=0;
	//string cadena ="Escuela Politecnica Nacional"; //3 PALABRAS
	char cadena [] = "Escuela Politecnica Nacional"; //3 PALABRAS
	//char cadena [] = " Escuela EPN"; //3 PALABRAS
	//int tamanio = cadena.lenght();
	int tamanio = sizeof (cadena);
	char cadena2 [tamanio]; 
	char *cadena3;//con puntero cn nueva direccion de memoria
	//arreglos para copiar
	//cadena3 = &cadena2;   accion dinaica de memoria
	strcpy (cadena2, cadena);
	
	cout << tamanio << endl;
	for(int i=tamanio-1; i>=0; i--)
	{
		cout << cadena2 [i];
		
	}

	return 0;
}

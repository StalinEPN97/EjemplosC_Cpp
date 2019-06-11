//cuenta palabras con char []
// con string vale la funcion lenght
//en char se utiliza el sixeof(cadena);
#include <iostream>
#define ESPACIO  ' '
using namespace std;

int main()
{
	int contador=0;
	//string cadena ="Escuela Politecnica Nacional"; //3 PALABRAS
	//char cadena [] = "Escuela Politecnica Nacional"; //3 PALABRAS
	char cadena [] = " Escuela EPN"; //3 PALABRAS
	//int tamanio = cadena.lenght();
	int tamanio = sizeof (cadena);
	cout << tamanio << endl;
	
	for(int i=0; i<tamanio-1; i++)
	{
		{
			if( cadena [i] == ESPACIO && i ==0 )
			
			{
				continue;
			}
			if( 
				cadena [i] == ESPACIO &&
				cadena[i-1] != ESPACIO
					)
			{
				contador++;
			}
		}
	}
	cout <<"El total de palabras encontrados son: "<< ++contador;
	return 0;
}

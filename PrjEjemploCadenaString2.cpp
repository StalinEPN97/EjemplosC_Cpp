/* Programa que cuena las vocales de una cadena dada */

#include <iostream>
using namespace std;

int main1()
{
	{
	int contador=0;
	string cadena ="Escuela Politecnica Nacional"; //13 vocales
	for(int i=0; i<28; i++)
	{
		cout <<cadena[i] <<endl;
		if (cadena[i] == 'a'
		|| cadena[i] == 'e'
		|| cadena[i] == 'i'
		|| cadena[i] == 'o'
		|| cadena[i] == 'u'
		|| cadena[i] == 'A'
		|| cadena[i] == 'E'
		|| cadena[i] == 'I'
		|| cadena[i] == 'O'
		|| cadena[i] == 'U'
		)
		{
			contador = contador +1;
			//contador++;
			//contador+=1;
		}
		
	}
	cout << "el toral de vocales de la frase es: "<< contador ;
	//return 0;
	}
	{
	int contador=0;
	string cadena ="Escuela Politecnica Nacional"; //13 vocales
	for(int i=0; i<28; i++)
	{
			cout <<cadena[i] <<endl;
		if (cadena[i] == 'a'
		|| cadena[i] == 'e'
		|| cadena[i] == 'i'
		|| cadena[i] == 'o'
		|| cadena[i] == 'u'
		|| cadena[i] == 'A'
		|| cadena[i] == 'E'
		|| cadena[i] == 'I'
		|| cadena[i] == 'O'
		|| cadena[i] == 'U'
		)
		{
			contador = contador +1;
			//contador++;
			//contador+=1;
		}
		
	}
	cout << "el toral de vocales de la frase es: "<< contador ;
	return 0;
	}
}

#include <iostream>
#include <conio.h>
using namespace std;

int main (int argc, char** argv)
{
	int acumulador = 0;
	cout <<"programa que suma los 30 primeros numeros" <<endl;
	for (int i=0; i<30; i++)
	{
		if( i%5 == 0)
		{
			continue;
		}
		acumulador +=i;
	}
	cout <<"el valor sumado es:" <<acumulador;
	getch();
	return 0;
}

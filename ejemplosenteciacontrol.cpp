#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
	char letra ='\0'; //\0 es fin de cadena
	while (toupper(letra) != 'A')
	{
		printf("\nIngrese la letra A:");
		scanf ("%c",&letra);
		system("cls");
	}
	return 0;
}

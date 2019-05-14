/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdbool.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

int main() {
	int numero1;
	bool numero10;
	char numero2[MAX_STRLEN];
	char numero3[MAX_STRLEN];
	int numero4;
	float numero5;
	char numero6[MAX_STRLEN][4];
	char numero7[MAX_STRLEN];
	bool numero8;
	bool numero9;
	/* Definir NUMERO4 como entero; */
	/* Definir NUMERO6 como caracter; */
	numero1 = 5;
	numero2 = "5";
	numero3 = "5";
	numero4 = -4;
	numero5 = 3.14159;
	numero6[0] = "2";
	numero6[1] = "0";
	numero6[2] = "1";
	numero6[3] = "9";
	numero7 = "2019";
	numero8 = true;
	numero9 = false;
	numero10 = false;
	printf("%i\n",numero1);
	printf("%s\n",numero2);
	printf("%s\n",numero3);
	printf("%i\n",numero4);
	printf("%f\n",numero5);
	printf("%s%s%s%s\n",numero6[0],numero6[1],numero6[2],numero6[3]);
	printf("%s\n",numero7);
	printf("%i\n",numero8);
	printf("%i\n",numero9);
	printf("%i\n",numero10);
	return 0;
}


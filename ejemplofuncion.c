/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

// Declaraciones adelantadas de las funciones
int sumar2numeros(SIN_TIPO valor1, SIN_TIPO valor2);
int sumar3numeros(SIN_TIPO a, SIN_TIPO b, SIN_TIPO c);

int sumar2numeros(SIN_TIPO valor1, SIN_TIPO valor2) {
	int valorsumado;
	valorsumado = valor1+valor2;
	return valorsumado;
}

int sumar3numeros(SIN_TIPO a, SIN_TIPO b, SIN_TIPO c) {
	int e;
	e = a+b+c;
	return e;
}

/* Problema: Incremente en 1 un valor dato */
int main() {
	int a;
	int b;
	int c;
	int d;
	int e;
	printf("Escriba un numero:\n");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	d = a+b;
	printf("El resultado de los dos primeros terminos:%i\n",d);
	e = d+c;
	printf("La suma de los tres terminos es:%i\n",e);
	d = sumar2numeros(a,b);
	printf("El resultado (funcion) es:%i\n",d);
	e = sumar3numeros(a,b,c);
	printf("El resultado (funcion) es:%i\n",e);
	return 0;
}


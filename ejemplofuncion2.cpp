

#include<iostream>
using namespace std;


void saludar(string valor1);



int sumar2numeros(int valor1, int valor2);
int sumar3numeros(int a, int b, int c);

int sumar2numeros(int valor1, int valor2) {
	int valorsumado;
	valorsumado = valor1+valor2;
	return valorsumado;
}

int sumar3numeros(int a, int b, int c) {
	int e;
	e = a+b+c;
	return e;
}

// Problema: Incremente en 1 un valor dato
int main() {
	int a;
	int b;
	int c;
	int d;
	int e;
	cout << "Escriba un numero:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	d = a+b;
	cout << "El resultado de los dos primeros terminos:" << d << endl;
	e = d+c;
	cout << "La suma de los tres terminos es:" << e << endl;
	d = sumar2numeros(a,b);
	cout << "El resultado (funcion) es:" << d << endl;
	e = sumar3numeros(a,b,c);
	cout << "El resultado (funcion) es:" << e << endl;
	return 0;
}


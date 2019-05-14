// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

// Declaraciones adelantadas de las funciones
void saludar(int valor1);
int sumar2numeros(int valor1, int valor2);
int sumar3numeros(int a, int b, int c);

void saludar(int valor1) {
	cout << "Hola" << valor1 << endl;
}

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
	string nombre;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	saludar(nombre);
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


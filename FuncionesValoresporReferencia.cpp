#include<iostream>
#include<locale.h>
using namespace std;


void Saludar();
float CalcularDoble(float num);
void Triplicar(float &num);

void Saludar() {
	cout << "Hola mundo!" << endl;
}

float CalcularDoble(float num) {
	float res;
	res = num*2;
	return res;
}

void Triplicar(float &num) {
	num = num*3;
}

int main() 

{
	setlocale(LC_ALL,"");
	float x;
	cout << "Llamada a la funcion Saludar:" << endl;
	Saludar();
	cout << "Ingrese un valor num�rico para x:" << endl;
	cin >> x;
	cout << "Llamada a la funci�n CalcularDoble (pasaje por valor)" << endl;
	cout << "El doble de " << x << " es " << CalcularDoble(x) << endl;
	cout << "El valor original de x es " << x << endl;
	cout << "Llamada a la funci�n Triplicar (pasaje por referencia)" << endl;
	Triplicar(x);
	cout << "El nuevo valor de x es " << x << endl;
	return 0;
}


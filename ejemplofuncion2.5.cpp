

#include<iostream>
using namespace std;

void saludar();
float calculardoble(float num);
void triplicar(float &num);


void saludar() {
	cout << "Hola mundo!" << endl;
}


float calculardoble(float num) {
	float res;

	res = num*2;
	return res;
}


void triplicar(float &num) {
	
	num = num*3;
}


int main() {
	float x;
	system(A6);
	cout << "Llamada a la funcion Saludar:" << endl;

	SALUDAR();
	cout << "Ingrese un valor num�rico para x:" << endl;
	cin >> x;
	cout << "Llamada a la funci�n CalcularDoble (pasaje por valor)" << endl;
	cout << "El doble de " << x << " es " << calculardoble(x) << endl;
	cout << "El valor original de x es " << x << endl;
	cout << "Llamada a la funci�n Triplicar (pasaje por referencia)" << endl;
	triplicar(x);
	cout << "El nuevo valor de x es " << x << endl;
	return 0;
}


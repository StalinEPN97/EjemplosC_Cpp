#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float b;
	float c;
	int operacion;
	cout << "1: cubo" << endl;
	cout << "2: raiz cubica" << endl;
	cin >> operacion;
	switch (operacion) {
	case 1:
		cout << "Inserte el valor para obtener el cubo" << endl;
		cin >> a;
		cout << "Escoga:" << endl;
		b = pow (a,3);
		cout << "El cubo del numero es:" << b << endl;
		break;
	case 2:
		cout << "Inserte el valor para obtener su raiz" << endl;
		cin >> a;
		cout << "Escoga:" << endl;
		b = sqrtf(a);
		cout << "La raiz cuadrada es:" << b << endl;
		break;
	}
	return 0;
}


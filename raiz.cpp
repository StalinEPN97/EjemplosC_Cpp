
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float b;
	float c;
	int m;
	int n;
	cout << "1: raiz cuadrada" << endl;
	cout << "2: raiz cubica" << endl;
	switch (m,n) {
	case 1:
		cout << "Inserte el valor para obtener su raiz" << endl;
		cin >> a;
		cout << "Escoga:" << endl;
		b = sqrtf(a);
		cout << "La raiz cuadrada es:" << b << endl;
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


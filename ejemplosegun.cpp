
#include<iostream>
using namespace std;


int main() {
	int datoescogido;
	cout << "Ingrese una opcion del 1 al 3" << endl;
	cin >> datoescogido;
	switch (datoescogido) {
	case 1:
		cout << "Escogio opcion 1" << endl;
		break;
	case 2:
		cout << "Escogio opcion 2" << endl;
		break;
	case 3:
		cout << "Escogio opcion 3" << endl;
		break;
	default:
		cout << "Opcion invalida" << endl;
	}
	return 0;
}


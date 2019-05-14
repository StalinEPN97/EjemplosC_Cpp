

#include<iostream>
#include<cstdlib>
using namespace std;


int main() {
	int intentos;
	int num_ingresado;
	int num_secreto;
	intentos = 4;
	num_secreto = (rand()%10)+1;
	cout << "El numero aleatorio generado es:" << num_secreto << endl;
	cout << "tiene" << intentos << " intentos, Adivine el numero (de 1 a 10):" << endl;
	cout << "Adivine el numero (de 1 a 10):" << endl;
	cin >> num_ingresado;
	while (num_secreto!=num_ingresado && intentos>1) {
		if (num_secreto>num_ingresado) {
			cout << "Muy bajo" << endl;
		} else {
			cout << "Muy alto" << endl;
		}
		intentos = intentos-1;
		cout << "Le quedan " << intentos << " intentos:" << endl;
		cin >> num_ingresado;
	}
	if (num_secreto==num_ingresado) {
		cout << "Exacto! Usted adivino en " << intentos << " intentos." << endl;
	} else {
		cout << "El numero era: " << num_secreto << endl;
	}
	return 0;
}


#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int operacion, a, b, c, d;
	cout <<"OPERACIONES"<<endl;
	cout <<"Escoga una opcion: "<<endl ;
	cout <<"1: Sumar"<<endl ;
	cout <<"2: Promedio"<<endl ;
	cout <<"3: Producto"<<endl ;
	cout <<"4: Numero mayor"<<endl ;
	cout <<"5: Numero menor"<<endl ;
	cin >> operacion;
	switch (operacion)
	{
	case 1:
		cout << "Inserte los valores para la suma" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cout << "Escoga:" << endl;
		d = a+b+c;
		cout << "La suma de los tres numeros es:" << d << endl;
		break;
	case 2:
		cout << "Inserte los valores:" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cout << "Escoga:" << endl;
		d = (a+b+c)/3;
		cout << "El promedio es:" << d << endl;
		break;
	case 3:
		cout << "Inserte los valores" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cout << "Escoga:" << endl;
		d = a*b*c;
		cout << "E es:" << d << endl;
		break;
	case 4:
		cout << "Inserte los valores" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cout << "Escoga:" << endl;
		d=a+b;
		cout << "El mayor es:" << d << endl;
		break;
	case 5:
		cout << "Inserte los valores" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cout << "Escoga:" << endl;
		d = a+b;
		cout << "El menor es:" << d << endl;
		break;
	default:
		cout << "Opcion invalida" << endl;	
		
		}
}

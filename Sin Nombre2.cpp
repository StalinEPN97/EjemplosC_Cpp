#include<iostream>
using namespace std;

int main()
{
	int valor, a, b, c;
	cout <<"OPERACIONES"<<endl;
	cout <<"Escoga una opcion: "<<endl;
	cout <<"1: Sumar"<<endl ;
	cout <<"2: p"<<endl ;
	cout <<"3: Multiplicar"<<endl ;
	cin>>valor;
	switch(valor) 
	{
		case 1:
			cout <<"Ingrese 2 valores a sumar:"<<endl;
			cin >> a >>b;
			c=a + b;
			cout <<"la suma es:"<< c << endl;
			break;
		case 2:
			cout <<"Ingrese 2 valores a restar:"<<endl;
			cin >> a >>b;
			c=a - b;
			cout <<"la resta es:"<< c << endl;
			break;
		case 3:
			cout <<"Ingrese 2 valores a multiplicar:"<<endl;
			cin >> a >>b;
			c=a * b;
			cout <<"la multiplicacion es:"<< c << endl;
			break;
		
			default:
			break;
	}
	
	
return 0;

}

#include<iostream>
using namespace std;

int main()
{
	char valor, a, b, c;
	cout <<"-----CALCULADORA BASICA-----"<<endl;
	cout <<"Escoga una opcion: "<<endl;
	cout <<"a: Sumar"<<endl ;
	cout <<"b: Restar"<<endl ;
	cout <<"c: Multiplicar"<<endl ;
	cin>>valor;
	cout <<valor<<endl;
	switch(valor) 
	{
		case 'a':
			cout <<"Ingrese 2 valores a sumar:"<<endl;
			cin >> a >>b;
			c=a + b;
			cout <<"la suma es:"<< c << endl;
			break;
		case 'b':
			cout <<"Ingrese 2 valores a restar:"<<endl;
			cin >> a >>b;
			c=a - b;
			cout <<"la resta es:"<< c << endl;
			break;
		case 'c':
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

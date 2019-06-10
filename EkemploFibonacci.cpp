#include<iostream>

using namespace std;

int Fibonacci(int n);
int FibonacciIterativo (int n);
int main()
{
	int numero, resultado;
	cout<<"Programa que calcula la serie de fibonacci de un numero dado" << endl;
	cout<<"Ingrese un valor:"<< endl;
	cin>> numero;
	resultado = Fibonacci(numero);
	for(int i=0; i< numero; i++)
	cout<< "El fibonacci recursivo "<< i <<" es "<< Fibonacci(i)<<endl;
	cout<<endl;
	cout<< "El fibonacci iterativo "<< i <<" es "<< Fibonacci(i)<<endl;
	
	return 0;
}
int Fibonacci(int n)
{
	if ( n == 0)
		return 0;
	if (n ==1)
		return 1;
	return Fibonacci (n-2) + Fibonacci (n-1);
	
}

void FibonacciIterativo (int n)
{
	int i;
	long  a,b,c;
	b = c = 1;
	printf ("0 1 1");
	for(i=1; i<n-2, i++)
	{
		a = b + c;
		printff("%ld", a);
		c= b;
		b= a;
	}
}


#include<iostream>

using namespace std;

int FactorialIterativa(int n);
int FactorialRecursivo(int n);

int main()
{
	int n, fact;
	cout<< "Programar que calcule el factorial de un numero entre 2 y 10.\n" <<endl;
	do
	{
		cout<< "Ingrese un valor" <<endl;
		cin>>n;
	}
	while (n<2 || n>10);
	fact = FactorialIterativa(n);
	cout << "De forma iterativa de "<<n <<"! es ="<< fact ;
	cout<<endl;
	fact = FactorialRecursivo(n);
	cout << "De forma recursivo de "<<n <<"! es ="<< fact ;
	return 0;

}
//Factorila Iterativo
int FactorialIterativa (int n)
{
	int fact, m;
	for(m=n,fact=1; n>1; n--)
	{	
		fact = fact * n;
	}
	return fact, c;
}
int FactorialRecursivo
{
	return ( n<=1)? 1: n * Factorial()
}



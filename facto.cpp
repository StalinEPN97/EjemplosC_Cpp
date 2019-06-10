#include <iostream>
using namespace std;


int FactorialRecursivo (int n=4)
{
	if(n<=1)
		return 1;
	return n * FactorialRecursivo(n-1);
}

int FactorialRecursivo2 (int r=10)
{
	if(r<=1)
		return 1;
	return r * FactorialRecursivo(r-1);
	
int FactorialRecursivo3 (int m=40)
{
	if(m<=1)
		return 1;
	return m * FactorialRecursivo(m-1);

int Combinar ()
{
	int n=4;
	int r=10;
	int resultado;
	
	resultado= FactorialRecursivo (int n=4)
	return resultado;
}

int main()

{
	cout << Combinar();
}

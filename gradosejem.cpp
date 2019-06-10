#include <iostream>
using namespace std;

int main ()
{
	int i=0;

	cout<<"La temperatura de celsius a farenheit es:" << endl;
	for(int i=0; i<=100; i+=10)
	{
		cout << i << " a Fahrenheit es " << 32 +((9*i)/5) << endl ;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Ingrese el numero: ";
    cin >> numero;
    if (numero%2 == 0)
    {
	     cout << "El numero ingresado es PAR";
	}
	else
	{
		cout <<"El numero ingresado es IMPAR";
	}
	// expresion 1 ? expresion 2:expresion3;
	
	cout<< "El numero ingresado es"<< (numero%2 == 0 )? "PAR": "IMPAR";	
	cout << endl;
	
		cout << (numero%2 == 0 )? "El numero ingresado es PAR": "El numero ingresado es IMPAR";	
	cout << endl;
	
    return 0;
    
}

#include <iostream>
using namespace std;

int numero ()

{
	int resultado;
	int aux;
	for(int a=1 ; a<25 ; a+=2)
	{
	resultado= resultado + a;
	return resultado;
	}

	
}

int main ()
{
	for (int i=0;i<5;i++)
		for( int j=0;j<5;j++)
		{ 
            if ( j>i) 
            { 
            cout << 1 ;    
            } 
            else 
            { 
            cout << numero; 
            } 
        } 
        cout<<endl;
	
}



#include <iostream>
using namespace std;

int impares1 ();
int impares ()
{
	int x=1;
	int resultado;
	while ( x <= 100) 
        { 
            resultado=resultado+x; 
            x+=2; 
        } 
        return resultado;
}
 int impares1 ()
 {
 	int resultado2=0;
 	 for(int i=1; i<; i+=2)
 		{
 			resultado2=resultado2+i;
		}
		return resultado2;
 	 
 }

int main()
{
	cout<<"La suma de los impares es "<<  impares () << endl;
	cout<<"La suma de los impares es "<<  impares1 () << endl;
}

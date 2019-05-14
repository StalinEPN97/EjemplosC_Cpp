#include<iostream>
#include<stdio.h>
#include<float.h>

using namespace std;

int main()
{
	cout<< sizeof (int)<<endl;
cout<< sizeof (long)<<endl;
cout<< sizeof (float)<<endl;
cout<< sizeof (double)<<endl;
cout<< FLT_MIN <<endl;

cout<< "Mi mama dice \"que te levantes\""<< endl;
//cout<<"Hola"<<endl <<"mundo"<<endl;
//cout<<"Hola \n mundo";
printf("%20.6s","Hola mundo");


printf("El color es: %s, el numero es: %d, el numero largo es: %.2f","rojo",123,456.789);

return 0; 
		
}

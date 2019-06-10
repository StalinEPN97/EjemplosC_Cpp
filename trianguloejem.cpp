#include <iostream>
using namespace std;

void PrimerTriangulo();
void SegundoTriangulo ();

const char a='*';
const char b=' ';
int main()
{
	PrimerTriangulo ();
	return 0;
}

void PrimerTriangulo()

{
	//i=filas y j=columanas
	for(int i=0;i<10;i++)
	{
		for (int j=0;j<10; j++)
		{
			if ( j> i)
			{
			cout <<b;	
			}
			else
			{
			cout <<a;
			}
		}
		cout<<endl;
	}
}



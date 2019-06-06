//Ejemplo Pso de parametros por referencia en arreglos
#include <iostream>
#define TAM_MAX 4
using namespace std;
void ImprimirValores(int [], int);
int main()
{
	int valores [TAM_MAX] = {1,2,3,4};
/*	int valores []= {1,2,3,4,5};

	int valores [4];
	valores [0] =1;
	valores [1] =2;
	valores [2] =3;
	valores [3] =4;
*/
	ImprimirValores(valores,TAM_MAX);
	return 0;

}

void ImprimirValores(int a[], int tamanio )
{
	cout << sizeof(char)<< endl;
	cout << sizeof(int)<< endl;
	cout << sizeof(a[0])<< endl;
	cout << sizeof(a)<< endl;
	cout << sizeof(a)/sizeof(a[0]) << endl;
	for(int i=0; i<sizeof(a)/sizeof(a[0]);i++)
	{
		cout<< a[i];
	}
}

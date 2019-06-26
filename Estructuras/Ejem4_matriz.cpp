#include <iostream>

using namespace std;

int main()
{
	double matriz_1 =0, matriz_2=0,matriz_3=0;
	double matriz [3][3]={{2.9,5.6,7.98},{3.7,1.5,4.2},{8.2,9.8,6.45}};
	for (int i=0; i<3; i++)
	{
		if(matriz_1 < matriz[0][i])
			{
				matriz_1=matriz[0][i];
			}
		if(matriz_2 < matriz[1][i])
			{
				matriz_2=matriz[1][i];
			}
		if(matriz_3 < matriz[2][i])
			{
				matriz_3=matriz[2][i];
			}
	}
	double max=0;
	double matrices[3]={matriz_1,matriz_2,matriz_3};
	
	for (int i=0; i<3; i++)
	{
		if(max < matrices[i])
			{
			max=matrices[i];
			}
	}
	cout <<"El numero mayor es :" << max;
	
	
	return 0;
}

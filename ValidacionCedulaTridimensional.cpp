//aRCHIVO DE VALIDACION DE CEDULA CON ARREGLOS BIDIMENSIONALES (MATRIZ O TABLA)
#include <iostream>
using namespace std;

int main()
{
	string cedula = "1726062720";//hardcode
	//string cedula = "1102182654";//hardcode
	cout<< "Cedula " <<cedula <<endl;
	//int matriz [3][9]={{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18},{19,20,21,22,23,24,25,26,27}};
	int matriz [3][9]={0};
	int filas=3, columnas=9, sumatotal=0;
	for (int c= 0;c<columnas;c++)
	{
		if(c%2==0)
			matriz[0][c]=2;
		else
			matriz[0][c]=1;
		matriz[1][c] = cedula[c]-'0';
		matriz[2][c] = matriz[0][c]*matriz[1][c];
		if(matriz[2][c] >=10) // es mayor o igual
			matriz[2][c] -=9;
		//matriz[2][c] = matriz[0][c]*matriz[1][c]>10?matriz[0][c]*matriz[1][c] -9:matriz[0][c]*matriz[1][c]);
		sumatotal += matriz[2][c];
	}
		
	for(int i=0; i<filas ;i++)
	{
		for(int j =0; j<columnas ;j++)
		{
			//matriz[i][j]=0;
			cout << matriz[i][j] << "\t";
		}
		cout<<endl;
	}
	cout <<"La suma total es: "<< sumatotal <<endl ;
	//int digitoverificador =sumatotal*9 %10; 
	int digitoverificador =10 - sumatotal %10;  
	if(digitoverificador ==10)
			digitoverificador=0;
	cout<<"El digito verificador es " << digitoverificador << endl;
	if(digitoverificador == (int) cedula[9]-48)
		cout <<"Cedula Valida !!" <<endl;
	else
		cout <<"Cedula INVALIDA !!" <<endl;
	return 0;
}


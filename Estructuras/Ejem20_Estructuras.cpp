#include <iostream>
#include <math.h>

using namespace std;

struct Cliente
{
	int codigo;
	char nombre[30];
	float saldo;
	
};

void ProcesarCliente(Cliente Usuario[])
{
	char limpiarBuffer[4];
	for (int i=0 ;i<4; i++)
	{
		cout<<"Ingrese el codigo: ";
		cin >> Usuario[i].codigo;
		cin.sync();
		cout<<"Ingrese el nombre del Cliente " << i <<": ";
		cin.getline(Usuario[i].nombre,30);
		cin.sync();
		cout<<"Ingrese el saldo: ";
		cin >>Usuario[i].saldo;
		cin.sync();
		cin.getline(limpiarBuffer,4);
	}
}
void OpcionesSaldo(Cliente miUsuario[])
{
	for(int i=0; i<4; i++)
	{
	
		 
		if(miUsuario[i].saldo>1.00 && miUsuario[i].saldo <10.00)
		{
			miUsuario[i].saldo=miUsuario[i].saldo-1;
		}
		if(miUsuario[i].saldo>=10.00 && miUsuario[i].saldo<100.00)
		{
			miUsuario[i].saldo=miUsuario[i].saldo*2;
		}
		if( miUsuario[i].saldo>100.00)
		{
			miUsuario[i].saldo=pow(miUsuario[i].saldo,3);
		}
	}
}

void MostrarDatos(Cliente cliente[])
{
	ProcesarCliente(cliente);
	cout <<"Los datos ingresados son:" << endl;
	for(int i=0; i<4; i++)
	{
		cout << "Codigo: " <<cliente[i].codigo <<", Nombre: " <<cliente[i].nombre <<", Saldo: " <<cliente[i].saldo <<endl;
	}

}

int main()
{
	Cliente *cliente= new Cliente[100];
	ProcesarCliente(cliente);
	OpcionesSaldo(cliente);
	MostrarDatos(cliente);
	
	return 0;
}

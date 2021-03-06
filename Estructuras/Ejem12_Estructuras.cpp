#include <iostream>
#include <string.h>

using namespace std;


struct Cliente
{
	char nombre[30];
	int unidad;
	double precio;
	char estado;	
};

Cliente* LeerDatosCliente(Cliente miCliente[]);
void MostrarDatosCliente (Cliente cliente[]);

int main()
{
	
	//Cliente cliente [100];
	Cliente *cliente= new Cliente[100];
	Cliente *cliente2=LeerDatosCliente(cliente);
	strcpy(cliente[0].nombre, "ABC");
	//LeerDatosCliente(cliente); // Se vuelve llamar datos
	MostrarDatosCliente(cliente);
	
	return 0;
}

//Paso de parametros por valor
Cliente* LeerDatosCliente(Cliente miCliente[])
{
	char limpiarBuffer[4];
	for (int i=0 ;i<3; i++)
	{
		cout<<"Ingrese el nombre del Cliente " << i <<": ";
		cin.getline(miCliente[i].nombre,30);
		cout<<"Ingrese las unidades: ";
		cin >>miCliente[i].unidad;
		cout<<"Ingrese el precio: ";
		cin >>miCliente[i].precio;
		cout<<"Ingrese el estado (M=Moroso, A=Atrasado, P=Pagado): ";
		cin >>miCliente[i].estado; 
		cin.getline(limpiarBuffer,4);
	}
	return miCliente;
}

void MostrarDatosCliente (Cliente cliente[])
//void MostrarDatosCliente ()
{
	//Cliente *cliente = new Cliente[100];
	cout <<"Los datos ingresados son:" << endl;
	for(int i=0; i<3; i++)
	{
		cout << "Cliente: " <<cliente[i].nombre <<", Unidad: " <<cliente[i].unidad <<", Precio: " <<cliente[i].precio <<", Estado: " <<cliente[i].estado <<endl;
	}
}

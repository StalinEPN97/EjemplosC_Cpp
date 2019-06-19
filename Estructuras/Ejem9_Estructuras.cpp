#include <iostream>

using namespace std;

struct Cliente
{
	char nombre[30];
	int unidad;
	double precio;
	char estado;	
};
//Paso de parametros por valor
void ProcesarCliente(Cliente &miCliente)
{
	cout<<"Ingrese el nombre del Cliente: ";
	cin.getline(miCliente.nombre,30);
	cout<<"Ingrese las unidades: ";
	cin >>miCliente.unidad;
	cout<<"Ingrese el precio ";
	cin >>miCliente.precio;
	cout<<"Ingrese el estado (M=Moroso, A=Atrasado, P=Pagado): ";
	cin >>miCliente.estado; 
}

int main()
{
	Cliente cliente;
	ProcesarCliente(cliente);
	cout <<"Los datos ingresados son:" << endl;
	cout << "Cliente: " << cliente.nombre <<", Unidad: " << cliente.unidad <<", Precio: " << cliente.precio <<", Estado: " <<cliente.estado;
	
	return 0;
}

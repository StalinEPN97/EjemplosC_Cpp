#include <iostream>
#include <string.h>
#include<stdlib.h>
#include<conio.h>
//#include <cstdlib>
using namespace std;

int main (int argc, char** argv)
{
	if(argc < 2)
	{
		cerr <<"Enviar cedula por lineas de comandos desde " << argv[0] <<endl;
		return 1;
	}

	{
		cout <<"REPUBLICA DEL ECUADOR" << endl;
		cout <<endl;
		string cedula = argv [1];
		int* digitos = new int [ cedula.size()+1 ];
		cout << "Cedula:  " << cedula << endl;
		int a= cedula.size();
		if(a ==10)
		{
			string valor3 = cedula.substr(2,1);
			int b=atoi(valor3.c_str());
				if(b>=0 && b<=5)
				{
					string valor4 = cedula.substr(0,2);
					int c=atoi(valor4.c_str());
					if(c>0 && c<=24 )
					{
						int sumapares=0;
						int sumaimpares=0;
						int sumatotal;
						string valor10 =cedula.substr(9,1);
						int num10= atoi(valor10.c_str());
						for(int i=0; i<9; i+=2)
						{
						digitos [i] =(int) cedula [i]-48;
						digitos [i]= digitos [i]*2;
						if(digitos[i]>=10)
							digitos[i]-=9;
						sumapares += digitos [i];
						}
						int respar= sumapares;
						for(int j=1 ; j<9; j+=2)
						{
						digitos [j] =(int) cedula [j]-48;	
						sumaimpares += digitos [j];	
						}
						int resimpar= sumaimpares;
						sumatotal= respar+resimpar;
						int digito_10 = 10 -sumatotal % 10;
						if(digito_10==10)
							digito_10=0;
						if(digito_10==num10)
						{
							cout <<endl;
							cout <<"La cedula es valida";	
						}
						else
						{
							cout <<"La cedula es INVALIDA";
						}
					}
					else
					{
						cout << "La cedula es invalida - El codigo provincial incorrecto"<<endl;
					}
				}
			
				else
				{
					cout << endl;
					cout <<"El numero de cedula digitada no es valida" <<endl;
				}
		}
		else
		{
			cout << endl;
			cout <<"El numero de cedula digitada no es valida - La cedula cuenta con 10 digitos"<<endl;
		}
		cout <<endl;
	}
	return 0;
}

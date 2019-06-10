#include<iostream>
using namespace std;

int main()
{
	float temperatura;
	bool valor;
	cout<<"Inserte un valor";
	cin>> temperatura;
	valor=(temperatura>33 && temperatura<211);
	cout<<valor;
	return 0;
}

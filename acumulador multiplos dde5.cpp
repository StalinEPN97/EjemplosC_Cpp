#include <iostream>
using namespace std;

int main ()
{
	int acum=0;
	for (int i=0; i<30; i++)
	{
		if(i%5 ==0) //saltar
		{
			continue;
		}
		acum +=i;
	
	}
	cout <<"la suma es:" << acum << endl;
}

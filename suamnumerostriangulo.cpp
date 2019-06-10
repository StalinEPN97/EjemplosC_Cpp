#include <iostream>
using namespace std;



int main()
{
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
			if(j<i)
				{
					cout << 1 ;
				}
				else
				{
					for(int b=0; b<25; b+=2)
                 	cout<< b ;
				}
			cout<<endl;
		}
}


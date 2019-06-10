#include <iostream>
using namespace std;

int main ()
{
	for (int j=0; j<20 ; j++)
	{
		for (int i=0; i<20; i++)
		{
				if (i+j>20)
			{
				cout <<"#";
			}
			else
			{
				cout <<" ";
			}
		}
		cout <<endl;
	}
	for (int j=0; j<20 ; j++)
	{
		for (int i=0; i<20; i++)
		{
				if (i+j==20)
			{
				cout <<"#";
			}
			else
			{
				cout <<"#";
			}
		}
		cout <<endl;
	}
	for (int j=0; j<20 ; j++)
	{
		for (int i=0; i<20; i++)
		{
				if (i+j<20)
			{
				cout <<"#";
			}
			else
			{
				cout <<" ";
			}
		}
		cout <<endl;
	}
}

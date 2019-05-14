#include<iostream>
#include<iomanip>
using namespace std;


int main() 
{
    int a;
    int i;
    cout << "Ingrese su numero" << endl;
    cin >> a;
    for (i=1; i<=12; i++) 
    {
        cout << a << " x " << i << " = " << a*i << endl;
    }
    return 0;
}

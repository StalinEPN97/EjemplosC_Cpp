#include <cstdlib>
#include <iostream>
#include <iomanip>
//#define maxf 1 //TODO: Pendiente volver a poner el valor 2
//#define maxc 5 //TODO: Pendiente 2
using namespace std;
int main(int argc, char *argv[])
{
	const int maxf=2;
	const int maxc=5;
    float a[maxf] [maxc];
    int f, c;
    // escrir el array
    for(f = 0; f < maxf; f++)
        for(c = 0; c < maxc; c++)
            cin >> a[f][c];
    // escribir el array
    for(f = 0; f < maxf; f++)
    {
        for(c = 0; c < maxc; c++)
        {
            cout <<setw(10) << fixed << setprecision(2) << a[f] [c] ;
        }
        cout << endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}

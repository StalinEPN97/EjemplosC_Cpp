#include<iostream> 

using namespace std; 

  

int Triangulo(double a, double b, double c) 
{ 
    if(a >0 && b >0 && c >0) 
    { 
        if(a < b + c) 
        { 
            cout <<"Si es un triangulo" << endl; 
        } 
        else 
        { 
            cout <<"Si es un triangulo" << endl; 
        } 
    } 
    else 
    { 
        cout <<"No puede ser un triangulo" << endl;  
    } 
    return 0; 
} 

int main() 
{ 
    double a, b, c; 
    cout <<"Ingrese los valores de los lados para un triangulo" <<endl; 
    cin >> a; 
    cin >> b; 
    cin >> c; 
    Triangulo(a, b, c); 
    return 0; 
} 

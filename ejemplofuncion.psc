Funcion saludar( valor1 )
	Escribir "Hola", valor1;
Fin Funcion

Funcion valorsumado <- sumar2numeros ( valor1, valor2)
	Definir valorsumado Como Entero;
	
	valorsumado = valor1 + valor2;
Fin Funcion
Funcion e <- sumar3numeros ( a, b, c)
	Definir e Como Entero;
	
	e = a+ b + c;
Fin Funcion


//Problema: Incremente en 1 un valor dato
Algoritmo ejemplo_funcion
	
	Definir a,b,c,d,e Como Entero;
	Definir	 nombre como cadena;
	Escribir "Ingrese su nombre: ";
	Leer nombre;
	Saludar(nombre);
	Escribir "Escriba un numero:";
	Leer a;
	Leer b;
	Leer c;
	
	d=a+b;
	Escribir"El resultado de los dos primeros terminos:",d;
	
	e=d+c;
	Escribir "La suma de los tres terminos es:",e;

	d= sumar2numeros(a, b);
	
	Escribir "El resultado (funcion) es:",d;
	e= sumar3numeros( a, b, c);
	
	Escribir "El resultado (funcion) es:",e;
FinAlgoritmo

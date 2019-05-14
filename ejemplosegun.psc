Algoritmo ejemplosegun
	Definir datoescogido, a, b, c Como Entero;
	Escribir "--------calculadora basica----------";
	Escribir "Opciones: ";
	Escribir "1: Sumar";
	Escribir "2: Restar";
	Escribir "3: Multiplicar";
	Escribir "4: Dvidir";
	
	Leer datoescogido;
	Segun datoescogido Hacer
		1:
			Escribir "Ingrese 2 numeros";
			Leer a,b;
			c= a + b;
			Escribir "La suma es:",c;
		2:
			Escribir "Ingrese 2 numeros";
			Leer a,b;
			c= a - b;
			Escribir "La resta es:",c;
		3:
			Escribir "Ingrese 2 numeros";
			Leer a,b;
			c= a * b;
			Escribir "La multiplicacion es:",c;
		4:
			Escribir "Ingrese 2 numeros";
			Leer a,b;
			c= a / b;
			Escribir "La division es:",c;
		De Otro Modo:
			Escribir "Opcion invalida";
	Fin Segun
FinAlgoritmo

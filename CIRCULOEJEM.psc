Algoritmo circulo
	Definir a,b,c,d Como Real;
	Escribir "Inserte el valor del radio del circulo:";
	Leer a;
	
	si a>0 Entonces
		b=2*a;
		Escribir "El diametro del circulo es:", b;
		c=2*PI*a;
		Escribir "La circunferencia del circulo es:", c;
		d=PI*(a^2);
		Escribir "El area del circulo es:", d;
	SiNo
		Escribir "No se aceptan numeros negativos";
	FinSi
	
	
FinAlgoritmo

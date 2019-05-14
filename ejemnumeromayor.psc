Algoritmo NUMEROMAYOR
	Definir q,r,p Como Entero;
	Escribir 'Escriba los tres datos:';
	Leer q;
	Leer r;
	Leer p;
	Si q>p y q>r Entonces
		Escribir "El numero mayor es:",q;
	SiNo
		si p>q y p>r Entonces
			Escribir "El numero mayor es: ",p;
		SiNo
			si r>p y r>q Entonces
				Escribir "El numero mayor es:", r;
			FinSi
			
		FinSi
	FinSi

FinAlgoritmo


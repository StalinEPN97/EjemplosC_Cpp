/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int datoescogido;
	printf("Ingrese una opcion del 1 al 3\n");
	scanf("%i",&datoescogido);
	switch (datoescogido) {
	case 1:
		printf("Escogio opcion 1\n");
		break;
	case 2:
		printf("Escogio opcion 2\n");
		break;
	case 3:
		printf("Escogio opcion 3\n");
		break;
	default:
		printf("Opcion invalida\n");
	}
	return 0;
}


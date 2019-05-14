/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int a;
	int b;
	printf("iNSERTE LOS DATOS:\n");
	scanf("%i",&a);
	scanf("%i",&b);
	if (a<b) {
		printf("%i es MENOR que %i\n",a,b);
	} else {
		if (a>b) {
			printf("%ies MAYOR que %i\n",a,b);
		} else {
			printf("%ies IGUAL que%i\n",a,b);
		}
	}
	return 0;
}


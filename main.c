/* Programa para sumar n numeros
 * Hecho por DUlCE GARCIA
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int n, arreglo[100], indice;
	printf("Cuantos numeros va a sumar:\n");
	scanf("%d", &n);
	for(indice=0;indice<n;indice++){
		printf("Cual es el numero  %d: ", indice);
		scanf("%d", &(arreglo[indice]));
	}
	return 0;
}


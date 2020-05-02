/* Programa para sumar n numeros
 * Hecho por DUlCE GARCIA
 */


#include <stdio.h>
#include "util.h"

int main(int argc, char **argv)
{
	int n, arreglo[100], indice, suma=0;
	printf("Cuantos numeros va a sumar:\n");
	scanf("%d", &n);
	leerArreglo(n, arreglo);
	for(indice=0; indice<n; indice++)
	suma+=arreglo[indice];
	printf("La suma es: %d \n", suma);
	return 0;
}


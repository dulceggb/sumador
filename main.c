/* Programa para sumar n numeros
 * Hecho por DUlCE GARCIA
 */


#include <stdio.h>
#include "util.h"

int main(int argc, char **argv)
{
	int n, arreglo[100], indice;
	printf("Cuantos numeros va a sumar:\n");
	scanf("%d", &n);
	leerArreglo(n, arreglo);
	return 0;
}


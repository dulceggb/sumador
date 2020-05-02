/* Programa para sumar n numeros
 * Hecho por DUlCE GARCIA
 */


#include <stdio.h>

void leerArreglo(int n, int arreglo[])
{
	int indice;
	
	for(indice=0;indice<n;indice++){
		printf("Cual es el numero  %d: ", indice);
		scanf("%d", &(arreglo[indice]));
	}
}


/*
12 de Febrero de 2025
Ana Karen Quiroz Rojas
Segundo Programa
*/
#include <stdlib.h>
#include <stdio.h>

int main ( )
{
char nombre [10];
	printf ("�Cu�l es tu nombre?\n");
	scanf ("%s", nombre);
	printf ("Hola, %s este es el segundo programa del curso PB2025\n", nombre);

int edad;
float temperatura;
	printf ("Introduce tu edad \n");
	scanf ("%i", &edad);
	printf ("�Qu� temperatura marc� el termometro la �ltima vez que fuiste al supermercado \n");
	scanf ("%f", &temperatura);

	printf ("Tu edad es: %i \n", edad);
	printf ("Tu ultimo registro de temperatura fue: %f \n", temperatura);

	printf ("Tu nombre es %s, tu edad es de %i a�os y tu �ltimo registro de temperatura es de %f grados\n", nombre, edad, temperatura);
exit (0);
}

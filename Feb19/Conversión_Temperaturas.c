/*
19 de feb de 2025
*/
#include <stdio.h> 
#include <stdlib.h>

int main()
{
	float Tc,Tk;
	printf("Escribe el valor de la temperatura en grados Celcius que quieras convertir a grados Kelvin");
	scanf ("%f", &Tc);
	Tk=Tc+273.15;
	printf ("La temperatura en grados Kelvin es: %f \n", Tk);
	exit (0);
}
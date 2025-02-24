/*Revisión del ejercicio del 19 de feb de 2025
Escrito el 24 de febrero*/

#include<stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float x,y,z; //Coordenadas cartesianas de entrada
	float r,thetha,phi; //Coordenadas esfericas de salida
	float rc,thetha_c,zc; //Coordenadas cilindricas de salida

	printf("Introduce los valores de las variables x,y,z que quieras convertir: \n");
	scanf("%f %f %f", &x, &y, &z);

	//Realizo operaciones de transformación de coordenadas
	//Coordenadas esfericas
	
	r=sqrt((x*x) + (y*y) + (z*z));
	thetha=atan(y/x);
	phi=acos(z / sqrt ((x*x) + (y*y) + (z*z)));

	rc=sqrt((x*x)+(y*y));
	thetha_c=atan(x/y);
	zc=z;
	
	//Salida

	printf("Las coordenadas esfericas son: r=%f, thetha=%f y phi=%f\n", r,thetha,phi);
	printf("Las coordenadas cilindricas son: rc=%f,thetha_c=%f y zc=%f", rc,thetha_c,zc);

	

}